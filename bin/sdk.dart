import 'dart:io';
import 'package:code_buffer/code_buffer.dart';
import 'package:dart_os/src/compiler/c.dart';
import 'package:front_end/src/api_prototype/front_end.dart';
import 'package:front_end/src/api_prototype/standard_file_system.dart';
import 'package:front_end/src/api_unstable/compiler_state.dart';
import 'package:front_end/src/api_unstable/compiler_state.dart';
import 'package:front_end/src/api_unstable/dart2js.dart';
import 'package:front_end/src/byte_store/byte_store.dart';
import 'package:kernel/kernel.dart';
import 'package:kernel/target/targets.dart';
import 'package:path/path.dart' as p;
import 'paths.dart';

main() async {
  var options = new CompilerOptions()
    ..compileSdk = true
    ..sdkRoot = p.toUri(dart2cRoot)
    ..chaseDependencies = true
    ..debugDump = true;
  var component = await kernelForComponent(
      [p.toUri(p.join(dart2cRoot, 'sdk.dart'))], options);
  writeComponentToBinary(component, p.join(dart2cRoot, 'lib', '_internal', 'kernel.dill'));
}
