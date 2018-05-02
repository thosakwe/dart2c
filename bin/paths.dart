import 'dart:io';
import 'package:path/path.dart' as p;

final String sdkRoot =
    p.absolute(p.normalize(p.join(Platform.resolvedExecutable, '..', '..')));

final String dart2cRoot = p.absolute(
    p.normalize(p.join(p.dirname(Platform.script.toFilePath()), '..', 'sdk')));
