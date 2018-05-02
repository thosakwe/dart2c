import 'dart:io';
import 'package:code_buffer/code_buffer.dart';
import 'package:dart_os/src/compiler/c.dart';
import 'package:front_end/src/api_prototype/front_end.dart';
import 'package:front_end/src/api_prototype/standard_file_system.dart';
import 'package:front_end/src/api_unstable/compiler_state.dart';
import 'package:front_end/src/api_unstable/compiler_state.dart';
import 'package:front_end/src/api_unstable/dart2js.dart';
import 'package:front_end/src/byte_store/byte_store.dart';
import 'package:kernel/target/targets.dart';
import 'package:path/path.dart' as p;
import 'paths.dart';

main(List<String> args) async {
  targets['bare'] = (flags) => new BareTarget(flags);

  // Find the SDK, and DDC summaries
  // Compiler opts
  var state = await initializeCompiler(
    null,
    getTarget(
      'bare',
      new TargetFlags(
        strongMode: true,
        treeShake: true,
        syncAsync: true,
      ),
    ),
    p.toUri(p.join(dart2cRoot, 'lib', 'libraries.json')),
//    p.toUri(p.join(sdkRoot, 'lib', 'libraries.json')),
    p.toUri(p.join(dart2cRoot, 'lib', '_internal', 'kernel.dill')),
    //p.toUri(p.join(sdkRoot, 'lib', '_internal', 'vm_outline_strong.dill')),
    p.toUri(p.join(args[0], '..', '.packages')),
  );
  state.options.compileSdk = true;
  state.options.sdkRoot = p.toUri(dart2cRoot);
  state.options.linkedDependencies.clear();

  // Read + compile
  var input = new File(args[0]).absolute;
  var component = await compile(
    state,
    true,
    StandardFileSystem.instance,
    stderr.writeln,
    p.toUri(p.absolute(args[0])),
  );
  var translator = new CTranslator(p.setExtension(input.path, '.dart.h'));
  component.accept(translator);
  var impl = new CodeBuffer(), header = new CodeBuffer();
  translator..header.generate(header)..implementation.generate(impl);
  await new File(translator.headerPath).writeAsString(header.toString());
  await new File(p.setExtension(translator.headerPath, '.c'))
      .writeAsString(impl.toString());
}

class BareTarget extends NoneTarget {
  BareTarget(TargetFlags flags) : super(flags);

  @override
  String get name => 'bare';

  @override
  bool mayDefineRestrictedType(Uri uri) =>
      uri.scheme == 'dart' && const ['core', 'bare'].contains(uri.path);
}
