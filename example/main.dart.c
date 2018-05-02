#include "main.dart.h"
 
void dart_os_main() {
  return dart_core_print("Hello, world!");
}
 
dart_int* dart_os_main2() {
  return dart_os_squaredSum(3, 4);
}
 
dart_int* dart_os_squaredSum(dart_int* a, dart_int* b) {
  dart_int* c = dart_operator_multiply(a, b);
  return dart_operator_multiply(c, c);
}
 
void* dart_async__fatal(void* msg) {
}
 
dart_Function* dart_async__asyncThenWrapperHelper(void* continuation) {
}
 
dart_Function* dart_async__asyncErrorWrapperHelper(void* continuation) {
}
 
dart_Future* dart_async__awaitHelper(void* object, dart_Function* thenCallback, dart_Function* errorCallback, void* awaiter) {
}
 
void dart_async__asyncStarListenHelper(void* object, void* awaiter) {
}
 
void dart_async__asyncStarMoveNextHelper(void* stream) {
}
 
void dart_async__completeOnAsyncReturn(dart_Completer* completer, dart_Object* value) {
}
 
dart_Object* dart_async__asyncStackTraceHelper(dart_Function* async_op) {
}
 
void dart_async__clearAsyncThreadStackTrace() {
}
 
void dart_async__setAsyncThreadStackTrace(dart_StackTrace* stackTrace) {
}
 
void dart_async__moveNextDebuggerStepCheck(dart_Function* async_op) {
}
 
void dart_async__setScheduleImmediateClosure(void* closure) {
}
 
void dart_async__ensureScheduleImmediate() {
}
 
void* dart_async__invokeErrorHandler(dart_Function* errorHandler, dart_Object* error, dart_StackTrace* stackTrace) {
}
 
dart_Function* dart_async__registerErrorHandler(dart_Function* errorHandler, dart_Zone* zone) {
}
 
void dart_async__completeWithErrorCallback(dart__Future* result, void* error, void* stackTrace) {
}
 
void dart_async__asyncCompleteWithErrorCallback(dart__Future* result, void* error, void* stackTrace) {
}
 
dart_Object* dart_async__nonNullError(dart_Object* error) {
}
 
void dart_async__microtaskLoop() {
}
 
void dart_async__startMicrotaskLoop() {
}
 
void dart_async__scheduleAsyncCallback(void* callback) {
}
 
void dart_async__schedulePriorityAsyncCallback(void* callback) {
}
 
void dart_async_scheduleMicrotask(void* callback) {
}
 
void dart_async__runGuarded(void* notificationHandler) {
}
 
void dart_async__nullDataHandler(dart_Object* value) {
}
 
void dart_async__nullErrorHandler(dart_Object* error, dart_StackTrace* stackTrace) {
}
 
void dart_async__nullDoneHandler() {
}
 
void* dart_async__runUserCode(void* userCode, void* onSuccess, void* onError) {
}
 
void dart_async__cancelAndError(dart_StreamSubscription* subscription, dart__Future* future, void* error, dart_StackTrace* stackTrace) {
}
 
void dart_async__cancelAndErrorWithReplacement(dart_StreamSubscription* subscription, dart__Future* future, void* error, dart_StackTrace* stackTrace) {
}
 
void* dart_async__cancelAndErrorClosure(dart_StreamSubscription* subscription, dart__Future* future) {
}
 
void dart_async__cancelAndValue(dart_StreamSubscription* subscription, dart__Future* future, void* value) {
}
 
void dart_async__addErrorWithReplacement(dart__EventSink* sink, void* error, void* stackTrace) {
}
 
dart_ZoneDelegate* dart_async__parentDelegate(dart__Zone* zone) {
}
 
void dart_async__rootHandleUncaughtError(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* error, dart_StackTrace* stackTrace) {
}
 
void* dart_async__rootRun(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f) {
}
 
void* dart_async__rootRunUnary(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f, void* arg) {
}
 
void* dart_async__rootRunBinary(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f, void* arg1, void* arg2) {
}
 
void* dart_async__rootRegisterCallback(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f) {
}
 
void* dart_async__rootRegisterUnaryCallback(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f) {
}
 
void* dart_async__rootRegisterBinaryCallback(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f) {
}
 
dart_AsyncError* dart_async__rootErrorCallback(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, dart_Object* error, dart_StackTrace* stackTrace) {
}
 
void dart_async__rootScheduleMicrotask(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f) {
}
 
dart_Timer* dart_async__rootCreateTimer(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, dart_Duration* duration, void* callback) {
}
 
dart_Timer* dart_async__rootCreatePeriodicTimer(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, dart_Duration* duration, void* callback) {
}
 
void dart_async__rootPrint(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, dart_String* line) {
}
 
void dart_async__printToZone(dart_String* line) {
}
 
dart_Zone* dart_async__rootFork(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, dart_ZoneSpecification* specification, dart_Map* zoneValues) {
}
 
void* dart_async_runZoned(void* body) {
}
 
void dart_collection__rehashObjects(dart_List* objects) {
}
 
dart_bool* dart_collection__defaultEquals(void* a, void* b) {
}
 
dart_int* dart_collection__defaultHashCode(void* a) {
}
 
dart_bool* dart_collection__isToStringVisiting(dart_Object* o) {
}
 
void dart_collection__iterablePartsToStrings(dart_Iterable* iterable, dart_List* parts) {
}
 
dart_int* dart_collection__dynamicCompare(void* a, void* b) {
}
 
void* dart_collection__defaultCompare() {
}
 
dart_double* dart_convert__parseDouble(dart_String* source, dart_int* start, dart_int* end) {
}
 
dart_String* dart_convert_base64Encode(dart_List* bytes) {
}
 
dart_String* dart_convert_base64UrlEncode(dart_List* bytes) {
}
 
dart_Uint8List* dart_convert_base64Decode(dart_String* source) {
}
 
dart_String* dart_convert_jsonEncode(dart_Object* object) {
}
 
void* dart_convert_jsonDecode(dart_String* source) {
}
 
void* dart_convert__defaultToEncodable(void* object) {
}
 
dart_bool* dart_convert__isLeadSurrogate(dart_int* codeUnit) {
}
 
dart_bool* dart_convert__isTailSurrogate(dart_int* codeUnit) {
}
 
dart_int* dart_convert__combineSurrogatePair(dart_int* lead, dart_int* tail) {
}
 
void* dart_developer__log(dart_String* message, dart_int* timestamp, dart_int* sequenceNumber, dart_int* level, dart_String* name, dart_Zone* zone, dart_Object* error, dart_StackTrace* stackTrace) {
}
 
void* dart_developer__runExtension(void* handler, dart_String* method, dart_List* parameterKeys, dart_List* parameterValues, dart_SendPort* replyPort, dart_Object* id, dart_bool* trace_service) {
}
 
void* dart_developer__postResponse(dart_SendPort* replyPort, dart_Object* id, dart_ServiceExtensionResponse* response, dart_bool* trace_service) {
}
 
dart_UserTag* dart_developer__getCurrentTag() {
}
 
dart_UserTag* dart_developer__getDefaultTag() {
}
 
void dart_developer_registerExtension(dart_String* method, void* handler) {
}
 
void dart_developer_postEvent(dart_String* eventKind, dart_Map* eventData) {
}
 
dart_String* dart_developer__argumentsAsJson(dart_Map* arguments) {
}
 
dart_bool* dart__internal__inquireIs64Bit() {
}
 
dart_bool* dart__internal__classRangeCheck(dart_int* cid, dart_int* lowerLimit, dart_int* upperLimit) {
}
 
dart_bool* dart__internal__classRangeCheckNegative(dart_int* cid, dart_int* lowerLimit, dart_int* upperLimit) {
}
 
void* dart__internal__prependTypeArguments(void* functionTypeArguments, void* parentTypeArguments, void* len) {
}
 
dart_Int32List* dart__internal__growRegExpStack(dart_Int32List* stack) {
}
 
void dart__internal__unsupportedPrint(dart_String* line) {
}
 
dart_int* dart__internal_hexDigitValue(dart_int* _char) {
}
 
dart_int* dart__internal_parseHexByte(dart_String* source, dart_int* index) {
}
 
dart_int* dart__internal__checkCount(dart_int* count) {
}
 
void dart_isolate__isolateScheduleImmediate(void* callback) {
}
 
void dart_isolate__runPendingImmediateCallback() {
}
 
void* dart_isolate__removePendingImmediateCallback() {
}
 
dart_Function* dart_isolate__getIsolateScheduleImmediateClosure() {
}
 
void dart_isolate__startMainIsolate(dart_Function* entryPoint, dart_List* args) {
}
 
void dart_isolate__startIsolate(dart_SendPort* parentPort, dart_Function* entryPoint, dart_List* args, void* message, dart_bool* isSpawnUri, dart_RawReceivePort* controlPort, dart_List* capabilities) {
}
 
void* dart_isolate__setupHooks() {
}
 
dart_double* dart_math__doublePow(dart_double* base, dart_double* exponent) {
}
 
dart_double* dart_math__pow(dart_double* base, dart_double* exponent) {
}
 
dart_int* dart_math__intPow(dart_int* base, dart_int* exponent) {
}
 
dart_double* dart_math__atan2(dart_double* a, dart_double* b) {
}
 
dart_double* dart_math__sin(dart_double* x) {
}
 
dart_double* dart_math__cos(dart_double* x) {
}
 
dart_double* dart_math__tan(dart_double* x) {
}
 
dart_double* dart_math__acos(dart_double* x) {
}
 
dart_double* dart_math__asin(dart_double* x) {
}
 
dart_double* dart_math__atan(dart_double* x) {
}
 
dart_double* dart_math__sqrt(dart_double* x) {
}
 
dart_double* dart_math__exp(dart_double* x) {
}
 
dart_double* dart_math__log(dart_double* x) {
}
 
void* dart_math__clampToZero(void* value) {
}
 
dart_String* dart_mirrors__n(dart_Symbol* symbol) {
}
 
dart_Symbol* dart_mirrors__s(dart_String* name) {
}
 
dart_Symbol* dart_mirrors__computeQualifiedName(dart_DeclarationMirror* owner, dart_Symbol* simpleName) {
}
 
dart_String* dart_mirrors__makeSignatureString(dart_TypeMirror* returnType, dart_List* parameters) {
}
 
dart_SourceLocation* dart_mirrors__location(void* reflectee) {
}
 
dart_List* dart_mirrors__metadata(void* reflectee) {
}
 
dart_bool* dart_mirrors__subtypeTest(dart_Type* a, dart_Type* b) {
}
 
dart_Symbol* dart_mirrors__asSetter(dart_Symbol* getter, dart_LibraryMirror* library) {
}
 
dart_int* dart_typed_data__byteSwap16(dart_int* value) {
}
 
dart_int* dart_typed_data__byteSwap32(dart_int* value) {
}
 
dart_int* dart_typed_data__byteSwap64(dart_int* value) {
}
 
dart_int* dart_typed_data__toInt(dart_int* value, dart_int* mask) {
}
 
dart_int* dart_typed_data__toInt8(dart_int* value) {
}
 
dart_int* dart_typed_data__toUint8(dart_int* value) {
}
 
dart_int* dart_typed_data__toClampedUint8(dart_int* value) {
}
 
dart_int* dart_typed_data__toInt16(dart_int* value) {
}
 
dart_int* dart_typed_data__toUint16(dart_int* value) {
}
 
dart_int* dart_typed_data__toInt32(dart_int* value) {
}
 
dart_int* dart_typed_data__toUint32(dart_int* value) {
}
 
dart_int* dart_typed_data__toInt64(dart_int* value) {
}
 
dart_int* dart_typed_data__toUint64(dart_int* value) {
}
 
void dart_typed_data__rangeCheck(dart_int* listLength, dart_int* start, dart_int* length) {
}
 
void dart_typed_data__offsetAlignmentCheck(dart_int* offset, dart_int* alignment) {
}
 
dart_int* dart_typed_data__defaultIfNull(void* object, void* value) {
}
 
void* vmservice_io__sanitizeWindowsPath(void* path) {
}
 
void* vmservice_io__trimWindowsPath(void* path) {
}
 
void* vmservice_io__enforceTrailingSlash(void* uri) {
}
 
void* vmservice_io__log(void* msg) {
}
 
void vmservice_io__sendResourceResponse(dart_SendPort* sp, dart_int* tag, dart_Uri* uri, dart_Uri* resolvedUri, dart_String* libraryUrl, void* data) {
}
 
void vmservice_io__sendExtensionImportResponse(dart_SendPort* sp, dart_Uri* uri, dart_String* libraryUrl, dart_String* resolvedUri) {
}
 
void vmservice_io__loadHttp(dart_SendPort* sp, dart_int* tag, dart_Uri* uri, dart_Uri* resolvedUri, dart_String* libraryUrl) {
}
 
void vmservice_io__loadFile(dart_IsolateLoaderState* loaderState, dart_SendPort* sp, dart_int* tag, dart_Uri* uri, dart_Uri* resolvedUri, dart_String* libraryUrl) {
}
 
void vmservice_io__loadDataUri(dart_SendPort* sp, dart_int* tag, dart_Uri* uri, dart_Uri* resolvedUri, dart_String* libraryUrl) {
}
 
void* vmservice_io__loadPackage(dart_IsolateLoaderState* loaderState, dart_SendPort* sp, dart_bool* traceLoading, dart_int* tag, dart_Uri* uri, dart_Uri* resolvedUri, dart_String* libraryUrl) {
}
 
void* vmservice_io__handleResourceRequest(dart_IsolateLoaderState* loaderState, dart_SendPort* sp, dart_bool* traceLoading, dart_int* tag, dart_Uri* uri, dart_Uri* resolvedUri, dart_String* libraryUrl) {
}
 
void* vmservice_io__parsePackagesFile(dart_SendPort* sp, dart_bool* traceLoading, dart_Uri* packagesFile, dart_List* data) {
}
 
void* vmservice_io__loadPackagesFile(dart_SendPort* sp, dart_bool* traceLoading, dart_Uri* packagesFile) {
}
 
void* vmservice_io__findPackagesFile(dart_SendPort* sp, dart_bool* traceLoading, dart_Uri* base) {
}
 
dart_Future* vmservice_io__loadHttpPackagesFile(dart_SendPort* sp, dart_bool* traceLoading, dart_Uri* resource) {
}
 
void* vmservice_io__loadPackagesData(void* sp, void* traceLoading, void* resource) {
}
 
void* vmservice_io__handlePackagesRequest(dart_SendPort* sp, dart_bool* traceLoading, dart_int* tag, dart_Uri* resource) {
}
 
void vmservice_io_shutdownLoaders() {
}
 
void* vmservice_io__processLoadRequest(void* request) {
}
 
void vmservice_io_serverPrint(dart_String* s) {
}
 
void vmservice_io__notifyServerState(dart_String* uri) {
}
 
void* vmservice_io__lazyServerBoot() {
}
 
dart_Future* vmservice_io_cleanupCallback() {
}
 
dart_Future* vmservice_io_createTempDirCallback(dart_String* base) {
}
 
dart_Future* vmservice_io_deleteDirCallback(dart_Uri* path) {
}
 
dart_Future* vmservice_io_writeFileCallback(dart_Uri* path, dart_List* bytes) {
}
 
dart_Future* vmservice_io_writeStreamFileCallback(dart_Uri* path, dart_Stream* bytes) {
}
 
dart_Future* vmservice_io_readFileCallback(dart_Uri* path) {
}
 
dart_Future* vmservice_io_listFilesCallback(dart_Uri* dirPath) {
}
 
dart_Future* vmservice_io_serverInformationCallback() {
}
 
dart_Future* vmservice_io_webServerControlCallback(dart_bool* enable) {
}
 
dart_Null* vmservice_io__clearFuture(void* _) {
}
 
void* vmservice_io__onSignal(dart_ProcessSignal* signal) {
}
 
void* vmservice_io__registerSignalHandler() {
}
 
void* vmservice_io_main() {
}
 
void* vmservice_io__shutdown() {
}
 
dart_List* dart__vmservice__decodeAssets(dart_Uint8List* data) {
}
 
dart_Map* dart__vmservice_get_assets() {
}
 
dart_String* dart__vmservice__encodeDevFSDisabledError(dart_Message* message) {
}
 
dart_String* dart__vmservice__encodeFileSystemAlreadyExistsError(dart_Message* message, dart_String* fsName) {
}
 
dart_String* dart__vmservice__encodeFileSystemDoesNotExistError(dart_Message* message, dart_String* fsName) {
}
 
dart_bool* dart__vmservice_sendIsolateServiceMessage(dart_SendPort* sp, dart_List* m) {
}
 
void dart__vmservice_sendRootServiceMessage(dart_List* m) {
}
 
void dart__vmservice_sendObjectRootServiceMessage(dart_List* m) {
}
 
dart_String* dart__vmservice__makeAuthToken() {
}
 
dart_String* dart__vmservice_encodeRpcError(dart_Message* message, dart_int* code) {
}
 
dart_String* dart__vmservice_encodeMissingParamError(dart_Message* message, dart_String* param) {
}
 
dart_String* dart__vmservice_encodeInvalidParamError(dart_Message* message, dart_String* param) {
}
 
dart_String* dart__vmservice_encodeResult(dart_Message* message, dart_Map* result) {
}
 
dart_String* dart__vmservice_encodeSuccess(dart_Message* message) {
}
 
dart_RawReceivePort* dart__vmservice_boot() {
}
 
void dart__vmservice__registerIsolate(dart_int* port_id, dart_SendPort* sp, dart_String* name) {
}
 
void dart__vmservice__onStart() {
}
 
void dart__vmservice__onExit() {
}
 
void dart__vmservice_onServerAddressChange(dart_String* address) {
}
 
dart_bool* dart__vmservice__vmListenStream(dart_String* streamId) {
}
 
void dart__vmservice__vmCancelStream(dart_String* streamId) {
}
 
dart_Uint8List* dart__vmservice__requestAssets() {
}
 
void dart__vmservice__spawnUriNotify(void* obj, dart_String* token) {
}
 
void builtin__printString(dart_String* s) {
}
 
void builtin__print(void* arg) {
}
 
void* builtin__getPrintClosure() {
}
 
dart_Future* builtin__makeLoaderRequest(dart_int* tag, dart_String* uri) {
}
 
void* builtin__log(void* msg) {
}
 
void* builtin__sanitizeWindowsPath(void* path) {
}
 
void* builtin__trimWindowsPath(void* path) {
}
 
void* builtin__enforceTrailingSlash(void* uri) {
}
 
void builtin__setWorkingDirectory(dart_String* cwd) {
}
 
void* builtin__setPackageRoot(dart_String* packageRoot) {
}
 
void builtin__setPackagesMap(dart_String* packagesParam) {
}
 
dart_String* builtin__resolveScriptUri(dart_String* scriptName) {
}
 
dart_String* builtin__resolveInWorkingDirectory(dart_String* fileName) {
}
 
dart_Uri* builtin__resolvePackageUri(dart_Uri* uri) {
}
 
dart_String* builtin__filePathFromUri(dart_String* userUri) {
}
 
void* builtin__libraryFilePath(dart_String* libraryUri) {
}
 
void* builtin__setupHooks() {
}
 
dart_Future* builtin__resourceReadAsBytes(dart_Uri* uri) {
}
 
dart_Future* builtin__getPackageRootFuture() {
}
 
dart_Future* builtin__getPackageConfigFuture() {
}
 
dart_Future* builtin__resolvePackageUriFuture(dart_Uri* packageUri) {
}
 
void* dart_io__setupHooks() {
}
 
dart_Uri* dart_io__uriBaseClosure() {
}
 
void* dart_io__getUriBaseClosure() {
}
 
dart_Uint8List* dart_io__makeUint8ListView(dart_Uint8List* source, dart_int* offsetInBytes, dart_int* length) {
}
 
dart_Function* dart_io__getWatchSignalInternal() {
}
 
dart_Future* dart_io__runNonInteractiveProcess(dart_String* path, dart_List* arguments, dart_String* workingDirectory, dart_Map* environment, dart_bool* includeParentEnvironment, dart_bool* runInShell, dart_Encoding* stdoutEncoding, dart_Encoding* stderrEncoding) {
}
 
dart_ProcessResult* dart_io__runNonInteractiveProcessSync(dart_String* executable, dart_List* arguments, dart_String* workingDirectory, dart_Map* environment, dart_bool* includeParentEnvironment, dart_bool* runInShell, dart_Encoding* stdoutEncoding, dart_Encoding* stderrEncoding) {
}
 
void dart_io__throwOnBadPort(dart_int* port) {
}
 
dart_Datagram* dart_io__makeDatagram(dart_List* data, dart_String* address, dart_List* in_addr, dart_int* port) {
}
 
void* dart_io__getStdioHandle(dart__NativeSocket* socket, dart_int* num) {
}
 
void* dart_io__getSocketType(dart__NativeSocket* nativeSocket) {
}
 
dart_bool* dart_io__isErrorResponse(void* response) {
}
 
void* dart_io__exceptionFromResponse(void* response, dart_String* message, dart_String* path) {
}
 
dart__BufferAndStart* dart_io__ensureFastAndSerializableByteData(dart_List* buffer, dart_int* start, dart_int* end) {
}
 
void dart_io__validateZLibWindowBits(dart_int* windowBits) {
}
 
void dart_io__validateZLibeLevel(dart_int* level) {
}
 
void dart_io__validateZLibMemLevel(dart_int* memLevel) {
}
 
void dart_io__validateZLibStrategy(dart_int* strategy) {
}
 
void dart_io_exit(dart_int* code) {
}
 
void dart_io_get_exitCode(dart_int* code) {
}
 
dart_int* dart_io_get_exitCode() {
}
 
void dart_io_sleep(dart_Duration* duration) {
}
 
dart_int* dart_io_get_pid() {
}
 
void dart_io__setStdioFDs(dart_int* stdin, dart_int* stdout, dart_int* stderr) {
}
 
dart_Stdin* dart_io_get_stdin() {
}
 
dart_Stdout* dart_io_get_stdout() {
}
 
dart_Stdout* dart_io_get_stderr() {
}
 
dart_StdioType* dart_io_stdioType(void* object) {
}
 
void* dart_cli__getWaitForEvent() {
}
 
void* dart_cli_waitFor(dart_Future* future) {
}
 
dart_int* dart_core__max(dart_int* a, dart_int* b) {
}
 
dart_int* dart_core__min(dart_int* a, dart_int* b) {
}
 
dart_Uint32List* dart_core__newDigits(dart_int* length) {
}
 
void* dart_core__classRangeAssert(dart_int* position, void* instance, dart__Type* type, dart_int* cid, dart_int* lowerLimit, dart_int* upperLimit) {
}
 
void* dart_core__classIdEqualsAssert(dart_int* position, void* instance, dart__Type* type, dart_int* cid, dart_int* otherCid) {
}
 
void* dart_core__completeDeferredLoads() {
}
 
dart_int* dart_core__getHash(void* obj) {
}
 
void dart_core__setHash(void* obj, void* hash) {
}
 
dart_Uri* dart_core__unsupportedUriBase() {
}
 
void dart_core_print(dart_Object* object) {
}
 
dart_bool* dart_core__isLeadSurrogate(dart_int* code) {
}
 
dart_bool* dart_core__isTrailSurrogate(dart_int* code) {
}
 
dart_int* dart_core__combineSurrogatePair(dart_int* start, dart_int* end) {
}
 
dart_List* dart_core__createTables() {
}
 
dart_int* dart_core__scan(dart_String* uri, dart_int* start, dart_int* end, dart_int* state, dart_List* indices) {
}
 
dart_int* dart_core__startsWithData(dart_String* text, dart_int* start) {
}
 
dart_int* dart_core__stringOrNullLength(dart_String* s) {
}
 
dart_String* dart__http__getHttpVersion() {
}
 