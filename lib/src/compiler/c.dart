import 'package:c_builder/c_builder.dart' as c;
import 'package:code_buffer/code_buffer.dart';
import 'package:path/path.dart' as p;
import 'package:kernel/ast.dart' hide BinarySink;
import 'package:kernel/visitor.dart';

class CTranslator extends TreeVisitor {
  final c.CompilationUnit header = new c.CompilationUnit(),
      implementation = new c.CompilationUnit();
  final String headerPath;
  CTypeCompiler _typeCompiler;

  CTranslator(this.headerPath);

  CTypeCompiler get typeCompiler => _typeCompiler ?? new CTypeCompiler(this);

  static String underscoreName(String name) =>
      name.replaceAll('.', '_').replaceAll('::', '_');

  static String normalizeIdentifier(String name) {
    switch (name) {
      case '*':
        return 'dart_operator_multiply';
      case '/':
        return 'dart_operator_divide';
      case '%':
        return 'dart_operator_modulo';
      case '+':
        return 'dart_operator_add';
      case '-':
        return 'dart_operator_subtract';
    }

    return name
        .replaceAll('char', '_char')
        .replaceAll('&', '_')
        .replaceAll('#', '_');
  }

  @override
  visitComponent(Component node) {
    header.comments.addAll(['Compiled via dart2c']);
    implementation.body.add(new c.Include.quotes(p.basename(headerPath)));
    node.libraries.forEach(visitLibrary);
  }

  @override
  visitLibrary(Library node) {
    if (node.name != null) {
      node.classes.forEach(visitClass);
      node.procedures.forEach(visitProcedure);
    }
  }

  @override
  visitClass(Class node) {
    var struct = new c.Struct();

    for (var field in node.fields) {
      struct.fields.add(new c.Field(
          compileType(field.type), normalizeIdentifier(field.name.name), null));
    }

    header.body.add(new c.Typedef(
        struct, 'dart_' + normalizeIdentifier(node.canonicalName.name)));
  }

  @override
  visitProcedure(Procedure node) {
    if (node.function.body == null)
      return print('Skipping empty: `${node.name}`');

    var nodeName = node.name.name;

    if (node.isGetter)
      nodeName = 'get_$nodeName';
    else if (node.isSetter) nodeName = 'get_$nodeName';

    var sig = new c.FunctionSignature(compileType(node.function.returnType),
        underscoreName(node.enclosingLibrary.name) + '_' + nodeName);
    header.body.add(sig);
    var function = new c.CFunction(sig);
    implementation.body.add(function);

    for (var param in node.function.positionalParameters) {
      sig.parameters.add(new c.Parameter(
          compileType(param.type), normalizeIdentifier(param.name)));
    }

    var statementCompiler = new CStatementCompiler(this, function.body);
    node.function.body.accept(statementCompiler);
  }

  c.CType compileType(DartType type) =>
      type.accept(typeCompiler) ?? c.CType.void$.pointer();

  c.Expression compileExpression(Expression node, List<c.Code> function) =>
      node?.accept(new CExpressionCompiler(this, function)) ??
      new c.Expression.value("Unsupported expression: ${node?.runtimeType}");

  void compileStatement(Statement node, List<c.Code> function) =>
      node?.accept(new CStatementCompiler(this, function));
}

class CStatementCompiler extends StatementVisitor {
  final CTranslator translator;
  final List<c.Code> function;

  CStatementCompiler(this.translator, this.function);

  @override
  visitBlock(Block node) {
    node.statements.forEach((s) => translator.compileStatement(s, function));
  }

  @override
  visitBreakStatement(BreakStatement node) {
    function.add(new c.Expression('break'));
  }

  @override
  visitReturnStatement(ReturnStatement node) {
    function.add(
        translator.compileExpression(node.expression, function).asReturn());
  }

  @override
  visitExpressionStatement(ExpressionStatement node) {
    function.add(translator.compileExpression(node.expression, function));
  }

  @override
  visitWhileStatement(WhileStatement node) {
    var condition = translator.compileExpression(node.condition, function);
    var loop = new c.ControlFlow.while$(condition);
    translator.compileStatement(node.body, function);
    function.add(loop);
  }

  @override
  visitVariableDeclaration(VariableDeclaration node) {
    var field = new c.Field(translator.compileType(node.type), node.name,
        translator.compileExpression(node.initializer, function));
    function.add(field);
  }
}

class CExpressionCompiler extends ExpressionVisitor<c.Expression> {
  final CTranslator translator;
  final List<c.Code> function;

  CExpressionCompiler(this.translator, this.function);

  @override
  c.Expression visitStaticInvocation(StaticInvocation node) {
    var target = new c.Expression(CTranslator.underscoreName(
        node.target.enclosingLibrary.name + '_' + node.name.name));
    var args = node.arguments.positional
        .map((e) => translator.compileExpression(e, function));
    return target.invoke(args);
  }

  @override
  c.Expression visitMethodInvocation(MethodInvocation node) {
    var method =
        new c.Expression(CTranslator.normalizeIdentifier(node.name.name));
    var target = translator.compileExpression(node.receiver, function);
    var args = [target];
    args.addAll(node.arguments.positional
        .map((e) => translator.compileExpression(e, function)));
    return method.invoke(args);
  }

  static final RegExp _semi = new RegExp(r';$');

  @override
  c.Expression visitVariableGet(VariableGet node) =>
      new c.Expression(node.variable.name);

  @override
  c.Expression visitStringLiteral(StringLiteral node) =>
      new c.Expression.value(node.value);

  @override
  c.Expression visitIntLiteral(IntLiteral node) =>
      new c.Expression.value(node.value);
}

class CTypeCompiler extends DartTypeVisitor<c.CType> {
  final CTranslator translator;

  CTypeCompiler(this.translator);

  @override
  visitVoidType(VoidType node) => c.CType.void$;

  @override
  c.CType visitInterfaceType(InterfaceType node) {
    return new c.CType('dart_' + node.className.canonicalName.name).pointer();
  }
}
