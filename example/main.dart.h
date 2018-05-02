// Compiled via dart2c
void dart_os_main();
 
dart_int* dart_os_main2();
 
dart_int* dart_os_squaredSum(dart_int* a, dart_int* b);
 
typedef struct {
  dart_Completer* _completer;
  dart_bool* isSync;
} dart__AsyncAwaitCompleter;
 
typedef struct {
  dart_StreamController* controller;
  dart_Function* asyncStarBody;
  dart_bool* isAdding;
  dart_bool* onListenReceived;
  dart_bool* isScheduled;
  dart_bool* isSuspendedAtYield;
  dart_Completer* cancellationCompleter;
} dart__AsyncStarStreamController;
 
typedef struct {
  void* _closure;
} dart__ScheduleImmediate;
 
typedef struct {
  void* _factory;
} dart__TimerFactory;
 
typedef struct {
} dart__BroadcastStream;
 
typedef struct {
  dart_int* _STATE_EVENT_ID;
  dart_int* _STATE_FIRING;
  dart_int* _STATE_REMOVE_AFTER_FIRING;
  dart_int* _eventState;
  dart__BroadcastSubscription* _next;
  dart__BroadcastSubscription* _previous;
} dart__BroadcastSubscription;
 
typedef struct {
  dart_int* _STATE_INITIAL;
  dart_int* _STATE_EVENT_ID;
  dart_int* _STATE_FIRING;
  dart_int* _STATE_CLOSED;
  dart_int* _STATE_ADDSTREAM;
  void* onListen;
  void* onCancel;
  dart_int* _state;
  dart__BroadcastSubscription* _firstSubscription;
  dart__BroadcastSubscription* _lastSubscription;
  dart__AddStreamState* _addStreamState;
  dart__Future* _doneFuture;
} dart__BroadcastStreamController;
 
typedef struct {
} dart__SyncBroadcastStreamController;
 
typedef struct {
} dart__AsyncBroadcastStreamController;
 
typedef struct {
  dart__StreamImplEvents* _pending;
} dart__AsBroadcastStreamController;
 
typedef struct {
  dart_String* libraryName;
  dart_String* uri;
} dart_DeferredLibrary;
 
typedef struct {
  dart_String* _s;
} dart_DeferredLoadException;
 
typedef struct {
} dart_FutureOr;
 
typedef struct {
  dart__Future* _nullFuture;
  dart__Future* _falseFuture;
} dart_Future;
 
typedef struct {
  dart_String* message;
  dart_Duration* duration;
} dart_TimeoutException;
 
typedef struct {
} dart_Completer;
 
typedef struct {
  dart__Future* future;
} dart__Completer;
 
typedef struct {
} dart__AsyncCompleter;
 
typedef struct {
} dart__SyncCompleter;
 
typedef struct {
  dart_int* maskValue;
  dart_int* maskError;
  dart_int* maskTestError;
  dart_int* maskWhencomplete;
  dart_int* stateChain;
  dart_int* stateThen;
  dart_int* stateThenOnerror;
  dart_int* stateCatcherror;
  dart_int* stateCatcherrorTest;
  dart_int* stateWhencomplete;
  dart__FutureListener* _nextListener;
  dart__Future* result;
  dart_int* state;
  dart_Function* callback;
  dart_Function* errorCallback;
} dart__FutureListener;
 
typedef struct {
  dart_Function* _awaiter;
  dart_int* _stateIncomplete;
  dart_int* _statePendingComplete;
  dart_int* _stateChained;
  dart_int* _stateValue;
  dart_int* _stateError;
  dart_int* _state;
  dart_Zone* _zone;
  void* _resultOrListeners;
} dart__Future;
 
typedef struct {
  void* callback;
  dart__AsyncCallbackEntry* next;
} dart__AsyncCallbackEntry;
 
typedef struct {
} dart__AsyncRun;
 
typedef struct {
  void* _redirecting_;
} dart_Stream;
 
typedef struct {
} dart_StreamSubscription;
 
typedef struct {
} dart_EventSink;
 
typedef struct {
  dart_Stream* _stream;
} dart_StreamView;
 
typedef struct {
} dart_StreamConsumer;
 
typedef struct {
} dart_StreamSink;
 
typedef struct {
  void* _redirecting_;
} dart_StreamTransformer;
 
typedef struct {
} dart_StreamTransformerBase;
 
typedef struct {
} dart_StreamIterator;
 
typedef struct {
  dart_EventSink* _sink;
} dart__ControllerEventSinkWrapper;
 
typedef struct {
} dart_StreamController;
 
typedef struct {
} dart_SynchronousStreamController;
 
typedef struct {
} dart__StreamControllerLifecycle;
 
typedef struct {
  dart_int* _STATE_INITIAL;
  dart_int* _STATE_SUBSCRIBED;
  dart_int* _STATE_CANCELED;
  dart_int* _STATE_SUBSCRIPTION_MASK;
  dart_int* _STATE_CLOSED;
  dart_int* _STATE_ADDSTREAM;
  void* _varData;
  dart_int* _state;
  dart__Future* _doneFuture;
  void* onListen;
  void* onPause;
  void* onResume;
  void* onCancel;
} dart__StreamController;
 
typedef struct {
} dart__SyncStreamControllerDispatch;
 
typedef struct {
} dart__AsyncStreamControllerDispatch;
 
typedef struct {
} dart__AsyncStreamController;
 
typedef struct {
} dart__SyncStreamController;
 
typedef struct {
  dart__StreamControllerLifecycle* _controller;
} dart__ControllerStream;
 
typedef struct {
  dart__StreamControllerLifecycle* _controller;
} dart__ControllerSubscription;
 
typedef struct {
  dart_StreamController* _target;
} dart__StreamSinkWrapper;
 
typedef struct {
  dart__Future* addStreamFuture;
  dart_StreamSubscription* addSubscription;
} dart__AddStreamState;
 
typedef struct {
  void* varData;
} dart__StreamControllerAddStreamState;
 
typedef struct {
} dart__EventSink;
 
typedef struct {
} dart__EventDispatch;
 
typedef struct {
  dart_int* _STATE_CANCEL_ON_ERROR;
  dart_int* _STATE_CLOSED;
  dart_int* _STATE_INPUT_PAUSED;
  dart_int* _STATE_CANCELED;
  dart_int* _STATE_WAIT_FOR_CANCEL;
  dart_int* _STATE_IN_CALLBACK;
  dart_int* _STATE_HAS_PENDING;
  dart_int* _STATE_PAUSE_COUNT;
  void* _onData;
  dart_Function* _onError;
  void* _onDone;
  dart_Zone* _zone;
  dart_int* _state;
  dart_Future* _cancelFuture;
  dart__PendingEvents* _pending;
} dart__BufferingStreamSubscription;
 
typedef struct {
  dart_Function* _awaiter;
  dart_Function* _generator;
} dart__StreamImpl;
 
typedef struct {
  void* _pending;
  dart_bool* _isUsed;
} dart__GeneratedStreamImpl;
 
typedef struct {
  dart_Iterator* _iterator;
} dart__IterablePendingEvents;
 
typedef struct {
  dart__DelayedEvent* next;
} dart__DelayedEvent;
 
typedef struct {
  void* value;
} dart__DelayedData;
 
typedef struct {
  void* error;
  dart_StackTrace* stackTrace;
} dart__DelayedError;
 
typedef struct {
} dart__DelayedDone;
 
typedef struct {
  dart_int* _STATE_UNSCHEDULED;
  dart_int* _STATE_SCHEDULED;
  dart_int* _STATE_CANCELED;
  dart_int* _state;
} dart__PendingEvents;
 
typedef struct {
  dart__DelayedEvent* firstPendingEvent;
  dart__DelayedEvent* lastPendingEvent;
} dart__StreamImplEvents;
 
typedef struct {
  dart_int* _DONE_SENT;
  dart_int* _SCHEDULED;
  dart_int* _PAUSED;
  dart_Zone* _zone;
  dart_int* _state;
  void* _onDone;
} dart__DoneStreamSubscription;
 
typedef struct {
  dart_Stream* _source;
  void* _onListenHandler;
  void* _onCancelHandler;
  dart_Zone* _zone;
  dart__AsBroadcastStreamController* _controller;
  dart_StreamSubscription* _subscription;
} dart__AsBroadcastStream;
 
typedef struct {
  dart__AsBroadcastStream* _stream;
} dart__BroadcastSubscriptionWrapper;
 
typedef struct {
  dart_StreamSubscription* _subscription;
  dart_Object* _stateData;
  dart_bool* _isPaused;
} dart__StreamIterator;
 
typedef struct {
} dart__EmptyStream;
 
typedef struct {
  dart_Stream* _source;
} dart__ForwardingStream;
 
typedef struct {
  dart__ForwardingStream* _stream;
  dart_StreamSubscription* _subscription;
} dart__ForwardingStreamSubscription;
 
typedef struct {
  void* _test;
} dart__WhereStream;
 
typedef struct {
  void* _transform;
} dart__MapStream;
 
typedef struct {
  void* _expand;
} dart__ExpandStream;
 
typedef struct {
  dart_Function* _transform;
  void* _test;
} dart__HandleErrorStream;
 
typedef struct {
  dart_int* _count;
} dart__TakeStream;
 
typedef struct {
  void* _sharedState;
} dart__StateStreamSubscription;
 
typedef struct {
  void* _test;
} dart__TakeWhileStream;
 
typedef struct {
  dart_int* _count;
} dart__SkipStream;
 
typedef struct {
  void* _test;
} dart__SkipWhileStream;
 
typedef struct {
  dart_Object* _SENTINEL;
  void* _equals;
} dart__DistinctStream;
 
typedef struct {
  dart__EventSink* _sink;
} dart__EventSinkWrapper;
 
typedef struct {
  dart_EventSink* _transformerSink;
  dart_StreamSubscription* _subscription;
} dart__SinkTransformerStreamSubscription;
 
typedef struct {
  void* _sinkMapper;
} dart__StreamSinkTransformer;
 
typedef struct {
  void* _sinkMapper;
  dart_Stream* _stream;
} dart__BoundSinkStream;
 
typedef struct {
  void* _handleData;
  void* _handleError;
  void* _handleDone;
  dart_EventSink* _sink;
} dart__HandlerEventSink;
 
typedef struct {
} dart__StreamHandlerTransformer;
 
typedef struct {
  void* _onListen;
} dart__StreamSubscriptionTransformer;
 
typedef struct {
  void* _onListen;
  dart_Stream* _stream;
} dart__BoundSubscriptionStream;
 
typedef struct {
} dart_Timer;
 
typedef struct {
  dart_Object* error;
  dart_StackTrace* stackTrace;
} dart_AsyncError;
 
typedef struct {
  dart__Zone* zone;
  void* function;
} dart__ZoneFunction;
 
typedef struct {
  void* _redirecting_;
} dart_ZoneSpecification;
 
typedef struct {
  void* handleUncaughtError;
  void* run;
  void* runUnary;
  void* runBinary;
  void* registerCallback;
  void* registerUnaryCallback;
  void* registerBinaryCallback;
  void* errorCallback;
  void* scheduleMicrotask;
  void* createTimer;
  void* createPeriodicTimer;
  void* print;
  void* fork;
} dart__ZoneSpecification;
 
typedef struct {
} dart_ZoneDelegate;
 
typedef struct {
  dart_Zone* root;
  dart_Zone* ROOT;
  dart_Zone* _current;
} dart_Zone;
 
typedef struct {
  dart__Zone* _delegationTarget;
} dart__ZoneDelegate;
 
typedef struct {
} dart__Zone;
 
typedef struct {
  dart__ZoneFunction* _run;
  dart__ZoneFunction* _runUnary;
  dart__ZoneFunction* _runBinary;
  dart__ZoneFunction* _registerCallback;
  dart__ZoneFunction* _registerUnaryCallback;
  dart__ZoneFunction* _registerBinaryCallback;
  dart__ZoneFunction* _errorCallback;
  dart__ZoneFunction* _scheduleMicrotask;
  dart__ZoneFunction* _createTimer;
  dart__ZoneFunction* _createPeriodicTimer;
  dart__ZoneFunction* _print;
  dart__ZoneFunction* _fork;
  dart__ZoneFunction* _handleUncaughtError;
  dart_ZoneDelegate* _delegateCache;
  dart__Zone* parent;
  dart_Map* _map;
} dart__CustomZone;
 
typedef struct {
  dart_Map* _rootMap;
  dart_ZoneDelegate* _rootDelegate;
} dart__RootZone;
 
void* dart_async__fatal(void* msg);
 
dart_Function* dart_async__asyncThenWrapperHelper(void* continuation);
 
dart_Function* dart_async__asyncErrorWrapperHelper(void* continuation);
 
dart_Future* dart_async__awaitHelper(void* object, dart_Function* thenCallback, dart_Function* errorCallback, void* awaiter);
 
void dart_async__asyncStarListenHelper(void* object, void* awaiter);
 
void dart_async__asyncStarMoveNextHelper(void* stream);
 
void dart_async__completeOnAsyncReturn(dart_Completer* completer, dart_Object* value);
 
dart_Object* dart_async__asyncStackTraceHelper(dart_Function* async_op);
 
void dart_async__clearAsyncThreadStackTrace();
 
void dart_async__setAsyncThreadStackTrace(dart_StackTrace* stackTrace);
 
void dart_async__moveNextDebuggerStepCheck(dart_Function* async_op);
 
void dart_async__setScheduleImmediateClosure(void* closure);
 
void dart_async__ensureScheduleImmediate();
 
void* dart_async__invokeErrorHandler(dart_Function* errorHandler, dart_Object* error, dart_StackTrace* stackTrace);
 
dart_Function* dart_async__registerErrorHandler(dart_Function* errorHandler, dart_Zone* zone);
 
void dart_async__completeWithErrorCallback(dart__Future* result, void* error, void* stackTrace);
 
void dart_async__asyncCompleteWithErrorCallback(dart__Future* result, void* error, void* stackTrace);
 
dart_Object* dart_async__nonNullError(dart_Object* error);
 
void dart_async__microtaskLoop();
 
void dart_async__startMicrotaskLoop();
 
void dart_async__scheduleAsyncCallback(void* callback);
 
void dart_async__schedulePriorityAsyncCallback(void* callback);
 
void dart_async_scheduleMicrotask(void* callback);
 
void dart_async__runGuarded(void* notificationHandler);
 
void dart_async__nullDataHandler(dart_Object* value);
 
void dart_async__nullErrorHandler(dart_Object* error, dart_StackTrace* stackTrace);
 
void dart_async__nullDoneHandler();
 
void* dart_async__runUserCode(void* userCode, void* onSuccess, void* onError);
 
void dart_async__cancelAndError(dart_StreamSubscription* subscription, dart__Future* future, void* error, dart_StackTrace* stackTrace);
 
void dart_async__cancelAndErrorWithReplacement(dart_StreamSubscription* subscription, dart__Future* future, void* error, dart_StackTrace* stackTrace);
 
void* dart_async__cancelAndErrorClosure(dart_StreamSubscription* subscription, dart__Future* future);
 
void dart_async__cancelAndValue(dart_StreamSubscription* subscription, dart__Future* future, void* value);
 
void dart_async__addErrorWithReplacement(dart__EventSink* sink, void* error, void* stackTrace);
 
dart_ZoneDelegate* dart_async__parentDelegate(dart__Zone* zone);
 
void dart_async__rootHandleUncaughtError(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* error, dart_StackTrace* stackTrace);
 
void* dart_async__rootRun(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f);
 
void* dart_async__rootRunUnary(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f, void* arg);
 
void* dart_async__rootRunBinary(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f, void* arg1, void* arg2);
 
void* dart_async__rootRegisterCallback(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f);
 
void* dart_async__rootRegisterUnaryCallback(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f);
 
void* dart_async__rootRegisterBinaryCallback(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f);
 
dart_AsyncError* dart_async__rootErrorCallback(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, dart_Object* error, dart_StackTrace* stackTrace);
 
void dart_async__rootScheduleMicrotask(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, void* f);
 
dart_Timer* dart_async__rootCreateTimer(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, dart_Duration* duration, void* callback);
 
dart_Timer* dart_async__rootCreatePeriodicTimer(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, dart_Duration* duration, void* callback);
 
void dart_async__rootPrint(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, dart_String* line);
 
void dart_async__printToZone(dart_String* line);
 
dart_Zone* dart_async__rootFork(dart_Zone* self, dart_ZoneDelegate* parent, dart_Zone* zone, dart_ZoneSpecification* specification, dart_Map* zoneValues);
 
void* dart_async_runZoned(void* body);
 
typedef struct {
  dart_int* _INITIAL_CAPACITY;
  dart_int* _elementCount;
  dart_List* _buckets;
  dart_int* _modificationCount;
} dart__HashMap;
 
typedef struct {
  void* _equals;
  void* _hashCode;
  void* _validKey;
} dart__CustomHashMap;
 
typedef struct {
} dart__IdentityHashMap;
 
typedef struct {
  void* key;
  void* value;
  dart_int* hashCode;
  dart__HashMapEntry* next;
} dart__HashMapEntry;
 
typedef struct {
  dart__HashMap* _map;
} dart__HashMapIterable;
 
typedef struct {
} dart__HashMapKeyIterable;
 
typedef struct {
} dart__HashMapValueIterable;
 
typedef struct {
  dart__HashMap* _map;
  dart_int* _stamp;
  dart_int* _index;
  dart__HashMapEntry* _entry;
} dart__HashMapIterator;
 
typedef struct {
} dart__HashMapKeyIterator;
 
typedef struct {
} dart__HashMapValueIterator;
 
typedef struct {
  dart_int* _INITIAL_CAPACITY;
  dart_List* _buckets;
  dart_int* _elementCount;
  dart_int* _modificationCount;
} dart__HashSet;
 
typedef struct {
} dart__IdentityHashSet;
 
typedef struct {
  void* _equality;
  void* _hasher;
  void* _validKey;
} dart__CustomHashSet;
 
typedef struct {
  void* key;
  dart_int* hashCode;
  dart__HashSetEntry* next;
} dart__HashSetEntry;
 
typedef struct {
  dart__HashSet* _set;
  dart_int* _modificationCount;
  dart_int* _index;
  dart__HashSetEntry* _next;
  void* _current;
} dart__HashSetIterator;
 
typedef struct {
  dart_Uint32List* _index;
  dart_int* _hashMask;
  dart_List* _data;
  dart_int* _usedData;
  dart_int* _deletedKeys;
} dart__HashFieldBase;
 
typedef struct {
} dart__HashVMBase;
 
typedef struct {
  dart_int* _INITIAL_INDEX_BITS;
  dart_int* _INITIAL_INDEX_SIZE;
  dart_int* _UNUSED_PAIR;
  dart_int* _DELETED_PAIR;
} dart__HashBase;
 
typedef struct {
} dart__OperatorEqualsAndHashCode;
 
typedef struct {
} dart__IdenticalAndIdentityHashCode;
 
typedef struct {
} dart___InternalLinkedHashMap__HashVMBase_MapMixin;
 
typedef struct {
} dart___InternalLinkedHashMap__HashVMBase_MapMixin__LinkedHashMapMixin;
 
typedef struct {
} dart___InternalLinkedHashMap__HashVMBase_MapMixin__LinkedHashMapMixin__HashBase;
 
typedef struct {
} dart___InternalLinkedHashMap__HashVMBase_MapMixin__LinkedHashMapMixin__HashBase__OperatorEqualsAndHashCode;
 
typedef struct {
} dart__InternalLinkedHashMap;
 
typedef struct {
} dart__LinkedHashMapMixin;
 
typedef struct {
} dart___CompactLinkedIdentityHashMap__HashFieldBase_MapMixin;
 
typedef struct {
} dart___CompactLinkedIdentityHashMap__HashFieldBase_MapMixin__LinkedHashMapMixin;
 
typedef struct {
} dart___CompactLinkedIdentityHashMap__HashFieldBase_MapMixin__LinkedHashMapMixin__HashBase;
 
typedef struct {
} dart___CompactLinkedIdentityHashMap__HashFieldBase_MapMixin__LinkedHashMapMixin__HashBase__IdenticalAndIdentityHashCode;
 
typedef struct {
} dart__CompactLinkedIdentityHashMap;
 
typedef struct {
} dart___CompactLinkedCustomHashMap__HashFieldBase_MapMixin;
 
typedef struct {
} dart___CompactLinkedCustomHashMap__HashFieldBase_MapMixin__LinkedHashMapMixin;
 
typedef struct {
} dart___CompactLinkedCustomHashMap__HashFieldBase_MapMixin__LinkedHashMapMixin__HashBase;
 
typedef struct {
  void* _equality;
  void* _hasher;
  void* _validKey;
} dart__CompactLinkedCustomHashMap;
 
typedef struct {
  dart__HashBase* _table;
  dart_List* _data;
  dart_int* _len;
  dart_int* _offset;
  dart_int* _step;
} dart__CompactIterable;
 
typedef struct {
  dart__HashBase* _table;
  dart_List* _data;
  dart_int* _len;
  dart_int* _offset;
  dart_int* _step;
  dart_int* _checkSum;
  void* current;
} dart__CompactIterator;
 
typedef struct {
} dart___CompactLinkedHashSet__HashFieldBase__HashBase;
 
typedef struct {
} dart___CompactLinkedHashSet__HashFieldBase__HashBase__OperatorEqualsAndHashCode;
 
typedef struct {
} dart___CompactLinkedHashSet__HashFieldBase__HashBase__OperatorEqualsAndHashCode_SetMixin;
 
typedef struct {
} dart__CompactLinkedHashSet;
 
typedef struct {
} dart___CompactLinkedIdentityHashSet__CompactLinkedHashSet__IdenticalAndIdentityHashCode;
 
typedef struct {
} dart__CompactLinkedIdentityHashSet;
 
typedef struct {
  void* _equality;
  void* _hasher;
  void* _validKey;
} dart__CompactLinkedCustomHashSet;
 
typedef struct {
  dart_Iterable* _source;
} dart_UnmodifiableListView;
 
typedef struct {
} dart_HashMap;
 
typedef struct {
} dart__HashSetBase;
 
typedef struct {
} dart_HashSet;
 
typedef struct {
} dart_IterableMixin;
 
typedef struct {
} dart_IterableBase;
 
typedef struct {
  dart_int* _HAS_NEXT_AND_NEXT_IN_CURRENT;
  dart_int* _NO_NEXT;
  dart_int* _NOT_MOVED_YET;
  dart_Iterator* _iterator;
  dart_int* _state;
} dart_HasNextIterator;
 
typedef struct {
} dart_LinkedHashMap;
 
typedef struct {
} dart_LinkedHashSet;
 
typedef struct {
  dart_int* _modificationCount;
  dart_int* _length;
  void* _first;
} dart_LinkedList;
 
typedef struct {
  dart_LinkedList* _list;
  dart_int* _modificationCount;
  void* _current;
  dart_LinkedListEntry* _next;
  dart_bool* _visitedFirst;
} dart__LinkedListIterator;
 
typedef struct {
  dart_LinkedList* _list;
  void* _next;
  void* _previous;
} dart_LinkedListEntry;
 
typedef struct {
} dart__ListBase_Object_ListMixin;
 
typedef struct {
} dart_ListBase;
 
typedef struct {
} dart_ListMixin;
 
typedef struct {
} dart_MapBase;
 
typedef struct {
} dart_MapMixin;
 
typedef struct {
} dart_UnmodifiableMapBase;
 
typedef struct {
  dart_Map* _map;
} dart__MapBaseValueIterable;
 
typedef struct {
  dart_Iterator* _keys;
  dart_Map* _map;
  void* _current;
} dart__MapBaseValueIterator;
 
typedef struct {
} dart__UnmodifiableMapMixin;
 
typedef struct {
  dart_Map* _map;
} dart_MapView;
 
typedef struct {
} dart__UnmodifiableMapView_MapView__UnmodifiableMapMixin;
 
typedef struct {
} dart_UnmodifiableMapView;
 
typedef struct {
  void* _redirecting_;
} dart_Queue;
 
typedef struct {
  void* _previousLink;
  void* _nextLink;
} dart__DoubleLink;
 
typedef struct {
  void* element;
} dart_DoubleLinkedQueueEntry;
 
typedef struct {
  dart_DoubleLinkedQueue* _queue;
} dart__DoubleLinkedQueueEntry;
 
typedef struct {
} dart__DoubleLinkedQueueElement;
 
typedef struct {
} dart__DoubleLinkedQueueSentinel;
 
typedef struct {
  dart__DoubleLinkedQueueSentinel* _sentinel;
  dart_int* _elementCount;
} dart_DoubleLinkedQueue;
 
typedef struct {
  dart__DoubleLinkedQueueSentinel* _sentinel;
  dart__DoubleLinkedQueueEntry* _nextEntry;
  void* _current;
} dart__DoubleLinkedQueueIterator;
 
typedef struct {
  dart_int* _INITIAL_CAPACITY;
  dart_List* _table;
  dart_int* _head;
  dart_int* _tail;
  dart_int* _modificationCount;
} dart_ListQueue;
 
typedef struct {
  dart_ListQueue* _queue;
  dart_int* _end;
  dart_int* _modificationCount;
  dart_int* _position;
  void* _current;
} dart__ListQueueIterator;
 
typedef struct {
} dart_SetMixin;
 
typedef struct {
} dart_SetBase;
 
typedef struct {
  void* key;
  dart__SplayTreeNode* left;
  dart__SplayTreeNode* right;
} dart__SplayTreeNode;
 
typedef struct {
  void* value;
} dart__SplayTreeMapNode;
 
typedef struct {
  dart_int* _count;
  dart_int* _modificationCount;
  dart_int* _splayCount;
} dart__SplayTree;
 
typedef struct {
} dart__TypeTest;
 
typedef struct {
} dart__SplayTreeMap__SplayTree_MapMixin;
 
typedef struct {
  dart__SplayTreeMapNode* _root;
  dart__SplayTreeMapNode* _dummy;
  void* _comparator;
  void* _validKey;
} dart_SplayTreeMap;
 
typedef struct {
  dart__SplayTree* _tree;
  dart_List* _workList;
  dart_int* _modificationCount;
  dart_int* _splayCount;
  dart__SplayTreeNode* _currentNode;
} dart__SplayTreeIterator;
 
typedef struct {
  dart__SplayTree* _tree;
} dart__SplayTreeKeyIterable;
 
typedef struct {
  dart_SplayTreeMap* _map;
} dart__SplayTreeValueIterable;
 
typedef struct {
} dart__SplayTreeKeyIterator;
 
typedef struct {
} dart__SplayTreeValueIterator;
 
typedef struct {
} dart__SplayTreeNodeIterator;
 
typedef struct {
} dart__SplayTreeSet__SplayTree_IterableMixin;
 
typedef struct {
} dart__SplayTreeSet__SplayTree_IterableMixin_SetMixin;
 
typedef struct {
  dart__SplayTreeNode* _root;
  dart__SplayTreeNode* _dummy;
  void* _comparator;
  void* _validKey;
} dart_SplayTreeSet;
 
void dart_collection__rehashObjects(dart_List* objects);
 
dart_bool* dart_collection__defaultEquals(void* a, void* b);
 
dart_int* dart_collection__defaultHashCode(void* a);
 
dart_bool* dart_collection__isToStringVisiting(dart_Object* o);
 
void dart_collection__iterablePartsToStrings(dart_Iterable* iterable, dart_List* parts);
 
dart_int* dart_collection__dynamicCompare(void* a, void* b);
 
void* dart_collection__defaultCompare();
 
typedef struct {
  void* _reviver;
  dart_bool* _allowMalformed;
} dart__JsonUtf8Decoder;
 
typedef struct {
} dart__JsonListener;
 
typedef struct {
  dart_List* stack;
  void* currentContainer;
  dart_String* key;
  void* value;
} dart__BuildJsonListener;
 
typedef struct {
  void* reviver;
} dart__ReviverJsonListener;
 
typedef struct {
  dart_int* minCapacity;
  dart_int* kDefaultOverhead;
  dart_Uint8List* list;
  dart_int* length;
} dart__NumberBuffer;
 
typedef struct {
  dart_int* TOP_LEVEL;
  dart_int* INSIDE_ARRAY;
  dart_int* INSIDE_OBJECT;
  dart_int* AFTER_COLON;
  dart_int* ALLOW_STRING_MASK;
  dart_int* ALLOW_VALUE_MASK;
  dart_int* ALLOW_VALUE;
  dart_int* STRING_ONLY;
  dart_int* NO_VALUES;
  dart_int* EMPTY;
  dart_int* NON_EMPTY;
  dart_int* EMPTY_MASK;
  dart_int* STATE_INITIAL;
  dart_int* STATE_END;
  dart_int* STATE_ARRAY_EMPTY;
  dart_int* STATE_ARRAY_VALUE;
  dart_int* STATE_ARRAY_COMMA;
  dart_int* STATE_OBJECT_EMPTY;
  dart_int* STATE_OBJECT_KEY;
  dart_int* STATE_OBJECT_COLON;
  dart_int* STATE_OBJECT_VALUE;
  dart_int* STATE_OBJECT_COMMA;
  dart_int* VALUE_READ_BITS;
  dart_int* BACKSPACE;
  dart_int* TAB;
  dart_int* NEWLINE;
  dart_int* CARRIAGE_RETURN;
  dart_int* FORM_FEED;
  dart_int* SPACE;
  dart_int* QUOTE;
  dart_int* PLUS;
  dart_int* COMMA;
  dart_int* MINUS;
  dart_int* DECIMALPOINT;
  dart_int* SLASH;
  dart_int* CHAR_0;
  dart_int* CHAR_9;
  dart_int* COLON;
  dart_int* CHAR_E;
  dart_int* LBRACKET;
  dart_int* BACKSLASH;
  dart_int* RBRACKET;
  dart_int* CHAR_a;
  dart_int* CHAR_b;
  dart_int* CHAR_e;
  dart_int* CHAR_f;
  dart_int* CHAR_l;
  dart_int* CHAR_n;
  dart_int* CHAR_r;
  dart_int* CHAR_s;
  dart_int* CHAR_t;
  dart_int* CHAR_u;
  dart_int* LBRACE;
  dart_int* RBRACE;
  dart_int* NO_PARTIAL;
  dart_int* PARTIAL_STRING;
  dart_int* PARTIAL_NUMERAL;
  dart_int* PARTIAL_KEYWORD;
  dart_int* MASK_PARTIAL;
  dart_int* NUM_SIGN;
  dart_int* NUM_ZERO;
  dart_int* NUM_DIGIT;
  dart_int* NUM_DOT;
  dart_int* NUM_DOT_DIGIT;
  dart_int* NUM_E;
  dart_int* NUM_E_SIGN;
  dart_int* NUM_E_DIGIT;
  dart_int* NUM_SUCCESS;
  dart_int* STR_PLAIN;
  dart_int* STR_ESCAPE;
  dart_int* STR_U;
  dart_int* STR_U_COUNT_SHIFT;
  dart_int* STR_U_VALUE_SHIFT;
  dart_int* KWD_TYPE_MASK;
  dart_int* KWD_TYPE_SHIFT;
  dart_int* KWD_NULL;
  dart_int* KWD_TRUE;
  dart_int* KWD_FALSE;
  dart_int* KWD_COUNT_SHIFT;
  dart_int* TWO_BIT_MASK;
  dart__JsonListener* listener;
  dart_int* state;
  dart_List* states;
  dart_int* partialState;
  void* buffer;
} dart__ChunkedJsonParser;
 
typedef struct {
  dart_String* chunk;
  dart_int* chunkEnd;
} dart__JsonStringParser;
 
typedef struct {
  dart__JsonStringParser* _parser;
  dart_Function* _reviver;
  dart_Sink* _sink;
} dart__JsonStringDecoderSink;
 
typedef struct {
  dart_int* INITIAL_CAPACITY;
  dart_int* MASK_TWO_BIT;
  dart_int* MASK_SIZE;
  dart_int* SHIFT_MISSING;
  dart_int* SHIFT_VALUE;
  dart_int* NO_PARTIAL;
  dart_int* MAX_ASCII;
  dart_int* MAX_TWO_BYTE;
  dart_int* MAX_THREE_BYTE;
  dart_int* MAX_UNICODE;
  dart_int* MASK_TWO_BYTE;
  dart_int* MASK_THREE_BYTE;
  dart_int* MASK_FOUR_BYTE;
  dart_int* MASK_CONTINUE_TAG;
  dart_int* MASK_CONTINUE_VALUE;
  dart_int* CONTINUE_TAG;
  dart_int* LEAD_SURROGATE;
  dart_int* TAIL_SURROGATE;
  dart_int* SHIFT_HIGH_SURROGATE;
  dart_int* MASK_LOW_SURROGATE;
  dart_List* buffer;
  dart_int* length;
  dart_int* partialState;
  dart_bool* isLatin1;
  dart_bool* allowMalformed;
} dart__Utf8StringBuffer;
 
typedef struct {
  dart_bool* allowMalformed;
  dart_List* chunk;
  dart_int* chunkEnd;
} dart__JsonUtf8Parser;
 
typedef struct {
  dart__JsonUtf8Parser* _parser;
  dart_Sink* _sink;
} dart__JsonUtf8DecoderSink;
 
typedef struct {
  dart_bool* _allowInvalid;
} dart_AsciiCodec;
 
typedef struct {
  dart_int* _subsetMask;
} dart__UnicodeSubsetEncoder;
 
typedef struct {
} dart_AsciiEncoder;
 
typedef struct {
  dart_ByteConversionSink* _sink;
  dart_int* _subsetMask;
} dart__UnicodeSubsetEncoderSink;
 
typedef struct {
  dart_bool* _allowInvalid;
  dart_int* _subsetMask;
} dart__UnicodeSubsetDecoder;
 
typedef struct {
} dart_AsciiDecoder;
 
typedef struct {
  dart_ByteConversionSink* _utf8Sink;
} dart__ErrorHandlingAsciiDecoderSink;
 
typedef struct {
  dart_Sink* _sink;
} dart__SimpleAsciiDecoderSink;
 
typedef struct {
  dart_Base64Encoder* _encoder;
} dart_Base64Codec;
 
typedef struct {
  dart_bool* _urlSafe;
} dart_Base64Encoder;
 
typedef struct {
  dart_String* _base64Alphabet;
  dart_String* _base64UrlAlphabet;
  dart_int* _valueShift;
  dart_int* _countMask;
  dart_int* _sixBitMask;
  dart_int* _state;
  dart_String* _alphabet;
} dart__Base64Encoder;
 
typedef struct {
  dart_Uint8List* bufferCache;
} dart__BufferCachingBase64Encoder;
 
typedef struct {
} dart__Base64EncoderSink;
 
typedef struct {
  dart_Sink* _sink;
  dart__Base64Encoder* _encoder;
} dart__AsciiBase64EncoderSink;
 
typedef struct {
  dart_ByteConversionSink* _sink;
  dart__Base64Encoder* _encoder;
} dart__Utf8Base64EncoderSink;
 
typedef struct {
} dart_Base64Decoder;
 
typedef struct {
  dart_int* _valueShift;
  dart_int* _countMask;
  dart_int* _invalid;
  dart_int* _padding;
  dart_int* __;
  dart_int* _p;
  dart_List* _inverseAlphabet;
  dart_int* __char_percent;
  dart_int* __char_3;
  dart_int* __char_d;
  dart_int* _state;
} dart__Base64Decoder;
 
typedef struct {
  dart_Sink* _sink;
  dart__Base64Decoder* _decoder;
} dart__Base64DecoderSink;
 
typedef struct {
  void* _redirecting_;
} dart_ByteConversionSink;
 
typedef struct {
} dart_ByteConversionSinkBase;
 
typedef struct {
  dart_Sink* _sink;
} dart__ByteAdapterSink;
 
typedef struct {
  dart_int* _INITIAL_BUFFER_SIZE;
  void* _callback;
  dart_List* _buffer;
  dart_int* _bufferIndex;
} dart__ByteCallbackSink;
 
typedef struct {
  void* _redirecting_;
} dart_ChunkedConversionSink;
 
typedef struct {
  void* _callback;
  dart_List* _accumulated;
} dart__SimpleCallbackSink;
 
typedef struct {
  dart_EventSink* _eventSink;
  dart_Sink* _chunkedSink;
} dart__ConverterStreamEventSink;
 
typedef struct {
} dart_Codec;
 
typedef struct {
  dart_Codec* _first;
  dart_Codec* _second;
} dart__FusedCodec;
 
typedef struct {
  dart_Codec* _codec;
} dart__InvertedCodec;
 
typedef struct {
} dart_Converter;
 
typedef struct {
  dart_Converter* _first;
  dart_Converter* _second;
} dart__FusedConverter;
 
typedef struct {
  dart_Map* _nameToEncoding;
} dart_Encoding;
 
typedef struct {
  dart_String* _name;
  dart_bool* escapeLtGt;
  dart_bool* escapeQuot;
  dart_bool* escapeApos;
  dart_bool* escapeSlash;
  dart_HtmlEscapeMode* unknown;
  dart_HtmlEscapeMode* UNKNOWN;
  dart_HtmlEscapeMode* attribute;
  dart_HtmlEscapeMode* ATTRIBUTE;
  dart_HtmlEscapeMode* sqAttribute;
  dart_HtmlEscapeMode* SQ_ATTRIBUTE;
  dart_HtmlEscapeMode* element;
  dart_HtmlEscapeMode* ELEMENT;
} dart_HtmlEscapeMode;
 
typedef struct {
  dart_HtmlEscapeMode* mode;
} dart_HtmlEscape;
 
typedef struct {
  dart_HtmlEscape* _escape;
  dart_StringConversionSink* _sink;
} dart__HtmlEscapeSink;
 
typedef struct {
  dart_Object* unsupportedObject;
  dart_Object* cause;
  dart_String* partialResult;
} dart_JsonUnsupportedObjectError;
 
typedef struct {
} dart_JsonCyclicError;
 
typedef struct {
  void* _reviver;
  void* _toEncodable;
} dart_JsonCodec;
 
typedef struct {
  dart_String* indent;
  void* _toEncodable;
} dart_JsonEncoder;
 
typedef struct {
  dart_int* _defaultBufferSize;
  dart_int* DEFAULT_BUFFER_SIZE;
  dart_List* _indent;
  void* _toEncodable;
  dart_int* _bufferSize;
} dart_JsonUtf8Encoder;
 
typedef struct {
  dart_String* _indent;
  void* _toEncodable;
  dart_StringConversionSink* _sink;
  dart_bool* _isDone;
} dart__JsonEncoderSink;
 
typedef struct {
  dart_ByteConversionSink* _sink;
  dart_List* _indent;
  void* _toEncodable;
  dart_int* _bufferSize;
  dart_bool* _isDone;
} dart__JsonUtf8EncoderSink;
 
typedef struct {
  void* _reviver;
} dart_JsonDecoder;
 
typedef struct {
  dart_int* backspace;
  dart_int* tab;
  dart_int* newline;
  dart_int* carriageReturn;
  dart_int* formFeed;
  dart_int* quote;
  dart_int* _char_0;
  dart_int* backslash;
  dart_int* _char_b;
  dart_int* _char_f;
  dart_int* _char_n;
  dart_int* _char_r;
  dart_int* _char_t;
  dart_int* _char_u;
  dart_List* _seen;
  void* _toEncodable;
} dart__JsonStringifier;
 
typedef struct {
  dart_int* _indentLevel;
} dart__JsonPrettyPrintMixin;
 
typedef struct {
  dart_StringSink* _sink;
} dart__JsonStringStringifier;
 
typedef struct {
} dart___JsonStringStringifierPretty__JsonStringStringifier__JsonPrettyPrintMixin;
 
typedef struct {
  dart_String* _indent;
} dart__JsonStringStringifierPretty;
 
typedef struct {
  dart_int* bufferSize;
  void* addChunk;
  dart_Uint8List* buffer;
  dart_int* index;
} dart__JsonUtf8Stringifier;
 
typedef struct {
} dart___JsonUtf8StringifierPretty__JsonUtf8Stringifier__JsonPrettyPrintMixin;
 
typedef struct {
  dart_List* indent;
} dart__JsonUtf8StringifierPretty;
 
typedef struct {
  dart_bool* _allowInvalid;
} dart_Latin1Codec;
 
typedef struct {
} dart_Latin1Encoder;
 
typedef struct {
} dart_Latin1Decoder;
 
typedef struct {
  dart_StringConversionSink* _sink;
} dart__Latin1DecoderSink;
 
typedef struct {
} dart__Latin1AllowInvalidDecoderSink;
 
typedef struct {
} dart_LineSplitter;
 
typedef struct {
  dart_StringConversionSink* _sink;
  dart_String* _carry;
  dart_bool* _skipLeadingLF;
} dart__LineSplitterSink;
 
typedef struct {
  dart_EventSink* _eventSink;
} dart__LineSplitterEventSink;
 
typedef struct {
  void* _redirecting_;
} dart_StringConversionSink;
 
typedef struct {
  void* _redirecting_;
} dart_ClosableStringSink;
 
typedef struct {
  void* _callback;
  dart_StringSink* _sink;
} dart__ClosableStringSink;
 
typedef struct {
  dart_int* _MIN_STRING_SIZE;
  dart_StringBuffer* _buffer;
  dart_StringConversionSink* _chunkedSink;
} dart__StringConversionSinkAsStringSinkAdapter;
 
typedef struct {
} dart_StringConversionSinkBase;
 
typedef struct {
} dart_StringConversionSinkMixin;
 
typedef struct {
  dart_StringSink* _stringSink;
} dart__StringSinkConversionSink;
 
typedef struct {
  void* _callback;
} dart__StringCallbackSink;
 
typedef struct {
  dart_Sink* _sink;
} dart__StringAdapterSink;
 
typedef struct {
  dart__Utf8Decoder* _decoder;
  dart_Sink* _sink;
} dart__Utf8StringSinkAdapter;
 
typedef struct {
  dart__Utf8Decoder* _decoder;
  dart_StringConversionSink* _chunkedSink;
  dart_StringBuffer* _buffer;
} dart__Utf8ConversionSink;
 
typedef struct {
  dart_bool* _allowMalformed;
} dart_Utf8Codec;
 
typedef struct {
} dart_Utf8Encoder;
 
typedef struct {
  dart_int* _carry;
  dart_int* _bufferIndex;
  dart_List* _buffer;
  dart_int* _DEFAULT_BYTE_BUFFER_SIZE;
} dart__Utf8Encoder;
 
typedef struct {
} dart___Utf8EncoderSink__Utf8Encoder_StringConversionSinkMixin;
 
typedef struct {
  dart_ByteConversionSink* _sink;
} dart__Utf8EncoderSink;
 
typedef struct {
  dart_bool* _allowMalformed;
} dart_Utf8Decoder;
 
typedef struct {
  dart_bool* _allowMalformed;
  dart_StringSink* _stringSink;
  dart_bool* _isFirstCharacter;
  dart_int* _value;
  dart_int* _expectedUnits;
  dart_int* _extraUnits;
  dart_List* _LIMITS;
} dart__Utf8Decoder;
 
dart_double* dart_convert__parseDouble(dart_String* source, dart_int* start, dart_int* end);
 
dart_String* dart_convert_base64Encode(dart_List* bytes);
 
dart_String* dart_convert_base64UrlEncode(dart_List* bytes);
 
dart_Uint8List* dart_convert_base64Decode(dart_String* source);
 
dart_String* dart_convert_jsonEncode(dart_Object* object);
 
void* dart_convert_jsonDecode(dart_String* source);
 
void* dart_convert__defaultToEncodable(void* object);
 
dart_bool* dart_convert__isLeadSurrogate(dart_int* codeUnit);
 
dart_bool* dart_convert__isTailSurrogate(dart_int* codeUnit);
 
dart_int* dart_convert__combineSurrogatePair(dart_int* lead, dart_int* tail);
 
typedef struct {
} dart__UserTag;
 
typedef struct {
  dart_String* _result;
  dart_int* _errorCode;
  dart_String* _errorDetail;
  dart_int* kInvalidParams;
  dart_int* kExtensionError;
  dart_int* kExtensionErrorMax;
  dart_int* kExtensionErrorMin;
  dart_int* invalidParams;
  dart_int* extensionError;
  dart_int* extensionErrorMax;
  dart_int* extensionErrorMin;
} dart_ServiceExtensionResponse;
 
typedef struct {
  dart_int* MAX_USER_TAGS;
} dart_UserTag;
 
typedef struct {
  dart_String* name;
  dart_String* description;
} dart_Metric;
 
typedef struct {
  dart_double* min;
  dart_double* max;
  dart_double* _value;
} dart_Gauge;
 
typedef struct {
  dart_double* _value;
} dart_Counter;
 
typedef struct {
  dart_Map* _metrics;
} dart_Metrics;
 
typedef struct {
  dart_int* majorVersion;
  dart_int* minorVersion;
  dart_Uri* serverUri;
} dart_ServiceProtocolInfo;
 
typedef struct {
} dart_Service;
 
typedef struct {
  dart_int* _begin;
  dart_int* _step;
  dart_int* _end;
  dart_int* _type;
  dart_int* id;
} dart_Flow;
 
typedef struct {
  dart_List* _stack;
} dart_Timeline;
 
typedef struct {
  dart_int* _taskId;
  dart_List* _stack;
} dart_TimelineTask;
 
typedef struct {
  dart_String* category;
  dart_String* name;
  dart_int* _taskId;
  dart_Map* _arguments;
} dart__AsyncBlock;
 
typedef struct {
  dart_String* category;
  dart_String* name;
  dart_Map* _arguments;
  dart_int* _start;
  dart_int* _startCpu;
  dart_Flow* _flow;
} dart__SyncBlock;
 
void* dart_developer__log(dart_String* message, dart_int* timestamp, dart_int* sequenceNumber, dart_int* level, dart_String* name, dart_Zone* zone, dart_Object* error, dart_StackTrace* stackTrace);
 
void* dart_developer__runExtension(void* handler, dart_String* method, dart_List* parameterKeys, dart_List* parameterValues, dart_SendPort* replyPort, dart_Object* id, dart_bool* trace_service);
 
void* dart_developer__postResponse(dart_SendPort* replyPort, dart_Object* id, dart_ServiceExtensionResponse* response, dart_bool* trace_service);
 
dart_UserTag* dart_developer__getCurrentTag();
 
dart_UserTag* dart_developer__getDefaultTag();
 
void dart_developer_registerExtension(dart_String* method, void* handler);
 
void dart_developer_postEvent(dart_String* eventKind, dart_Map* eventData);
 
dart_String* dart_developer__argumentsAsJson(dart_Map* arguments);
 
typedef struct {
  void* timerFactory;
  void* eventHandlerSendData;
  void* timerMillisecondClock;
  void* resourceReadAsBytes;
  void* packageRootString;
  void* packageConfigString;
  void* packageRootUriFuture;
  void* packageConfigUriFuture;
  void* resolvePackageUriFuture;
  void* _computeScriptUri;
  void* _cachedScript;
} dart_VMLibraryHooks;
 
typedef struct {
} dart_Lists;
 
typedef struct {
  dart_int* cidArray;
  dart_int* cidExternalOneByteString;
  dart_int* cidGrowableObjectArray;
  dart_int* cidImmutableArray;
  dart_int* cidOneByteString;
  dart_int* cidTwoByteString;
  dart_int* cidBigint;
} dart_ClassID;
 
typedef struct {
} dart__Patch;
 
typedef struct {
  dart_String* _string;
} dart_CodeUnits;
 
typedef struct {
  dart_String* name;
} dart_ExternalName;
 
typedef struct {
  dart_Stream* _source;
} dart_CastStream;
 
typedef struct {
  dart_StreamSubscription* _source;
} dart_CastStreamSubscription;
 
typedef struct {
  dart_StreamTransformer* _source;
} dart_CastStreamTransformer;
 
typedef struct {
  dart_Converter* _source;
} dart_CastConverter;
 
typedef struct {
} dart__CastIterableBase;
 
typedef struct {
  dart_Iterator* _source;
} dart_CastIterator;
 
typedef struct {
  dart_Iterable* _source;
} dart_CastIterable;
 
typedef struct {
} dart__EfficientLengthCastIterable;
 
typedef struct {
} dart___CastListBase__CastIterableBase_ListMixin;
 
typedef struct {
} dart__CastListBase;
 
typedef struct {
  dart_List* _source;
} dart_CastList;
 
typedef struct {
  dart_Set* _source;
  void* _emptySet;
} dart_CastSet;
 
typedef struct {
} dart__CastQueueMixin;
 
typedef struct {
  dart_Map* _source;
} dart_CastMap;
 
typedef struct {
} dart__CastQueue__CastIterableBase__CastQueueMixin;
 
typedef struct {
  dart_Queue* _source;
} dart_CastQueue;
 
typedef struct {
} dart_EfficientLengthIterable;
 
typedef struct {
} dart_ListIterable;
 
typedef struct {
  dart_Iterable* _iterable;
  dart_int* _start;
  dart_int* _endOrLength;
} dart_SubListIterable;
 
typedef struct {
  dart_Iterable* _iterable;
  dart_int* _length;
  dart_int* _index;
  void* _current;
} dart_ListIterator;
 
typedef struct {
  dart_Iterable* _iterable;
  void* _f;
} dart_MappedIterable;
 
typedef struct {
} dart_EfficientLengthMappedIterable;
 
typedef struct {
  void* _current;
  dart_Iterator* _iterator;
  void* _f;
} dart_MappedIterator;
 
typedef struct {
  dart_Iterable* _source;
  void* _f;
} dart_MappedListIterable;
 
typedef struct {
  dart_Iterable* _iterable;
  void* _f;
} dart_WhereIterable;
 
typedef struct {
  dart_Iterator* _iterator;
  void* _f;
} dart_WhereIterator;
 
typedef struct {
  dart_Iterable* _iterable;
  void* _f;
} dart_ExpandIterable;
 
typedef struct {
  dart_Iterator* _iterator;
  void* _f;
  dart_Iterator* _currentExpansion;
  void* _current;
} dart_ExpandIterator;
 
typedef struct {
  dart_Iterable* _iterable;
  dart_int* _takeCount;
} dart_TakeIterable;
 
typedef struct {
} dart_EfficientLengthTakeIterable;
 
typedef struct {
  dart_Iterator* _iterator;
  dart_int* _remaining;
} dart_TakeIterator;
 
typedef struct {
  dart_Iterable* _iterable;
  void* _f;
} dart_TakeWhileIterable;
 
typedef struct {
  dart_Iterator* _iterator;
  void* _f;
  dart_bool* _isFinished;
} dart_TakeWhileIterator;
 
typedef struct {
  dart_Iterable* _iterable;
  dart_int* _skipCount;
} dart_SkipIterable;
 
typedef struct {
} dart_EfficientLengthSkipIterable;
 
typedef struct {
  dart_Iterator* _iterator;
  dart_int* _skipCount;
} dart_SkipIterator;
 
typedef struct {
  dart_Iterable* _iterable;
  void* _f;
} dart_SkipWhileIterable;
 
typedef struct {
  dart_Iterator* _iterator;
  void* _f;
  dart_bool* _hasSkipped;
} dart_SkipWhileIterator;
 
typedef struct {
} dart_EmptyIterable;
 
typedef struct {
} dart_EmptyIterator;
 
typedef struct {
  dart_Iterable* _first;
  dart_Iterable* _second;
} dart_FollowedByIterable;
 
typedef struct {
} dart_EfficientLengthFollowedByIterable;
 
typedef struct {
  dart_Iterator* _currentIterator;
  dart_Iterable* _nextIterable;
} dart_FollowedByIterator;
 
typedef struct {
  dart_Iterable* _source;
} dart_WhereTypeIterable;
 
typedef struct {
  dart_Iterator* _source;
} dart_WhereTypeIterator;
 
typedef struct {
} dart_IterableElementError;
 
typedef struct {
} dart_FixedLengthListMixin;
 
typedef struct {
} dart_UnmodifiableListMixin;
 
typedef struct {
} dart_FixedLengthListBase;
 
typedef struct {
} dart_UnmodifiableListBase;
 
typedef struct {
  dart_List* _backedList;
} dart__ListIndicesIterable;
 
typedef struct {
  dart_List* _values;
} dart_ListMapView;
 
typedef struct {
  dart_Iterable* _source;
} dart_ReversedListIterable;
 
typedef struct {
} dart_UnmodifiableListError;
 
typedef struct {
} dart_NonGrowableListError;
 
typedef struct {
  dart_int* _INSERTION_SORT_THRESHOLD;
} dart_Sort;
 
typedef struct {
  dart_String* _name;
  dart_String* reservedWordRE;
  dart_String* publicIdentifierRE;
  dart_String* identifierRE;
  dart_String* operatorRE;
  dart_RegExp* publicSymbolPattern;
  dart_RegExp* symbolPattern;
} dart_Symbol;
 
typedef struct {
  void* first;
  void* last;
  dart_int* length;
} dart_LinkedList;
 
typedef struct {
  void* _next;
  void* _previous;
  dart_LinkedList* _list;
} dart_LinkedListEntry;
 
typedef struct {
  void* current;
  dart_LinkedList* _list;
} dart__LinkedListIterator;
 
dart_bool* dart__internal__inquireIs64Bit();
 
dart_bool* dart__internal__classRangeCheck(dart_int* cid, dart_int* lowerLimit, dart_int* upperLimit);
 
dart_bool* dart__internal__classRangeCheckNegative(dart_int* cid, dart_int* lowerLimit, dart_int* upperLimit);
 
void* dart__internal__prependTypeArguments(void* functionTypeArguments, void* parentTypeArguments, void* len);
 
dart_Int32List* dart__internal__growRegExpStack(dart_Int32List* stack);
 
void dart__internal__unsupportedPrint(dart_String* line);
 
dart_int* dart__internal_hexDigitValue(dart_int* _char);
 
dart_int* dart__internal_parseHexByte(dart_String* source, dart_int* index);
 
dart_int* dart__internal__checkCount(dart_int* count);
 
typedef struct {
} dart__CapabilityImpl;
 
typedef struct {
  dart_RawReceivePort* _rawPort;
  dart_StreamController* _controller;
} dart__ReceivePortImpl;
 
typedef struct {
  dart_Map* _handlerMap;
} dart__RawReceivePortImpl;
 
typedef struct {
} dart__SendPortImpl;
 
typedef struct {
  dart_List* _list;
  dart_int* _used;
} dart__TimerHeap;
 
typedef struct {
  dart_int* _NO_TIMER;
  dart_int* _ZERO_EVENT;
  void* _TIMEOUT_EVENT;
  dart__TimerHeap* _heap;
  dart__Timer* _firstZeroTimer;
  dart__Timer* _lastZeroTimer;
  dart_int* _ID_MASK;
  dart_int* _idCount;
  dart_RawReceivePort* _receivePort;
  dart_SendPort* _sendPort;
  dart_int* _scheduledWakeupTime;
  dart_bool* _handlingCallbacks;
  dart_Function* _callback;
  dart_int* _wakeupTime;
  dart_int* _milliSeconds;
  dart_bool* _repeating;
  void* _indexOrNext;
  dart_int* _id;
  dart_int* _tick;
} dart__Timer;
 
typedef struct {
  dart_String* message;
} dart_IsolateSpawnException;
 
typedef struct {
  void* _currentIsolate;
  void* _rootUri;
  void* _PAUSE;
  void* _RESUME;
  void* _PING;
  void* _KILL;
  void* _ADD_EXIT;
  void* _DEL_EXIT;
  void* _ADD_ERROR;
  void* _DEL_ERROR;
  void* _ERROR_FATAL;
  dart_int* immediate;
  dart_int* IMMEDIATE;
  dart_int* beforeNextEvent;
  dart_int* BEFORE_NEXT_EVENT;
  dart_SendPort* controlPort;
  dart_Capability* pauseCapability;
  dart_Capability* terminateCapability;
} dart_Isolate;
 
typedef struct {
} dart_SendPort;
 
typedef struct {
} dart_ReceivePort;
 
typedef struct {
} dart_RawReceivePort;
 
typedef struct {
  dart_String* _description;
  dart_StackTrace* stackTrace;
} dart_RemoteError;
 
typedef struct {
} dart_Capability;
 
void dart_isolate__isolateScheduleImmediate(void* callback);
 
void dart_isolate__runPendingImmediateCallback();
 
void* dart_isolate__removePendingImmediateCallback();
 
dart_Function* dart_isolate__getIsolateScheduleImmediateClosure();
 
void dart_isolate__startMainIsolate(dart_Function* entryPoint, dart_List* args);
 
void dart_isolate__startIsolate(dart_SendPort* parentPort, dart_Function* entryPoint, dart_List* args, void* message, dart_bool* isSpawnUri, dart_RawReceivePort* controlPort, dart_List* capabilities);
 
void* dart_isolate__setupHooks();
 
typedef struct {
  dart_Uint32List* _state;
  dart_int* _kSTATE_LO;
  dart_int* _kSTATE_HI;
  dart_int* _POW2_32;
  dart_double* _POW2_53_D;
  dart_double* _POW2_27_D;
  dart_int* _A;
  dart__Random* _prng;
} dart__Random;
 
typedef struct {
  dart_int* _POW2_32;
  dart_double* _POW2_53_D;
} dart__SecureRandom;
 
typedef struct {
} dart__JenkinsSmiHash;
 
typedef struct {
  void* x;
  void* y;
} dart_Point;
 
typedef struct {
} dart_Random;
 
typedef struct {
} dart__RectangleBase;
 
typedef struct {
  void* left;
  void* top;
  void* width;
  void* height;
} dart_Rectangle;
 
typedef struct {
  void* left;
  void* top;
  void* _width;
  void* _height;
} dart_MutableRectangle;
 
dart_double* dart_math__doublePow(dart_double* base, dart_double* exponent);
 
dart_double* dart_math__pow(dart_double* base, dart_double* exponent);
 
dart_int* dart_math__intPow(dart_int* base, dart_int* exponent);
 
dart_double* dart_math__atan2(dart_double* a, dart_double* b);
 
dart_double* dart_math__sin(dart_double* x);
 
dart_double* dart_math__cos(dart_double* x);
 
dart_double* dart_math__tan(dart_double* x);
 
dart_double* dart_math__acos(dart_double* x);
 
dart_double* dart_math__asin(dart_double* x);
 
dart_double* dart_math__atan(dart_double* x);
 
dart_double* dart_math__sqrt(dart_double* x);
 
dart_double* dart_math__exp(dart_double* x);
 
dart_double* dart_math__log(dart_double* x);
 
void* dart_math__clampToZero(void* value);
 
typedef struct {
  dart_String* _msg;
} dart__InternalMirrorError;
 
typedef struct {
  dart_String* key;
  dart_Function* value;
  dart_bool* usedSinceGrowth;
} dart__AccessorCacheAssociation;
 
typedef struct {
  dart_List* table;
  dart_int* shift;
  dart_int* mask;
  dart_int* capacity;
  dart_int* size;
} dart__AccessorCache;
 
typedef struct {
  dart_TypeMirror* dynamicType;
  dart_TypeMirror* voidType;
  void* _libraries;
  void* _isolate;
} dart__LocalMirrorSystem;
 
typedef struct {
  dart_int* line;
  dart_int* column;
  dart_Uri* sourceUri;
} dart__SourceLocation;
 
typedef struct {
} dart__LocalMirror;
 
typedef struct {
  dart_String* debugName;
  dart_LibraryMirror* rootLibrary;
} dart__LocalIsolateMirror;
 
typedef struct {
  dart_DeclarationMirror* owner;
  dart_Symbol* simpleName;
  dart_bool* isGetter;
  dart_bool* isStatic;
  dart_bool* isTopLevel;
  void* _target;
} dart__SyntheticAccessor;
 
typedef struct {
  dart_DeclarationMirror* owner;
  dart_VariableMirror* _target;
} dart__SyntheticSetterParameter;
 
typedef struct {
  void* _reflectee;
} dart__LocalObjectMirror;
 
typedef struct {
  dart_ClassMirror* _type;
  dart__AccessorCache* _getFieldClosures;
  dart__AccessorCache* _setFieldClosures;
} dart__LocalInstanceMirror;
 
typedef struct {
  dart_MethodMirror* _function;
} dart__LocalClosureMirror;
 
typedef struct {
} dart__LocalTypeMirror;
 
typedef struct {
  dart_Type* _reflectedType;
  dart_Symbol* _simpleName;
  dart_DeclarationMirror* _owner;
  dart_bool* isAbstract;
  dart_bool* _isGeneric;
  dart_bool* _isMixinAlias;
  dart_bool* _isGenericDeclaration;
  dart_bool* isEnum;
  dart_Type* _instantiator;
  dart_Symbol* _qualifiedName;
  dart__LocalClassMirror* _trueSuperclassField;
  void* _superinterfaces;
  void* _mixin;
  void* _cachedStaticMembers;
  void* _cachedInstanceMembers;
  dart_Map* _declarations;
  dart_List* _typeVariables;
  dart_List* _typeArguments;
} dart__LocalClassMirror;
 
typedef struct {
  void* _functionReflectee;
  dart_Symbol* _simpleName;
  dart_MethodMirror* _callMethod;
  dart_TypeMirror* _returnType;
  dart_List* _parameters;
} dart__LocalFunctionTypeMirror;
 
typedef struct {
  void* _reflectee;
  dart_Symbol* _simpleName;
  dart_Symbol* _qualifiedName;
} dart__LocalDeclarationMirror;
 
typedef struct {
  dart_DeclarationMirror* _owner;
  dart_TypeMirror* _upperBound;
} dart__LocalTypeVariableMirror;
 
typedef struct {
  dart_Type* _reflectedType;
  dart_bool* _isGeneric;
  dart_bool* _isGenericDeclaration;
  dart_DeclarationMirror* _owner;
  dart__LocalFunctionTypeMirror* _referent;
  dart_List* _typeVariables;
  dart_List* _typeArguments;
} dart__LocalTypedefMirror;
 
typedef struct {
  dart_Symbol* simpleName;
  dart_Uri* uri;
  dart_Map* _declarations;
  void* _cachedLibraryDependencies;
} dart__LocalLibraryMirror;
 
typedef struct {
  dart_LibraryMirror* sourceLibrary;
  void* _targetMirrorOrPrefix;
  dart_List* combinators;
  dart_Symbol* prefix;
  dart_bool* isImport;
  dart_bool* isDeferred;
  dart_List* metadata;
} dart__LocalLibraryDependencyMirror;
 
typedef struct {
  dart_List* identifiers;
  dart_bool* isShow;
} dart__LocalCombinatorMirror;
 
typedef struct {
  dart_Type* _instantiator;
  dart_bool* isStatic;
  dart_int* _kindFlags;
  dart_int* kAbstract;
  dart_int* kGetter;
  dart_int* kSetter;
  dart_int* kConstructor;
  dart_int* kConstCtor;
  dart_int* kGenerativeCtor;
  dart_int* kRedirectingCtor;
  dart_int* kFactoryCtor;
  dart_int* kExternal;
  dart_List* _operators;
  dart_DeclarationMirror* _owner;
  dart_TypeMirror* _returnType;
  dart_List* _parameters;
  dart_Symbol* _constructorName;
} dart__LocalMethodMirror;
 
typedef struct {
  dart_DeclarationMirror* owner;
  dart_bool* isStatic;
  dart_bool* isFinal;
  dart_bool* isConst;
  dart_TypeMirror* _type;
} dart__LocalVariableMirror;
 
typedef struct {
  dart_int* _position;
  dart_bool* isOptional;
  dart_bool* isNamed;
  dart_List* _unmirroredMetadata;
  dart_Object* _defaultValueReflectee;
  dart_InstanceMirror* _defaultValue;
  dart_TypeMirror* _type;
} dart__LocalParameterMirror;
 
typedef struct {
  dart_Symbol* simpleName;
} dart__SpecialTypeMirror;
 
typedef struct {
  dart_MirrorSystem* _currentMirrorSystem;
  dart_Expando* _declarationCache;
  dart_Expando* _instantiationCache;
} dart__Mirrors;
 
typedef struct {
} dart__MirrorReference;
 
typedef struct {
} dart_MirrorSystem;
 
typedef struct {
} dart_Mirror;
 
typedef struct {
} dart_IsolateMirror;
 
typedef struct {
} dart_DeclarationMirror;
 
typedef struct {
} dart_ObjectMirror;
 
typedef struct {
} dart_InstanceMirror;
 
typedef struct {
} dart_ClosureMirror;
 
typedef struct {
} dart_LibraryMirror;
 
typedef struct {
} dart_LibraryDependencyMirror;
 
typedef struct {
} dart_CombinatorMirror;
 
typedef struct {
} dart_TypeMirror;
 
typedef struct {
} dart_ClassMirror;
 
typedef struct {
} dart_FunctionTypeMirror;
 
typedef struct {
} dart_TypeVariableMirror;
 
typedef struct {
} dart_TypedefMirror;
 
typedef struct {
} dart_MethodMirror;
 
typedef struct {
} dart_VariableMirror;
 
typedef struct {
} dart_ParameterMirror;
 
typedef struct {
} dart_SourceLocation;
 
typedef struct {
  dart_String* text;
  dart_String* trimmedText;
  dart_bool* isDocComment;
} dart_Comment;
 
typedef struct {
  void* symbols;
  void* targets;
  void* metaTargets;
  void* override;
} dart_MirrorsUsed;
 
dart_String* dart_mirrors__n(dart_Symbol* symbol);
 
dart_Symbol* dart_mirrors__s(dart_String* name);
 
dart_Symbol* dart_mirrors__computeQualifiedName(dart_DeclarationMirror* owner, dart_Symbol* simpleName);
 
dart_String* dart_mirrors__makeSignatureString(dart_TypeMirror* returnType, dart_List* parameters);
 
dart_SourceLocation* dart_mirrors__location(void* reflectee);
 
dart_List* dart_mirrors__metadata(void* reflectee);
 
dart_bool* dart_mirrors__subtypeTest(dart_Type* a, dart_Type* b);
 
dart_Symbol* dart_mirrors__asSetter(dart_Symbol* getter, dart_LibraryMirror* library);
 
typedef struct {
} dart__TypedListBase;
 
typedef struct {
} dart__IntListMixin;
 
typedef struct {
} dart__DoubleListMixin;
 
typedef struct {
} dart__Float32x4ListMixin;
 
typedef struct {
} dart__Int32x4ListMixin;
 
typedef struct {
} dart__Float64x2ListMixin;
 
typedef struct {
  dart__TypedList* _data;
} dart__ByteBuffer;
 
typedef struct {
} dart__TypedList;
 
typedef struct {
} dart___Int8List__TypedList__IntListMixin;
 
typedef struct {
} dart__Int8List;
 
typedef struct {
} dart___Uint8List__TypedList__IntListMixin;
 
typedef struct {
} dart__Uint8List;
 
typedef struct {
} dart___Uint8ClampedList__TypedList__IntListMixin;
 
typedef struct {
} dart__Uint8ClampedList;
 
typedef struct {
} dart___Int16List__TypedList__IntListMixin;
 
typedef struct {
} dart__Int16List;
 
typedef struct {
} dart___Uint16List__TypedList__IntListMixin;
 
typedef struct {
} dart__Uint16List;
 
typedef struct {
} dart___Int32List__TypedList__IntListMixin;
 
typedef struct {
} dart__Int32List;
 
typedef struct {
} dart___Uint32List__TypedList__IntListMixin;
 
typedef struct {
} dart__Uint32List;
 
typedef struct {
} dart___Int64List__TypedList__IntListMixin;
 
typedef struct {
} dart__Int64List;
 
typedef struct {
} dart___Uint64List__TypedList__IntListMixin;
 
typedef struct {
} dart__Uint64List;
 
typedef struct {
} dart___Float32List__TypedList__DoubleListMixin;
 
typedef struct {
} dart__Float32List;
 
typedef struct {
} dart___Float64List__TypedList__DoubleListMixin;
 
typedef struct {
} dart__Float64List;
 
typedef struct {
} dart___Float32x4List__TypedList__Float32x4ListMixin;
 
typedef struct {
} dart__Float32x4List;
 
typedef struct {
} dart___Int32x4List__TypedList__Int32x4ListMixin;
 
typedef struct {
} dart__Int32x4List;
 
typedef struct {
} dart___Float64x2List__TypedList__Float64x2ListMixin;
 
typedef struct {
} dart__Float64x2List;
 
typedef struct {
} dart___ExternalInt8Array__TypedList__IntListMixin;
 
typedef struct {
} dart__ExternalInt8Array;
 
typedef struct {
} dart___ExternalUint8Array__TypedList__IntListMixin;
 
typedef struct {
} dart__ExternalUint8Array;
 
typedef struct {
} dart___ExternalUint8ClampedArray__TypedList__IntListMixin;
 
typedef struct {
} dart__ExternalUint8ClampedArray;
 
typedef struct {
} dart___ExternalInt16Array__TypedList__IntListMixin;
 
typedef struct {
} dart__ExternalInt16Array;
 
typedef struct {
} dart___ExternalUint16Array__TypedList__IntListMixin;
 
typedef struct {
} dart__ExternalUint16Array;
 
typedef struct {
} dart___ExternalInt32Array__TypedList__IntListMixin;
 
typedef struct {
} dart__ExternalInt32Array;
 
typedef struct {
} dart___ExternalUint32Array__TypedList__IntListMixin;
 
typedef struct {
} dart__ExternalUint32Array;
 
typedef struct {
} dart___ExternalInt64Array__TypedList__IntListMixin;
 
typedef struct {
} dart__ExternalInt64Array;
 
typedef struct {
} dart___ExternalUint64Array__TypedList__IntListMixin;
 
typedef struct {
} dart__ExternalUint64Array;
 
typedef struct {
} dart___ExternalFloat32Array__TypedList__DoubleListMixin;
 
typedef struct {
} dart__ExternalFloat32Array;
 
typedef struct {
} dart___ExternalFloat64Array__TypedList__DoubleListMixin;
 
typedef struct {
} dart__ExternalFloat64Array;
 
typedef struct {
} dart___ExternalFloat32x4Array__TypedList__Float32x4ListMixin;
 
typedef struct {
} dart__ExternalFloat32x4Array;
 
typedef struct {
} dart___ExternalInt32x4Array__TypedList__Int32x4ListMixin;
 
typedef struct {
} dart__ExternalInt32x4Array;
 
typedef struct {
} dart___ExternalFloat64x2Array__TypedList__Float64x2ListMixin;
 
typedef struct {
} dart__ExternalFloat64x2Array;
 
typedef struct {
} dart__Float32x4;
 
typedef struct {
} dart__Int32x4;
 
typedef struct {
} dart__Float64x2;
 
typedef struct {
  dart_List* _array;
  dart_int* _length;
  dart_int* _position;
  void* _current;
} dart__TypedListIterator;
 
typedef struct {
  dart__TypedList* _typedData;
  dart_int* offsetInBytes;
  dart_int* length;
} dart__TypedListView;
 
typedef struct {
} dart___Int8ArrayView__TypedListView__IntListMixin;
 
typedef struct {
} dart__Int8ArrayView;
 
typedef struct {
} dart___Uint8ArrayView__TypedListView__IntListMixin;
 
typedef struct {
} dart__Uint8ArrayView;
 
typedef struct {
} dart___Uint8ClampedArrayView__TypedListView__IntListMixin;
 
typedef struct {
} dart__Uint8ClampedArrayView;
 
typedef struct {
} dart___Int16ArrayView__TypedListView__IntListMixin;
 
typedef struct {
} dart__Int16ArrayView;
 
typedef struct {
} dart___Uint16ArrayView__TypedListView__IntListMixin;
 
typedef struct {
} dart__Uint16ArrayView;
 
typedef struct {
} dart___Int32ArrayView__TypedListView__IntListMixin;
 
typedef struct {
} dart__Int32ArrayView;
 
typedef struct {
} dart___Uint32ArrayView__TypedListView__IntListMixin;
 
typedef struct {
} dart__Uint32ArrayView;
 
typedef struct {
} dart___Int64ArrayView__TypedListView__IntListMixin;
 
typedef struct {
} dart__Int64ArrayView;
 
typedef struct {
} dart___Uint64ArrayView__TypedListView__IntListMixin;
 
typedef struct {
} dart__Uint64ArrayView;
 
typedef struct {
} dart___Float32ArrayView__TypedListView__DoubleListMixin;
 
typedef struct {
} dart__Float32ArrayView;
 
typedef struct {
} dart___Float64ArrayView__TypedListView__DoubleListMixin;
 
typedef struct {
} dart__Float64ArrayView;
 
typedef struct {
} dart___Float32x4ArrayView__TypedListView__Float32x4ListMixin;
 
typedef struct {
} dart__Float32x4ArrayView;
 
typedef struct {
} dart___Int32x4ArrayView__TypedListView__Int32x4ListMixin;
 
typedef struct {
} dart__Int32x4ArrayView;
 
typedef struct {
} dart___Float64x2ArrayView__TypedListView__Float64x2ListMixin;
 
typedef struct {
} dart__Float64x2ArrayView;
 
typedef struct {
  dart__TypedList* _typedData;
  dart_int* _offset;
  dart_int* length;
} dart__ByteDataView;
 
typedef struct {
} dart_ByteBuffer;
 
typedef struct {
} dart_TypedData;
 
typedef struct {
} dart__TypedIntList;
 
typedef struct {
} dart__TypedFloatList;
 
typedef struct {
  dart_Endian* BIG_ENDIAN;
  dart_Endian* LITTLE_ENDIAN;
} dart_Endianness;
 
typedef struct {
  dart_bool* _littleEndian;
  dart_Endian* big;
  dart_Endian* little;
  dart_Endian* host;
} dart_Endian;
 
typedef struct {
} dart_ByteData;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Int8List;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Uint8List;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Uint8ClampedList;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Int16List;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Uint16List;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Int32List;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Uint32List;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Int64List;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Uint64List;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Float32List;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Float64List;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Float32x4List;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Int32x4List;
 
typedef struct {
  dart_int* BYTES_PER_ELEMENT;
  dart_int* bytesPerElement;
} dart_Float64x2List;
 
typedef struct {
  dart_int* xxxx;
  dart_int* xxxy;
  dart_int* xxxz;
  dart_int* xxxw;
  dart_int* xxyx;
  dart_int* xxyy;
  dart_int* xxyz;
  dart_int* xxyw;
  dart_int* xxzx;
  dart_int* xxzy;
  dart_int* xxzz;
  dart_int* xxzw;
  dart_int* xxwx;
  dart_int* xxwy;
  dart_int* xxwz;
  dart_int* xxww;
  dart_int* xyxx;
  dart_int* xyxy;
  dart_int* xyxz;
  dart_int* xyxw;
  dart_int* xyyx;
  dart_int* xyyy;
  dart_int* xyyz;
  dart_int* xyyw;
  dart_int* xyzx;
  dart_int* xyzy;
  dart_int* xyzz;
  dart_int* xyzw;
  dart_int* xywx;
  dart_int* xywy;
  dart_int* xywz;
  dart_int* xyww;
  dart_int* xzxx;
  dart_int* xzxy;
  dart_int* xzxz;
  dart_int* xzxw;
  dart_int* xzyx;
  dart_int* xzyy;
  dart_int* xzyz;
  dart_int* xzyw;
  dart_int* xzzx;
  dart_int* xzzy;
  dart_int* xzzz;
  dart_int* xzzw;
  dart_int* xzwx;
  dart_int* xzwy;
  dart_int* xzwz;
  dart_int* xzww;
  dart_int* xwxx;
  dart_int* xwxy;
  dart_int* xwxz;
  dart_int* xwxw;
  dart_int* xwyx;
  dart_int* xwyy;
  dart_int* xwyz;
  dart_int* xwyw;
  dart_int* xwzx;
  dart_int* xwzy;
  dart_int* xwzz;
  dart_int* xwzw;
  dart_int* xwwx;
  dart_int* xwwy;
  dart_int* xwwz;
  dart_int* xwww;
  dart_int* yxxx;
  dart_int* yxxy;
  dart_int* yxxz;
  dart_int* yxxw;
  dart_int* yxyx;
  dart_int* yxyy;
  dart_int* yxyz;
  dart_int* yxyw;
  dart_int* yxzx;
  dart_int* yxzy;
  dart_int* yxzz;
  dart_int* yxzw;
  dart_int* yxwx;
  dart_int* yxwy;
  dart_int* yxwz;
  dart_int* yxww;
  dart_int* yyxx;
  dart_int* yyxy;
  dart_int* yyxz;
  dart_int* yyxw;
  dart_int* yyyx;
  dart_int* yyyy;
  dart_int* yyyz;
  dart_int* yyyw;
  dart_int* yyzx;
  dart_int* yyzy;
  dart_int* yyzz;
  dart_int* yyzw;
  dart_int* yywx;
  dart_int* yywy;
  dart_int* yywz;
  dart_int* yyww;
  dart_int* yzxx;
  dart_int* yzxy;
  dart_int* yzxz;
  dart_int* yzxw;
  dart_int* yzyx;
  dart_int* yzyy;
  dart_int* yzyz;
  dart_int* yzyw;
  dart_int* yzzx;
  dart_int* yzzy;
  dart_int* yzzz;
  dart_int* yzzw;
  dart_int* yzwx;
  dart_int* yzwy;
  dart_int* yzwz;
  dart_int* yzww;
  dart_int* ywxx;
  dart_int* ywxy;
  dart_int* ywxz;
  dart_int* ywxw;
  dart_int* ywyx;
  dart_int* ywyy;
  dart_int* ywyz;
  dart_int* ywyw;
  dart_int* ywzx;
  dart_int* ywzy;
  dart_int* ywzz;
  dart_int* ywzw;
  dart_int* ywwx;
  dart_int* ywwy;
  dart_int* ywwz;
  dart_int* ywww;
  dart_int* zxxx;
  dart_int* zxxy;
  dart_int* zxxz;
  dart_int* zxxw;
  dart_int* zxyx;
  dart_int* zxyy;
  dart_int* zxyz;
  dart_int* zxyw;
  dart_int* zxzx;
  dart_int* zxzy;
  dart_int* zxzz;
  dart_int* zxzw;
  dart_int* zxwx;
  dart_int* zxwy;
  dart_int* zxwz;
  dart_int* zxww;
  dart_int* zyxx;
  dart_int* zyxy;
  dart_int* zyxz;
  dart_int* zyxw;
  dart_int* zyyx;
  dart_int* zyyy;
  dart_int* zyyz;
  dart_int* zyyw;
  dart_int* zyzx;
  dart_int* zyzy;
  dart_int* zyzz;
  dart_int* zyzw;
  dart_int* zywx;
  dart_int* zywy;
  dart_int* zywz;
  dart_int* zyww;
  dart_int* zzxx;
  dart_int* zzxy;
  dart_int* zzxz;
  dart_int* zzxw;
  dart_int* zzyx;
  dart_int* zzyy;
  dart_int* zzyz;
  dart_int* zzyw;
  dart_int* zzzx;
  dart_int* zzzy;
  dart_int* zzzz;
  dart_int* zzzw;
  dart_int* zzwx;
  dart_int* zzwy;
  dart_int* zzwz;
  dart_int* zzww;
  dart_int* zwxx;
  dart_int* zwxy;
  dart_int* zwxz;
  dart_int* zwxw;
  dart_int* zwyx;
  dart_int* zwyy;
  dart_int* zwyz;
  dart_int* zwyw;
  dart_int* zwzx;
  dart_int* zwzy;
  dart_int* zwzz;
  dart_int* zwzw;
  dart_int* zwwx;
  dart_int* zwwy;
  dart_int* zwwz;
  dart_int* zwww;
  dart_int* wxxx;
  dart_int* wxxy;
  dart_int* wxxz;
  dart_int* wxxw;
  dart_int* wxyx;
  dart_int* wxyy;
  dart_int* wxyz;
  dart_int* wxyw;
  dart_int* wxzx;
  dart_int* wxzy;
  dart_int* wxzz;
  dart_int* wxzw;
  dart_int* wxwx;
  dart_int* wxwy;
  dart_int* wxwz;
  dart_int* wxww;
  dart_int* wyxx;
  dart_int* wyxy;
  dart_int* wyxz;
  dart_int* wyxw;
  dart_int* wyyx;
  dart_int* wyyy;
  dart_int* wyyz;
  dart_int* wyyw;
  dart_int* wyzx;
  dart_int* wyzy;
  dart_int* wyzz;
  dart_int* wyzw;
  dart_int* wywx;
  dart_int* wywy;
  dart_int* wywz;
  dart_int* wyww;
  dart_int* wzxx;
  dart_int* wzxy;
  dart_int* wzxz;
  dart_int* wzxw;
  dart_int* wzyx;
  dart_int* wzyy;
  dart_int* wzyz;
  dart_int* wzyw;
  dart_int* wzzx;
  dart_int* wzzy;
  dart_int* wzzz;
  dart_int* wzzw;
  dart_int* wzwx;
  dart_int* wzwy;
  dart_int* wzwz;
  dart_int* wzww;
  dart_int* wwxx;
  dart_int* wwxy;
  dart_int* wwxz;
  dart_int* wwxw;
  dart_int* wwyx;
  dart_int* wwyy;
  dart_int* wwyz;
  dart_int* wwyw;
  dart_int* wwzx;
  dart_int* wwzy;
  dart_int* wwzz;
  dart_int* wwzw;
  dart_int* wwwx;
  dart_int* wwwy;
  dart_int* wwwz;
  dart_int* wwww;
  dart_int* XXXX;
  dart_int* XXXY;
  dart_int* XXXZ;
  dart_int* XXXW;
  dart_int* XXYX;
  dart_int* XXYY;
  dart_int* XXYZ;
  dart_int* XXYW;
  dart_int* XXZX;
  dart_int* XXZY;
  dart_int* XXZZ;
  dart_int* XXZW;
  dart_int* XXWX;
  dart_int* XXWY;
  dart_int* XXWZ;
  dart_int* XXWW;
  dart_int* XYXX;
  dart_int* XYXY;
  dart_int* XYXZ;
  dart_int* XYXW;
  dart_int* XYYX;
  dart_int* XYYY;
  dart_int* XYYZ;
  dart_int* XYYW;
  dart_int* XYZX;
  dart_int* XYZY;
  dart_int* XYZZ;
  dart_int* XYZW;
  dart_int* XYWX;
  dart_int* XYWY;
  dart_int* XYWZ;
  dart_int* XYWW;
  dart_int* XZXX;
  dart_int* XZXY;
  dart_int* XZXZ;
  dart_int* XZXW;
  dart_int* XZYX;
  dart_int* XZYY;
  dart_int* XZYZ;
  dart_int* XZYW;
  dart_int* XZZX;
  dart_int* XZZY;
  dart_int* XZZZ;
  dart_int* XZZW;
  dart_int* XZWX;
  dart_int* XZWY;
  dart_int* XZWZ;
  dart_int* XZWW;
  dart_int* XWXX;
  dart_int* XWXY;
  dart_int* XWXZ;
  dart_int* XWXW;
  dart_int* XWYX;
  dart_int* XWYY;
  dart_int* XWYZ;
  dart_int* XWYW;
  dart_int* XWZX;
  dart_int* XWZY;
  dart_int* XWZZ;
  dart_int* XWZW;
  dart_int* XWWX;
  dart_int* XWWY;
  dart_int* XWWZ;
  dart_int* XWWW;
  dart_int* YXXX;
  dart_int* YXXY;
  dart_int* YXXZ;
  dart_int* YXXW;
  dart_int* YXYX;
  dart_int* YXYY;
  dart_int* YXYZ;
  dart_int* YXYW;
  dart_int* YXZX;
  dart_int* YXZY;
  dart_int* YXZZ;
  dart_int* YXZW;
  dart_int* YXWX;
  dart_int* YXWY;
  dart_int* YXWZ;
  dart_int* YXWW;
  dart_int* YYXX;
  dart_int* YYXY;
  dart_int* YYXZ;
  dart_int* YYXW;
  dart_int* YYYX;
  dart_int* YYYY;
  dart_int* YYYZ;
  dart_int* YYYW;
  dart_int* YYZX;
  dart_int* YYZY;
  dart_int* YYZZ;
  dart_int* YYZW;
  dart_int* YYWX;
  dart_int* YYWY;
  dart_int* YYWZ;
  dart_int* YYWW;
  dart_int* YZXX;
  dart_int* YZXY;
  dart_int* YZXZ;
  dart_int* YZXW;
  dart_int* YZYX;
  dart_int* YZYY;
  dart_int* YZYZ;
  dart_int* YZYW;
  dart_int* YZZX;
  dart_int* YZZY;
  dart_int* YZZZ;
  dart_int* YZZW;
  dart_int* YZWX;
  dart_int* YZWY;
  dart_int* YZWZ;
  dart_int* YZWW;
  dart_int* YWXX;
  dart_int* YWXY;
  dart_int* YWXZ;
  dart_int* YWXW;
  dart_int* YWYX;
  dart_int* YWYY;
  dart_int* YWYZ;
  dart_int* YWYW;
  dart_int* YWZX;
  dart_int* YWZY;
  dart_int* YWZZ;
  dart_int* YWZW;
  dart_int* YWWX;
  dart_int* YWWY;
  dart_int* YWWZ;
  dart_int* YWWW;
  dart_int* ZXXX;
  dart_int* ZXXY;
  dart_int* ZXXZ;
  dart_int* ZXXW;
  dart_int* ZXYX;
  dart_int* ZXYY;
  dart_int* ZXYZ;
  dart_int* ZXYW;
  dart_int* ZXZX;
  dart_int* ZXZY;
  dart_int* ZXZZ;
  dart_int* ZXZW;
  dart_int* ZXWX;
  dart_int* ZXWY;
  dart_int* ZXWZ;
  dart_int* ZXWW;
  dart_int* ZYXX;
  dart_int* ZYXY;
  dart_int* ZYXZ;
  dart_int* ZYXW;
  dart_int* ZYYX;
  dart_int* ZYYY;
  dart_int* ZYYZ;
  dart_int* ZYYW;
  dart_int* ZYZX;
  dart_int* ZYZY;
  dart_int* ZYZZ;
  dart_int* ZYZW;
  dart_int* ZYWX;
  dart_int* ZYWY;
  dart_int* ZYWZ;
  dart_int* ZYWW;
  dart_int* ZZXX;
  dart_int* ZZXY;
  dart_int* ZZXZ;
  dart_int* ZZXW;
  dart_int* ZZYX;
  dart_int* ZZYY;
  dart_int* ZZYZ;
  dart_int* ZZYW;
  dart_int* ZZZX;
  dart_int* ZZZY;
  dart_int* ZZZZ;
  dart_int* ZZZW;
  dart_int* ZZWX;
  dart_int* ZZWY;
  dart_int* ZZWZ;
  dart_int* ZZWW;
  dart_int* ZWXX;
  dart_int* ZWXY;
  dart_int* ZWXZ;
  dart_int* ZWXW;
  dart_int* ZWYX;
  dart_int* ZWYY;
  dart_int* ZWYZ;
  dart_int* ZWYW;
  dart_int* ZWZX;
  dart_int* ZWZY;
  dart_int* ZWZZ;
  dart_int* ZWZW;
  dart_int* ZWWX;
  dart_int* ZWWY;
  dart_int* ZWWZ;
  dart_int* ZWWW;
  dart_int* WXXX;
  dart_int* WXXY;
  dart_int* WXXZ;
  dart_int* WXXW;
  dart_int* WXYX;
  dart_int* WXYY;
  dart_int* WXYZ;
  dart_int* WXYW;
  dart_int* WXZX;
  dart_int* WXZY;
  dart_int* WXZZ;
  dart_int* WXZW;
  dart_int* WXWX;
  dart_int* WXWY;
  dart_int* WXWZ;
  dart_int* WXWW;
  dart_int* WYXX;
  dart_int* WYXY;
  dart_int* WYXZ;
  dart_int* WYXW;
  dart_int* WYYX;
  dart_int* WYYY;
  dart_int* WYYZ;
  dart_int* WYYW;
  dart_int* WYZX;
  dart_int* WYZY;
  dart_int* WYZZ;
  dart_int* WYZW;
  dart_int* WYWX;
  dart_int* WYWY;
  dart_int* WYWZ;
  dart_int* WYWW;
  dart_int* WZXX;
  dart_int* WZXY;
  dart_int* WZXZ;
  dart_int* WZXW;
  dart_int* WZYX;
  dart_int* WZYY;
  dart_int* WZYZ;
  dart_int* WZYW;
  dart_int* WZZX;
  dart_int* WZZY;
  dart_int* WZZZ;
  dart_int* WZZW;
  dart_int* WZWX;
  dart_int* WZWY;
  dart_int* WZWZ;
  dart_int* WZWW;
  dart_int* WWXX;
  dart_int* WWXY;
  dart_int* WWXZ;
  dart_int* WWXW;
  dart_int* WWYX;
  dart_int* WWYY;
  dart_int* WWYZ;
  dart_int* WWYW;
  dart_int* WWZX;
  dart_int* WWZY;
  dart_int* WWZZ;
  dart_int* WWZW;
  dart_int* WWWX;
  dart_int* WWWY;
  dart_int* WWWZ;
  dart_int* WWWW;
} dart_Float32x4;
 
typedef struct {
  dart_int* xxxx;
  dart_int* xxxy;
  dart_int* xxxz;
  dart_int* xxxw;
  dart_int* xxyx;
  dart_int* xxyy;
  dart_int* xxyz;
  dart_int* xxyw;
  dart_int* xxzx;
  dart_int* xxzy;
  dart_int* xxzz;
  dart_int* xxzw;
  dart_int* xxwx;
  dart_int* xxwy;
  dart_int* xxwz;
  dart_int* xxww;
  dart_int* xyxx;
  dart_int* xyxy;
  dart_int* xyxz;
  dart_int* xyxw;
  dart_int* xyyx;
  dart_int* xyyy;
  dart_int* xyyz;
  dart_int* xyyw;
  dart_int* xyzx;
  dart_int* xyzy;
  dart_int* xyzz;
  dart_int* xyzw;
  dart_int* xywx;
  dart_int* xywy;
  dart_int* xywz;
  dart_int* xyww;
  dart_int* xzxx;
  dart_int* xzxy;
  dart_int* xzxz;
  dart_int* xzxw;
  dart_int* xzyx;
  dart_int* xzyy;
  dart_int* xzyz;
  dart_int* xzyw;
  dart_int* xzzx;
  dart_int* xzzy;
  dart_int* xzzz;
  dart_int* xzzw;
  dart_int* xzwx;
  dart_int* xzwy;
  dart_int* xzwz;
  dart_int* xzww;
  dart_int* xwxx;
  dart_int* xwxy;
  dart_int* xwxz;
  dart_int* xwxw;
  dart_int* xwyx;
  dart_int* xwyy;
  dart_int* xwyz;
  dart_int* xwyw;
  dart_int* xwzx;
  dart_int* xwzy;
  dart_int* xwzz;
  dart_int* xwzw;
  dart_int* xwwx;
  dart_int* xwwy;
  dart_int* xwwz;
  dart_int* xwww;
  dart_int* yxxx;
  dart_int* yxxy;
  dart_int* yxxz;
  dart_int* yxxw;
  dart_int* yxyx;
  dart_int* yxyy;
  dart_int* yxyz;
  dart_int* yxyw;
  dart_int* yxzx;
  dart_int* yxzy;
  dart_int* yxzz;
  dart_int* yxzw;
  dart_int* yxwx;
  dart_int* yxwy;
  dart_int* yxwz;
  dart_int* yxww;
  dart_int* yyxx;
  dart_int* yyxy;
  dart_int* yyxz;
  dart_int* yyxw;
  dart_int* yyyx;
  dart_int* yyyy;
  dart_int* yyyz;
  dart_int* yyyw;
  dart_int* yyzx;
  dart_int* yyzy;
  dart_int* yyzz;
  dart_int* yyzw;
  dart_int* yywx;
  dart_int* yywy;
  dart_int* yywz;
  dart_int* yyww;
  dart_int* yzxx;
  dart_int* yzxy;
  dart_int* yzxz;
  dart_int* yzxw;
  dart_int* yzyx;
  dart_int* yzyy;
  dart_int* yzyz;
  dart_int* yzyw;
  dart_int* yzzx;
  dart_int* yzzy;
  dart_int* yzzz;
  dart_int* yzzw;
  dart_int* yzwx;
  dart_int* yzwy;
  dart_int* yzwz;
  dart_int* yzww;
  dart_int* ywxx;
  dart_int* ywxy;
  dart_int* ywxz;
  dart_int* ywxw;
  dart_int* ywyx;
  dart_int* ywyy;
  dart_int* ywyz;
  dart_int* ywyw;
  dart_int* ywzx;
  dart_int* ywzy;
  dart_int* ywzz;
  dart_int* ywzw;
  dart_int* ywwx;
  dart_int* ywwy;
  dart_int* ywwz;
  dart_int* ywww;
  dart_int* zxxx;
  dart_int* zxxy;
  dart_int* zxxz;
  dart_int* zxxw;
  dart_int* zxyx;
  dart_int* zxyy;
  dart_int* zxyz;
  dart_int* zxyw;
  dart_int* zxzx;
  dart_int* zxzy;
  dart_int* zxzz;
  dart_int* zxzw;
  dart_int* zxwx;
  dart_int* zxwy;
  dart_int* zxwz;
  dart_int* zxww;
  dart_int* zyxx;
  dart_int* zyxy;
  dart_int* zyxz;
  dart_int* zyxw;
  dart_int* zyyx;
  dart_int* zyyy;
  dart_int* zyyz;
  dart_int* zyyw;
  dart_int* zyzx;
  dart_int* zyzy;
  dart_int* zyzz;
  dart_int* zyzw;
  dart_int* zywx;
  dart_int* zywy;
  dart_int* zywz;
  dart_int* zyww;
  dart_int* zzxx;
  dart_int* zzxy;
  dart_int* zzxz;
  dart_int* zzxw;
  dart_int* zzyx;
  dart_int* zzyy;
  dart_int* zzyz;
  dart_int* zzyw;
  dart_int* zzzx;
  dart_int* zzzy;
  dart_int* zzzz;
  dart_int* zzzw;
  dart_int* zzwx;
  dart_int* zzwy;
  dart_int* zzwz;
  dart_int* zzww;
  dart_int* zwxx;
  dart_int* zwxy;
  dart_int* zwxz;
  dart_int* zwxw;
  dart_int* zwyx;
  dart_int* zwyy;
  dart_int* zwyz;
  dart_int* zwyw;
  dart_int* zwzx;
  dart_int* zwzy;
  dart_int* zwzz;
  dart_int* zwzw;
  dart_int* zwwx;
  dart_int* zwwy;
  dart_int* zwwz;
  dart_int* zwww;
  dart_int* wxxx;
  dart_int* wxxy;
  dart_int* wxxz;
  dart_int* wxxw;
  dart_int* wxyx;
  dart_int* wxyy;
  dart_int* wxyz;
  dart_int* wxyw;
  dart_int* wxzx;
  dart_int* wxzy;
  dart_int* wxzz;
  dart_int* wxzw;
  dart_int* wxwx;
  dart_int* wxwy;
  dart_int* wxwz;
  dart_int* wxww;
  dart_int* wyxx;
  dart_int* wyxy;
  dart_int* wyxz;
  dart_int* wyxw;
  dart_int* wyyx;
  dart_int* wyyy;
  dart_int* wyyz;
  dart_int* wyyw;
  dart_int* wyzx;
  dart_int* wyzy;
  dart_int* wyzz;
  dart_int* wyzw;
  dart_int* wywx;
  dart_int* wywy;
  dart_int* wywz;
  dart_int* wyww;
  dart_int* wzxx;
  dart_int* wzxy;
  dart_int* wzxz;
  dart_int* wzxw;
  dart_int* wzyx;
  dart_int* wzyy;
  dart_int* wzyz;
  dart_int* wzyw;
  dart_int* wzzx;
  dart_int* wzzy;
  dart_int* wzzz;
  dart_int* wzzw;
  dart_int* wzwx;
  dart_int* wzwy;
  dart_int* wzwz;
  dart_int* wzww;
  dart_int* wwxx;
  dart_int* wwxy;
  dart_int* wwxz;
  dart_int* wwxw;
  dart_int* wwyx;
  dart_int* wwyy;
  dart_int* wwyz;
  dart_int* wwyw;
  dart_int* wwzx;
  dart_int* wwzy;
  dart_int* wwzz;
  dart_int* wwzw;
  dart_int* wwwx;
  dart_int* wwwy;
  dart_int* wwwz;
  dart_int* wwww;
  dart_int* XXXX;
  dart_int* XXXY;
  dart_int* XXXZ;
  dart_int* XXXW;
  dart_int* XXYX;
  dart_int* XXYY;
  dart_int* XXYZ;
  dart_int* XXYW;
  dart_int* XXZX;
  dart_int* XXZY;
  dart_int* XXZZ;
  dart_int* XXZW;
  dart_int* XXWX;
  dart_int* XXWY;
  dart_int* XXWZ;
  dart_int* XXWW;
  dart_int* XYXX;
  dart_int* XYXY;
  dart_int* XYXZ;
  dart_int* XYXW;
  dart_int* XYYX;
  dart_int* XYYY;
  dart_int* XYYZ;
  dart_int* XYYW;
  dart_int* XYZX;
  dart_int* XYZY;
  dart_int* XYZZ;
  dart_int* XYZW;
  dart_int* XYWX;
  dart_int* XYWY;
  dart_int* XYWZ;
  dart_int* XYWW;
  dart_int* XZXX;
  dart_int* XZXY;
  dart_int* XZXZ;
  dart_int* XZXW;
  dart_int* XZYX;
  dart_int* XZYY;
  dart_int* XZYZ;
  dart_int* XZYW;
  dart_int* XZZX;
  dart_int* XZZY;
  dart_int* XZZZ;
  dart_int* XZZW;
  dart_int* XZWX;
  dart_int* XZWY;
  dart_int* XZWZ;
  dart_int* XZWW;
  dart_int* XWXX;
  dart_int* XWXY;
  dart_int* XWXZ;
  dart_int* XWXW;
  dart_int* XWYX;
  dart_int* XWYY;
  dart_int* XWYZ;
  dart_int* XWYW;
  dart_int* XWZX;
  dart_int* XWZY;
  dart_int* XWZZ;
  dart_int* XWZW;
  dart_int* XWWX;
  dart_int* XWWY;
  dart_int* XWWZ;
  dart_int* XWWW;
  dart_int* YXXX;
  dart_int* YXXY;
  dart_int* YXXZ;
  dart_int* YXXW;
  dart_int* YXYX;
  dart_int* YXYY;
  dart_int* YXYZ;
  dart_int* YXYW;
  dart_int* YXZX;
  dart_int* YXZY;
  dart_int* YXZZ;
  dart_int* YXZW;
  dart_int* YXWX;
  dart_int* YXWY;
  dart_int* YXWZ;
  dart_int* YXWW;
  dart_int* YYXX;
  dart_int* YYXY;
  dart_int* YYXZ;
  dart_int* YYXW;
  dart_int* YYYX;
  dart_int* YYYY;
  dart_int* YYYZ;
  dart_int* YYYW;
  dart_int* YYZX;
  dart_int* YYZY;
  dart_int* YYZZ;
  dart_int* YYZW;
  dart_int* YYWX;
  dart_int* YYWY;
  dart_int* YYWZ;
  dart_int* YYWW;
  dart_int* YZXX;
  dart_int* YZXY;
  dart_int* YZXZ;
  dart_int* YZXW;
  dart_int* YZYX;
  dart_int* YZYY;
  dart_int* YZYZ;
  dart_int* YZYW;
  dart_int* YZZX;
  dart_int* YZZY;
  dart_int* YZZZ;
  dart_int* YZZW;
  dart_int* YZWX;
  dart_int* YZWY;
  dart_int* YZWZ;
  dart_int* YZWW;
  dart_int* YWXX;
  dart_int* YWXY;
  dart_int* YWXZ;
  dart_int* YWXW;
  dart_int* YWYX;
  dart_int* YWYY;
  dart_int* YWYZ;
  dart_int* YWYW;
  dart_int* YWZX;
  dart_int* YWZY;
  dart_int* YWZZ;
  dart_int* YWZW;
  dart_int* YWWX;
  dart_int* YWWY;
  dart_int* YWWZ;
  dart_int* YWWW;
  dart_int* ZXXX;
  dart_int* ZXXY;
  dart_int* ZXXZ;
  dart_int* ZXXW;
  dart_int* ZXYX;
  dart_int* ZXYY;
  dart_int* ZXYZ;
  dart_int* ZXYW;
  dart_int* ZXZX;
  dart_int* ZXZY;
  dart_int* ZXZZ;
  dart_int* ZXZW;
  dart_int* ZXWX;
  dart_int* ZXWY;
  dart_int* ZXWZ;
  dart_int* ZXWW;
  dart_int* ZYXX;
  dart_int* ZYXY;
  dart_int* ZYXZ;
  dart_int* ZYXW;
  dart_int* ZYYX;
  dart_int* ZYYY;
  dart_int* ZYYZ;
  dart_int* ZYYW;
  dart_int* ZYZX;
  dart_int* ZYZY;
  dart_int* ZYZZ;
  dart_int* ZYZW;
  dart_int* ZYWX;
  dart_int* ZYWY;
  dart_int* ZYWZ;
  dart_int* ZYWW;
  dart_int* ZZXX;
  dart_int* ZZXY;
  dart_int* ZZXZ;
  dart_int* ZZXW;
  dart_int* ZZYX;
  dart_int* ZZYY;
  dart_int* ZZYZ;
  dart_int* ZZYW;
  dart_int* ZZZX;
  dart_int* ZZZY;
  dart_int* ZZZZ;
  dart_int* ZZZW;
  dart_int* ZZWX;
  dart_int* ZZWY;
  dart_int* ZZWZ;
  dart_int* ZZWW;
  dart_int* ZWXX;
  dart_int* ZWXY;
  dart_int* ZWXZ;
  dart_int* ZWXW;
  dart_int* ZWYX;
  dart_int* ZWYY;
  dart_int* ZWYZ;
  dart_int* ZWYW;
  dart_int* ZWZX;
  dart_int* ZWZY;
  dart_int* ZWZZ;
  dart_int* ZWZW;
  dart_int* ZWWX;
  dart_int* ZWWY;
  dart_int* ZWWZ;
  dart_int* ZWWW;
  dart_int* WXXX;
  dart_int* WXXY;
  dart_int* WXXZ;
  dart_int* WXXW;
  dart_int* WXYX;
  dart_int* WXYY;
  dart_int* WXYZ;
  dart_int* WXYW;
  dart_int* WXZX;
  dart_int* WXZY;
  dart_int* WXZZ;
  dart_int* WXZW;
  dart_int* WXWX;
  dart_int* WXWY;
  dart_int* WXWZ;
  dart_int* WXWW;
  dart_int* WYXX;
  dart_int* WYXY;
  dart_int* WYXZ;
  dart_int* WYXW;
  dart_int* WYYX;
  dart_int* WYYY;
  dart_int* WYYZ;
  dart_int* WYYW;
  dart_int* WYZX;
  dart_int* WYZY;
  dart_int* WYZZ;
  dart_int* WYZW;
  dart_int* WYWX;
  dart_int* WYWY;
  dart_int* WYWZ;
  dart_int* WYWW;
  dart_int* WZXX;
  dart_int* WZXY;
  dart_int* WZXZ;
  dart_int* WZXW;
  dart_int* WZYX;
  dart_int* WZYY;
  dart_int* WZYZ;
  dart_int* WZYW;
  dart_int* WZZX;
  dart_int* WZZY;
  dart_int* WZZZ;
  dart_int* WZZW;
  dart_int* WZWX;
  dart_int* WZWY;
  dart_int* WZWZ;
  dart_int* WZWW;
  dart_int* WWXX;
  dart_int* WWXY;
  dart_int* WWXZ;
  dart_int* WWXW;
  dart_int* WWYX;
  dart_int* WWYY;
  dart_int* WWYZ;
  dart_int* WWYW;
  dart_int* WWZX;
  dart_int* WWZY;
  dart_int* WWZZ;
  dart_int* WWZW;
  dart_int* WWWX;
  dart_int* WWWY;
  dart_int* WWWZ;
  dart_int* WWWW;
} dart_Int32x4;
 
typedef struct {
} dart_Float64x2;
 
typedef struct {
  dart_ByteBuffer* _data;
} dart_UnmodifiableByteBufferView;
 
typedef struct {
  dart_ByteData* _data;
} dart_UnmodifiableByteDataView;
 
typedef struct {
} dart__UnmodifiableListMixin;
 
typedef struct {
} dart__UnmodifiableUint8ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Uint8List* _list;
} dart_UnmodifiableUint8ListView;
 
typedef struct {
} dart__UnmodifiableInt8ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Int8List* _list;
} dart_UnmodifiableInt8ListView;
 
typedef struct {
} dart__UnmodifiableUint8ClampedListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Uint8ClampedList* _list;
} dart_UnmodifiableUint8ClampedListView;
 
typedef struct {
} dart__UnmodifiableUint16ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Uint16List* _list;
} dart_UnmodifiableUint16ListView;
 
typedef struct {
} dart__UnmodifiableInt16ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Int16List* _list;
} dart_UnmodifiableInt16ListView;
 
typedef struct {
} dart__UnmodifiableUint32ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Uint32List* _list;
} dart_UnmodifiableUint32ListView;
 
typedef struct {
} dart__UnmodifiableInt32ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Int32List* _list;
} dart_UnmodifiableInt32ListView;
 
typedef struct {
} dart__UnmodifiableUint64ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Uint64List* _list;
} dart_UnmodifiableUint64ListView;
 
typedef struct {
} dart__UnmodifiableInt64ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Int64List* _list;
} dart_UnmodifiableInt64ListView;
 
typedef struct {
} dart__UnmodifiableInt32x4ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Int32x4List* _list;
} dart_UnmodifiableInt32x4ListView;
 
typedef struct {
} dart__UnmodifiableFloat32x4ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Float32x4List* _list;
} dart_UnmodifiableFloat32x4ListView;
 
typedef struct {
} dart__UnmodifiableFloat64x2ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Float64x2List* _list;
} dart_UnmodifiableFloat64x2ListView;
 
typedef struct {
} dart__UnmodifiableFloat32ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Float32List* _list;
} dart_UnmodifiableFloat32ListView;
 
typedef struct {
} dart__UnmodifiableFloat64ListView_UnmodifiableListBase__UnmodifiableListMixin;
 
typedef struct {
  dart_Float64List* _list;
} dart_UnmodifiableFloat64ListView;
 
dart_int* dart_typed_data__byteSwap16(dart_int* value);
 
dart_int* dart_typed_data__byteSwap32(dart_int* value);
 
dart_int* dart_typed_data__byteSwap64(dart_int* value);
 
dart_int* dart_typed_data__toInt(dart_int* value, dart_int* mask);
 
dart_int* dart_typed_data__toInt8(dart_int* value);
 
dart_int* dart_typed_data__toUint8(dart_int* value);
 
dart_int* dart_typed_data__toClampedUint8(dart_int* value);
 
dart_int* dart_typed_data__toInt16(dart_int* value);
 
dart_int* dart_typed_data__toUint16(dart_int* value);
 
dart_int* dart_typed_data__toInt32(dart_int* value);
 
dart_int* dart_typed_data__toUint32(dart_int* value);
 
dart_int* dart_typed_data__toInt64(dart_int* value);
 
dart_int* dart_typed_data__toUint64(dart_int* value);
 
void dart_typed_data__rangeCheck(dart_int* listLength, dart_int* start, dart_int* length);
 
void dart_typed_data__offsetAlignmentCheck(dart_int* offset, dart_int* alignment);
 
dart_int* dart_typed_data__defaultIfNull(void* object, void* value);
 
typedef struct {
  dart_Completer* completer;
  dart_Uri* uri;
  dart_List* bytes;
} dart_PendingWrite;
 
typedef struct {
  dart_List* pendingWrites;
  dart_int* kMaxOpenWrites;
  dart_int* openWrites;
} dart_WriteLimiter;
 
typedef struct {
  dart_SendPort* sp;
  dart_int* tag;
  dart_Uri* uri;
  dart_Uri* resolvedUri;
  dart_String* libraryUrl;
} dart_FileRequest;
 
typedef struct {
  dart_int* isolateId;
  dart_bool* _dead;
  dart_SendPort* sp;
  dart_Uri* _workingDirectory;
  dart_Uri* _rootScript;
  dart_String* _packageError;
  dart_Uri* _packageRoot;
  dart_Uri* _packageConfig;
  dart_Map* _packageMap;
  dart_int* _maxFileRequests;
  dart_int* currentFileRequests;
  dart_List* _fileRequestQueue;
  dart_List* _pendingPackageLoads;
  dart_RawReceivePort* _packagesPort;
} dart_IsolateLoaderState;
 
typedef struct {
  dart_int* PARSE_ERROR_CODE;
  dart_int* BINARY_MESSAGE_ERROR_CODE;
  dart_int* NOT_MAP_ERROR_CODE;
  dart_int* ID_ERROR_CODE;
  dart_WebSocket* socket;
} dart_WebSocketClient;
 
typedef struct {
  dart_ContentType* jsonContentType;
  dart_HttpRequest* request;
} dart_HttpRequestClient;
 
typedef struct {
  dart_String* WEBSOCKET_PATH;
  dart_String* ROOT_REDIRECT_PATH;
  dart_VMService* _service;
  dart_String* _ip;
  dart_int* _port;
  dart_bool* _originCheckDisabled;
  dart_HttpServer* _server;
} dart_Server;
 
void* vmservice_io__sanitizeWindowsPath(void* path);
 
void* vmservice_io__trimWindowsPath(void* path);
 
void* vmservice_io__enforceTrailingSlash(void* uri);
 
void* vmservice_io__log(void* msg);
 
void vmservice_io__sendResourceResponse(dart_SendPort* sp, dart_int* tag, dart_Uri* uri, dart_Uri* resolvedUri, dart_String* libraryUrl, void* data);
 
void vmservice_io__sendExtensionImportResponse(dart_SendPort* sp, dart_Uri* uri, dart_String* libraryUrl, dart_String* resolvedUri);
 
void vmservice_io__loadHttp(dart_SendPort* sp, dart_int* tag, dart_Uri* uri, dart_Uri* resolvedUri, dart_String* libraryUrl);
 
void vmservice_io__loadFile(dart_IsolateLoaderState* loaderState, dart_SendPort* sp, dart_int* tag, dart_Uri* uri, dart_Uri* resolvedUri, dart_String* libraryUrl);
 
void vmservice_io__loadDataUri(dart_SendPort* sp, dart_int* tag, dart_Uri* uri, dart_Uri* resolvedUri, dart_String* libraryUrl);
 
void* vmservice_io__loadPackage(dart_IsolateLoaderState* loaderState, dart_SendPort* sp, dart_bool* traceLoading, dart_int* tag, dart_Uri* uri, dart_Uri* resolvedUri, dart_String* libraryUrl);
 
void* vmservice_io__handleResourceRequest(dart_IsolateLoaderState* loaderState, dart_SendPort* sp, dart_bool* traceLoading, dart_int* tag, dart_Uri* uri, dart_Uri* resolvedUri, dart_String* libraryUrl);
 
void* vmservice_io__parsePackagesFile(dart_SendPort* sp, dart_bool* traceLoading, dart_Uri* packagesFile, dart_List* data);
 
void* vmservice_io__loadPackagesFile(dart_SendPort* sp, dart_bool* traceLoading, dart_Uri* packagesFile);
 
void* vmservice_io__findPackagesFile(dart_SendPort* sp, dart_bool* traceLoading, dart_Uri* base);
 
dart_Future* vmservice_io__loadHttpPackagesFile(dart_SendPort* sp, dart_bool* traceLoading, dart_Uri* resource);
 
void* vmservice_io__loadPackagesData(void* sp, void* traceLoading, void* resource);
 
void* vmservice_io__handlePackagesRequest(dart_SendPort* sp, dart_bool* traceLoading, dart_int* tag, dart_Uri* resource);
 
void vmservice_io_shutdownLoaders();
 
void* vmservice_io__processLoadRequest(void* request);
 
void vmservice_io_serverPrint(dart_String* s);
 
void vmservice_io__notifyServerState(dart_String* uri);
 
void* vmservice_io__lazyServerBoot();
 
dart_Future* vmservice_io_cleanupCallback();
 
dart_Future* vmservice_io_createTempDirCallback(dart_String* base);
 
dart_Future* vmservice_io_deleteDirCallback(dart_Uri* path);
 
dart_Future* vmservice_io_writeFileCallback(dart_Uri* path, dart_List* bytes);
 
dart_Future* vmservice_io_writeStreamFileCallback(dart_Uri* path, dart_Stream* bytes);
 
dart_Future* vmservice_io_readFileCallback(dart_Uri* path);
 
dart_Future* vmservice_io_listFilesCallback(dart_Uri* dirPath);
 
dart_Future* vmservice_io_serverInformationCallback();
 
dart_Future* vmservice_io_webServerControlCallback(dart_bool* enable);
 
dart_Null* vmservice_io__clearFuture(void* _);
 
void* vmservice_io__onSignal(dart_ProcessSignal* signal);
 
void* vmservice_io__registerSignalHandler();
 
void* vmservice_io_main();
 
void* vmservice_io__shutdown();
 
typedef struct {
} dart_IsolateEmbedderData;
 
typedef struct {
  void* serverStart;
  void* serverStop;
  void* cleanup;
  void* createTempDir;
  void* deleteDir;
  void* writeFile;
  void* writeStreamFile;
  void* readFile;
  void* listFiles;
  void* serverInformation;
  void* webServerControl;
} dart_VMServiceEmbedderHooks;
 
typedef struct {
  dart_VMService* _instance;
  dart_String* serviceNamespace;
  dart_NamedLookup* clients;
  dart_IdGenerator* _serviceRequests;
  dart_RunningIsolates* runningIsolates;
  dart_RawReceivePort* eventPort;
  dart_DevFS* devfs;
  dart_String* kServiceStream;
  dart_List* serviceStreams;
} dart_VMService;
 
typedef struct {
  dart_String* name;
  dart_Uint8List* data;
} dart_Asset;
 
typedef struct {
  dart_VMService* service;
  dart_bool* sendEvents;
  dart_Set* streams;
  dart_Map* services;
  dart_Map* serviceHandles;
} dart_Client;
 
typedef struct {
  dart_String* name;
  dart_Uri* uri;
} dart__FileSystem;
 
typedef struct {
  dart_Map* _fsMap;
  dart_Set* _rpcNames;
} dart_DevFS;
 
typedef struct {
  dart_int* SERVICE_EXIT_MESSAGE_ID;
  dart_int* ISOLATE_STARTUP_MESSAGE_ID;
  dart_int* ISOLATE_SHUTDOWN_MESSAGE_ID;
  dart_int* WEB_SERVER_CONTROL_MESSAGE_ID;
  dart_int* SERVER_INFO_MESSAGE_ID;
} dart_Constants;
 
typedef struct {
  dart_int* portId;
  dart_SendPort* sendPort;
  dart_String* name;
} dart_RunningIsolate;
 
typedef struct {
  dart_Map* isolates;
  dart_int* _rootPortId;
} dart_RunningIsolates;
 
typedef struct {
  dart_int* index;
  dart_String* _name;
  dart_List* values;
  dart_MessageType* Request;
  dart_MessageType* Notification;
  dart_MessageType* Response;
} dart_MessageType;
 
typedef struct {
  dart_Completer* _completer;
  dart_Client* client;
  dart_MessageType* type;
  void* serial;
  dart_String* method;
  dart_Map* params;
  dart_Map* result;
  dart_Map* error;
} dart_Message;
 
typedef struct {
} dart_MessageRouter;
 
typedef struct {
  dart_int* index;
  dart_String* _name;
  dart_List* values;
  dart_ResponsePayloadKind* String;
  dart_ResponsePayloadKind* Binary;
  dart_ResponsePayloadKind* Utf8String;
} dart_ResponsePayloadKind;
 
typedef struct {
  dart_ResponsePayloadKind* kind;
  void* payload;
} dart_Response;
 
typedef struct {
} dart__NamedLookup_Object_IterableMixin;
 
typedef struct {
  dart_IdGenerator* _generator;
  dart_Map* _elements;
  dart_Map* _ids;
} dart_NamedLookup;
 
typedef struct {
  dart_String* prologue;
  dart_Set* _used;
  dart_Set* _free;
  dart_int* _next;
} dart_IdGenerator;
 
dart_List* dart__vmservice__decodeAssets(dart_Uint8List* data);
 
dart_Map* dart__vmservice_get_assets();
 
dart_String* dart__vmservice__encodeDevFSDisabledError(dart_Message* message);
 
dart_String* dart__vmservice__encodeFileSystemAlreadyExistsError(dart_Message* message, dart_String* fsName);
 
dart_String* dart__vmservice__encodeFileSystemDoesNotExistError(dart_Message* message, dart_String* fsName);
 
dart_bool* dart__vmservice_sendIsolateServiceMessage(dart_SendPort* sp, dart_List* m);
 
void dart__vmservice_sendRootServiceMessage(dart_List* m);
 
void dart__vmservice_sendObjectRootServiceMessage(dart_List* m);
 
dart_String* dart__vmservice__makeAuthToken();
 
dart_String* dart__vmservice_encodeRpcError(dart_Message* message, dart_int* code);
 
dart_String* dart__vmservice_encodeMissingParamError(dart_Message* message, dart_String* param);
 
dart_String* dart__vmservice_encodeInvalidParamError(dart_Message* message, dart_String* param);
 
dart_String* dart__vmservice_encodeResult(dart_Message* message, dart_Map* result);
 
dart_String* dart__vmservice_encodeSuccess(dart_Message* message);
 
dart_RawReceivePort* dart__vmservice_boot();
 
void dart__vmservice__registerIsolate(dart_int* port_id, dart_SendPort* sp, dart_String* name);
 
void dart__vmservice__onStart();
 
void dart__vmservice__onExit();
 
void dart__vmservice_onServerAddressChange(dart_String* address);
 
dart_bool* dart__vmservice__vmListenStream(dart_String* streamId);
 
void dart__vmservice__vmCancelStream(dart_String* streamId);
 
dart_Uint8List* dart__vmservice__requestAssets();
 
void dart__vmservice__spawnUriNotify(void* obj, dart_String* token);
 
void builtin__printString(dart_String* s);
 
void builtin__print(void* arg);
 
void* builtin__getPrintClosure();
 
dart_Future* builtin__makeLoaderRequest(dart_int* tag, dart_String* uri);
 
void* builtin__log(void* msg);
 
void* builtin__sanitizeWindowsPath(void* path);
 
void* builtin__trimWindowsPath(void* path);
 
void* builtin__enforceTrailingSlash(void* uri);
 
void builtin__setWorkingDirectory(dart_String* cwd);
 
void* builtin__setPackageRoot(dart_String* packageRoot);
 
void builtin__setPackagesMap(dart_String* packagesParam);
 
dart_String* builtin__resolveScriptUri(dart_String* scriptName);
 
dart_String* builtin__resolveInWorkingDirectory(dart_String* fileName);
 
dart_Uri* builtin__resolvePackageUri(dart_Uri* uri);
 
dart_String* builtin__filePathFromUri(dart_String* userUri);
 
void* builtin__libraryFilePath(dart_String* libraryUri);
 
void* builtin__setupHooks();
 
dart_Future* builtin__resourceReadAsBytes(dart_Uri* uri);
 
dart_Future* builtin__getPackageRootFuture();
 
dart_Future* builtin__getPackageConfigFuture();
 
dart_Future* builtin__resolvePackageUriFuture(dart_Uri* packageUri);
 
typedef struct {
} dart_NativeFieldWrapperClass1;
 
typedef struct {
} dart_NativeFieldWrapperClass2;
 
typedef struct {
} dart_NativeFieldWrapperClass3;
 
typedef struct {
} dart_NativeFieldWrapperClass4;
 
typedef struct {
} dart__AsyncDirectoryListerOpsImpl;
 
typedef struct {
} dart__RandomAccessFileOpsImpl;
 
typedef struct {
  dart_int* pathId;
  dart_String* path;
  dart_int* events;
  dart_int* count;
} dart__WatcherPath;
 
typedef struct {
  dart_Map* _idMap;
  dart_StreamSubscription* _subscription;
} dart__InotifyFileSystemWatcher;
 
typedef struct {
  dart_StreamSubscription* _subscription;
  dart_StreamController* _controller;
} dart__Win32FileSystemWatcher;
 
typedef struct {
  dart_StreamSubscription* _subscription;
  dart_StreamController* _controller;
} dart__FSEventStreamFileSystemWatcher;
 
typedef struct {
} dart__FilterImpl;
 
typedef struct {
} dart__ZLibInflateFilter;
 
typedef struct {
} dart__ZLibDeflateFilter;
 
typedef struct {
  dart_int* maxPorts;
  dart_List* _ports;
  dart_List* _freePorts;
  dart_Map* _usedPorts;
} dart__IOServicePorts;
 
typedef struct {
  dart__NamespaceImpl* _cachedNamespace;
} dart__NamespaceImpl;
 
typedef struct {
  dart_ProcessSignal* signal;
  dart_StreamController* _controller;
  void* _id;
} dart__SignalController;
 
typedef struct {
  dart_int* _errorCode;
  dart_String* _errorMessage;
} dart__ProcessStartStatus;
 
typedef struct {
} dart__ProcessImplNativeWrapper;
 
typedef struct {
  dart__ProcessResourceInfo* _resourceInfo;
  dart_bool* connectedResourceHandler;
  dart_String* _path;
  dart_List* _arguments;
  dart_String* _workingDirectory;
  dart_List* _environment;
  dart_ProcessStartMode* _mode;
  dart__StdSink* _stdin;
  dart__StdStream* _stdout;
  dart__StdStream* _stderr;
  dart__Socket* _exitHandler;
  dart_bool* _ended;
  dart_bool* _started;
  dart_Completer* _exitCode;
} dart__ProcessImpl;
 
typedef struct {
  dart_int* _ADDRESS_LOOPBACK_IP_V4;
  dart_int* _ADDRESS_LOOPBACK_IP_V6;
  dart_int* _ADDRESS_ANY_IP_V4;
  dart_int* _ADDRESS_ANY_IP_V6;
  dart_int* _IPV4_ADDR_LENGTH;
  dart_int* _IPV6_ADDR_LENGTH;
  dart__InternetAddress* LOOPBACK_IP_V4;
  dart__InternetAddress* LOOPBACK_IP_V6;
  dart__InternetAddress* ANY_IP_V4;
  dart__InternetAddress* ANY_IP_V6;
  dart_String* address;
  dart_String* _host;
  dart_Uint8List* _in_addr;
} dart__InternetAddress;
 
typedef struct {
  dart_String* name;
  dart_int* index;
  dart_List* addresses;
} dart__NetworkInterface;
 
typedef struct {
} dart__NativeSocketNativeWrapper;
 
typedef struct {
} dart___NativeSocket__NativeSocketNativeWrapper__ServiceObject;
 
typedef struct {
  dart_int* READ_EVENT;
  dart_int* WRITE_EVENT;
  dart_int* ERROR_EVENT;
  dart_int* CLOSED_EVENT;
  dart_int* DESTROYED_EVENT;
  dart_int* FIRST_EVENT;
  dart_int* LAST_EVENT;
  dart_int* EVENT_COUNT;
  dart_int* CLOSE_COMMAND;
  dart_int* SHUTDOWN_READ_COMMAND;
  dart_int* SHUTDOWN_WRITE_COMMAND;
  dart_int* RETURN_TOKEN_COMMAND;
  dart_int* SET_EVENT_MASK_COMMAND;
  dart_int* FIRST_COMMAND;
  dart_int* LAST_COMMAND;
  dart_int* LISTENING_SOCKET;
  dart_int* PIPE_SOCKET;
  dart_int* TYPE_NORMAL_SOCKET;
  dart_int* TYPE_LISTENING_SOCKET;
  dart_int* TYPE_PIPE;
  dart_int* TYPE_TYPE_MASK;
  dart_int* TCP_SOCKET;
  dart_int* UDP_SOCKET;
  dart_int* INTERNAL_SOCKET;
  dart_int* INTERNAL_SIGNAL_SOCKET;
  dart_int* TYPE_TCP_SOCKET;
  dart_int* TYPE_UDP_SOCKET;
  dart_int* TYPE_INTERNAL_SOCKET;
  dart_int* TYPE_INTERNAL_SIGNAL_SOCKET;
  dart_int* TYPE_PROTOCOL_MASK;
  dart_int* HOST_NAME_LOOKUP;
  dart_int* LIST_INTERFACES;
  dart_int* REVERSE_LOOKUP;
  dart_int* PROTOCOL_IPV4;
  dart_int* PROTOCOL_IPV6;
  dart_int* NORMAL_TOKEN_BATCH_SIZE;
  dart_int* LISTENING_TOKEN_BATCH_SIZE;
  dart_Duration* _RETRY_DURATION;
  dart_Duration* _RETRY_DURATION_LOOPBACK;
  dart_bool* isClosed;
  dart_bool* isClosing;
  dart_bool* isClosedRead;
  dart_bool* closedReadEventSent;
  dart_bool* isClosedWrite;
  dart_Completer* closeCompleter;
  dart_List* eventHandlers;
  dart_RawReceivePort* eventPort;
  dart_bool* flagsSent;
  dart_int* typeFlags;
  dart_int* localPort;
  dart_InternetAddress* localAddress;
  dart_int* available;
  dart_int* tokens;
  dart_bool* sendReadEvents;
  dart_bool* readEventIssued;
  dart_bool* sendWriteEvents;
  dart_bool* writeEventIssued;
  dart_bool* writeAvailable;
  dart_bool* connectedResourceHandler;
  dart__ReadWriteResourceInfo* resourceInfo;
  dart_Object* owner;
} dart__NativeSocket;
 
typedef struct {
  dart__NativeSocket* _socket;
  dart_StreamController* _controller;
  dart_ReceivePort* _referencePort;
  dart_bool* _v6Only;
} dart__RawServerSocket;
 
typedef struct {
  dart__NativeSocket* _socket;
  dart_StreamController* _controller;
  dart_bool* _readEventsEnabled;
  dart_bool* _writeEventsEnabled;
  dart_bool* _isMacOSTerminalInput;
} dart__RawSocket;
 
typedef struct {
  void* _socket;
} dart__ServerSocket;
 
typedef struct {
  dart_StreamSubscription* subscription;
  dart__Socket* socket;
  dart_int* offset;
  dart_List* buffer;
  dart_bool* paused;
  dart_Completer* streamCompleter;
} dart__SocketStreamConsumer;
 
typedef struct {
  dart_RawSocket* _raw;
  dart_bool* _closed;
  dart_StreamController* _controller;
  dart_bool* _controllerClosed;
  dart__SocketStreamConsumer* _consumer;
  dart_IOSink* _sink;
  void* _subscription;
  void* _detachReady;
} dart__Socket;
 
typedef struct {
  dart__NativeSocket* _socket;
  dart_StreamController* _controller;
  dart_bool* _readEventsEnabled;
  dart_bool* _writeEventsEnabled;
} dart__RawDatagramSocket;
 
typedef struct {
} dart__SecureSocket;
 
typedef struct {
  dart_int* SIZE;
  dart_int* ENCRYPTED_SIZE;
  dart_List* buffers;
} dart__SecureFilterImpl;
 
typedef struct {
  dart_SecurityContext* defaultContext;
} dart__SecurityContext;
 
typedef struct {
} dart__X509CertificateImpl;
 
typedef struct {
  dart__NativeSynchronousSocket* _socket;
} dart__RawSynchronousSocket;
 
typedef struct {
} dart__NativeSynchronousSocketNativeWrapper;
 
typedef struct {
  dart_bool* isClosed;
  dart_bool* isClosedRead;
  dart_bool* isClosedWrite;
  dart_InternetAddress* localAddress;
  dart_int* localPort;
  dart__ReadWriteResourceInfo* resourceInfo;
} dart__NativeSynchronousSocket;
 
typedef struct {
} dart_BytesBuilder;
 
typedef struct {
  dart_int* _INIT_SIZE;
  dart_Uint8List* _emptyList;
  dart_int* _length;
  dart_Uint8List* _buffer;
} dart__CopyingBytesBuilder;
 
typedef struct {
  dart_int* _length;
  dart_List* _chunks;
} dart__BytesBuilder;
 
typedef struct {
} dart_IOException;
 
typedef struct {
  dart_int* noErrorCode;
  dart_String* message;
  dart_int* errorCode;
} dart_OSError;
 
typedef struct {
  dart_List* buffer;
  dart_int* start;
} dart__BufferAndStart;
 
typedef struct {
} dart__IOCrypto;
 
typedef struct {
  dart_int* MIN_WINDOW_BITS;
  dart_int* MAX_WINDOW_BITS;
  dart_int* DEFAULT_WINDOW_BITS;
  dart_int* MIN_LEVEL;
  dart_int* MAX_LEVEL;
  dart_int* DEFAULT_LEVEL;
  dart_int* MIN_MEM_LEVEL;
  dart_int* MAX_MEM_LEVEL;
  dart_int* DEFAULT_MEM_LEVEL;
  dart_int* STRATEGY_FILTERED;
  dart_int* STRATEGY_HUFFMAN_ONLY;
  dart_int* STRATEGY_RLE;
  dart_int* STRATEGY_FIXED;
  dart_int* STRATEGY_DEFAULT;
} dart_ZLibOption;
 
typedef struct {
  dart_bool* gzip;
  dart_int* level;
  dart_int* memLevel;
  dart_int* strategy;
  dart_int* windowBits;
  dart_bool* raw;
  dart_List* dictionary;
} dart_ZLibCodec;
 
typedef struct {
  dart_bool* gzip;
  dart_int* level;
  dart_int* memLevel;
  dart_int* strategy;
  dart_int* windowBits;
  dart_List* dictionary;
  dart_bool* raw;
} dart_GZipCodec;
 
typedef struct {
  dart_bool* gzip;
  dart_int* level;
  dart_int* memLevel;
  dart_int* strategy;
  dart_int* windowBits;
  dart_List* dictionary;
  dart_bool* raw;
} dart_ZLibEncoder;
 
typedef struct {
  dart_int* windowBits;
  dart_List* dictionary;
  dart_bool* raw;
} dart_ZLibDecoder;
 
typedef struct {
} dart_RawZLibFilter;
 
typedef struct {
  dart_BytesBuilder* builder;
} dart__BufferSink;
 
typedef struct {
} dart__ZLibEncoderSink;
 
typedef struct {
} dart__ZLibDecoderSink;
 
typedef struct {
  dart_RawZLibFilter* _filter;
  dart_ByteConversionSink* _sink;
  dart_bool* _closed;
  dart_bool* _empty;
} dart__FilterSink;
 
typedef struct {
  dart_String* path;
} dart_Directory;
 
typedef struct {
  dart_String* path;
} dart__Directory;
 
typedef struct {
} dart__AsyncDirectoryListerOps;
 
typedef struct {
  dart_int* LIST_FILE;
  dart_int* LIST_DIRECTORY;
  dart_int* LIST_LINK;
  dart_int* LIST_ERROR;
  dart_int* LIST_DONE;
  dart_int* RESPONSE_TYPE;
  dart_int* RESPONSE_PATH;
  dart_int* RESPONSE_COMPLETE;
  dart_int* RESPONSE_ERROR;
  dart_String* path;
  dart_bool* recursive;
  dart_bool* followLinks;
  dart_StreamController* controller;
  dart_bool* canceled;
  dart_bool* nextRunning;
  dart_bool* closed;
  dart__AsyncDirectoryListerOps* _ops;
  dart_Completer* closeCompleter;
} dart__AsyncDirectoryLister;
 
typedef struct {
  dart_bool* _mayChdir;
  dart_bool* _mayExit;
  dart_bool* _maySetEchoMode;
  dart_bool* _maySetLineMode;
  dart_bool* _maySleep;
} dart__EmbedderConfig;
 
typedef struct {
} dart__EventHandler;
 
typedef struct {
  dart_FileMode* READ;
  dart_FileMode* WRITE;
  dart_FileMode* APPEND;
  dart_FileMode* WRITE_ONLY;
  dart_FileMode* WRITE_ONLY_APPEND;
  dart_int* _mode;
} dart_FileMode;
 
typedef struct {
  dart_int* index;
  dart_String* _name;
  dart_List* values;
  dart_FileLock* SHARED;
  dart_FileLock* EXCLUSIVE;
  dart_FileLock* BLOCKING_SHARED;
  dart_FileLock* BLOCKING_EXCLUSIVE;
} dart_FileLock;
 
typedef struct {
} dart_File;
 
typedef struct {
} dart_RandomAccessFile;
 
typedef struct {
  dart_String* message;
  dart_String* path;
  dart_OSError* osError;
} dart_FileSystemException;
 
typedef struct {
  dart_StreamController* _controller;
  dart_String* _path;
  dart_RandomAccessFile* _openedFile;
  dart_int* _position;
  dart_int* _end;
  dart_Completer* _closeCompleter;
  dart_bool* _unsubscribed;
  dart_bool* _readInProgress;
  dart_bool* _closed;
  dart_bool* _atEnd;
} dart__FileStream;
 
typedef struct {
  dart_File* _file;
  dart_Future* _openFuture;
} dart__FileStreamConsumer;
 
typedef struct {
  dart_String* path;
} dart__File;
 
typedef struct {
} dart__RandomAccessFileOps;
 
typedef struct {
  dart_bool* _connectedResourceHandler;
  dart_String* path;
  dart_bool* _asyncDispatched;
  dart_SendPort* _fileService;
  dart__FileResourceInfo* _resourceInfo;
  dart__RandomAccessFileOps* _ops;
  dart_int* LOCK_UNLOCK;
  dart_int* LOCK_SHARED;
  dart_int* LOCK_EXCLUSIVE;
  dart_int* LOCK_BLOCKING_SHARED;
  dart_int* LOCK_BLOCKING_EXCLUSIVE;
  dart_bool* closed;
} dart__RandomAccessFile;
 
typedef struct {
  dart_FileSystemEntityType* FILE;
  dart_FileSystemEntityType* DIRECTORY;
  dart_FileSystemEntityType* LINK;
  dart_FileSystemEntityType* NOT_FOUND;
  dart_List* _typeList;
  dart_int* _type;
} dart_FileSystemEntityType;
 
typedef struct {
  dart_int* _TYPE;
  dart_int* _CHANGED_TIME;
  dart_int* _MODIFIED_TIME;
  dart_int* _ACCESSED_TIME;
  dart_int* _MODE;
  dart_int* _SIZE;
  dart_FileStat* _notFound;
  dart_DateTime* changed;
  dart_DateTime* modified;
  dart_DateTime* accessed;
  dart_FileSystemEntityType* type;
  dart_int* mode;
  dart_int* size;
} dart_FileStat;
 
typedef struct {
  dart_RegExp* _absoluteWindowsPathPattern;
  dart_RegExp* _parentRegExp;
} dart_FileSystemEntity;
 
typedef struct {
  dart_int* CREATE;
  dart_int* MODIFY;
  dart_int* DELETE;
  dart_int* MOVE;
  dart_int* ALL;
  dart_int* _MODIFY_ATTRIBUTES;
  dart_int* _DELETE_SELF;
  dart_int* _IS_DIR;
  dart_int* type;
  dart_String* path;
  dart_bool* isDirectory;
} dart_FileSystemEvent;
 
typedef struct {
} dart_FileSystemCreateEvent;
 
typedef struct {
  dart_bool* contentChanged;
} dart_FileSystemModifyEvent;
 
typedef struct {
} dart_FileSystemDeleteEvent;
 
typedef struct {
  dart_String* destination;
} dart_FileSystemMoveEvent;
 
typedef struct {
  dart_int* _id;
  dart_Map* _idMap;
  dart_String* _path;
  dart_int* _events;
  dart_bool* _recursive;
  dart__WatcherPath* _watcherPath;
  dart_StreamController* _broadcastController;
} dart__FileSystemWatcher;
 
typedef struct {
  dart_String* type;
  dart_int* id;
  dart_int* _count;
  dart_Stopwatch* _sw;
  dart_int* _startTime;
} dart__IOResourceInfo;
 
typedef struct {
  dart_int* totalRead;
  dart_int* totalWritten;
  dart_int* readCount;
  dart_int* writeCount;
  dart_double* lastRead;
  dart_double* lastWrite;
} dart__ReadWriteResourceInfo;
 
typedef struct {
  dart_String* TYPE;
  void* file;
  dart_Map* openFiles;
} dart__FileResourceInfo;
 
typedef struct {
  dart_String* TYPE;
  void* process;
  dart_double* startedAt;
  dart_Map* startedProcesses;
} dart__ProcessResourceInfo;
 
typedef struct {
  dart_String* TCP_STRING;
  dart_String* UDP_STRING;
  dart_String* TYPE;
  void* socket;
  dart_Map* openSockets;
} dart__SocketResourceInfo;
 
typedef struct {
  dart_Encoding* encoding;
} dart_IOSink;
 
typedef struct {
  dart_StreamConsumer* _target;
  dart_Completer* _doneCompleter;
  dart_StreamController* _controllerInstance;
  dart_Completer* _controllerCompleter;
  dart_bool* _isClosed;
  dart_bool* _isBound;
  dart_bool* _hasError;
} dart__StreamSinkImpl;
 
typedef struct {
  dart_Encoding* _encoding;
  dart_bool* _encodingMutable;
} dart__IOSinkImpl;
 
typedef struct {
  dart__IOServicePorts* _servicePorts;
  dart_RawReceivePort* _receivePort;
  dart_SendPort* _replyToPort;
  dart_HashMap* _messageMap;
  dart_int* _id;
} dart__IOService;
 
typedef struct {
} dart_Link;
 
typedef struct {
  dart_String* path;
} dart__Link;
 
typedef struct {
} dart__Namespace;
 
typedef struct {
  dart_IOOverrides* _global;
} dart_IOOverrides;
 
typedef struct {
  dart_IOOverrides* _previous;
  void* _createDirectory;
  void* _getCurrentDirectory;
  void* _setCurrentDirectory;
  void* _getSystemTempDirectory;
  void* _createFile;
  void* _stat;
  void* _statSync;
  void* _fseIdentical;
  void* _fseIdenticalSync;
  void* _fseGetType;
  void* _fseGetTypeSync;
  void* _fsWatch;
  void* _fsWatchIsSupported;
  void* _createLink;
  void* _socketConnect;
} dart__IOOverridesScope;
 
typedef struct {
  dart_int* _numberOfProcessors;
  dart_String* _pathSeparator;
  dart_String* _operatingSystem;
  dart_String* _operatingSystemVersion;
  dart_String* _localHostname;
  dart_String* _version;
  dart_bool* isLinux;
  dart_bool* isMacOS;
  dart_bool* isWindows;
  dart_bool* isAndroid;
  dart_bool* isIOS;
  dart_bool* isFuchsia;
} dart_Platform;
 
typedef struct {
  dart_String* executable;
  dart_String* resolvedExecutable;
  dart_String* packageRoot;
  dart_String* packageConfig;
  void* _localeClosure;
  void* _environmentCache;
  dart_String* _cachedOSVersion;
} dart__Platform;
 
typedef struct {
  dart_Map* _map;
} dart__CaseInsensitiveStringMap;
 
typedef struct {
} dart__ProcessUtils;
 
typedef struct {
} dart_ProcessInfo;
 
typedef struct {
  dart_int* index;
  dart_String* _name;
  dart_List* values;
  dart_ProcessStartMode* NORMAL;
  dart_ProcessStartMode* INHERIT_STDIO;
  dart_ProcessStartMode* DETACHED;
  dart_ProcessStartMode* DETACHED_WITH_STDIO;
} dart_ProcessStartMode;
 
typedef struct {
} dart_Process;
 
typedef struct {
  dart_int* exitCode;
  void* stdout;
  void* stderr;
  dart_int* pid;
} dart_ProcessResult;
 
typedef struct {
  dart_ProcessSignal* SIGHUP;
  dart_ProcessSignal* SIGINT;
  dart_ProcessSignal* SIGQUIT;
  dart_ProcessSignal* SIGILL;
  dart_ProcessSignal* SIGTRAP;
  dart_ProcessSignal* SIGABRT;
  dart_ProcessSignal* SIGBUS;
  dart_ProcessSignal* SIGFPE;
  dart_ProcessSignal* SIGKILL;
  dart_ProcessSignal* SIGUSR1;
  dart_ProcessSignal* SIGSEGV;
  dart_ProcessSignal* SIGUSR2;
  dart_ProcessSignal* SIGPIPE;
  dart_ProcessSignal* SIGALRM;
  dart_ProcessSignal* SIGTERM;
  dart_ProcessSignal* SIGCHLD;
  dart_ProcessSignal* SIGCONT;
  dart_ProcessSignal* SIGSTOP;
  dart_ProcessSignal* SIGTSTP;
  dart_ProcessSignal* SIGTTIN;
  dart_ProcessSignal* SIGTTOU;
  dart_ProcessSignal* SIGURG;
  dart_ProcessSignal* SIGXCPU;
  dart_ProcessSignal* SIGXFSZ;
  dart_ProcessSignal* SIGVTALRM;
  dart_ProcessSignal* SIGPROF;
  dart_ProcessSignal* SIGWINCH;
  dart_ProcessSignal* SIGPOLL;
  dart_ProcessSignal* SIGSYS;
  dart_int* _signalNumber;
  dart_String* _name;
} dart_ProcessSignal;
 
typedef struct {
  dart_String* message;
  void* osError;
} dart_SignalException;
 
typedef struct {
  dart_String* executable;
  dart_List* arguments;
  dart_String* message;
  dart_int* errorCode;
} dart_ProcessException;
 
typedef struct {
  dart_RawSecureServerSocket* _socket;
} dart_SecureServerSocket;
 
typedef struct {
  dart_RawServerSocket* _socket;
  dart_StreamController* _controller;
  dart_StreamSubscription* _subscription;
  dart_SecurityContext* _context;
  dart_bool* requestClientCertificate;
  dart_bool* requireClientCertificate;
  dart_List* supportedProtocols;
  dart_bool* _closed;
} dart_RawSecureServerSocket;
 
typedef struct {
} dart_SecureSocket;
 
typedef struct {
} dart_RawSecureSocket;
 
typedef struct {
} dart_X509Certificate;
 
typedef struct {
  dart_bool* progress;
  dart_bool* readEmpty;
  dart_bool* writeEmpty;
  dart_bool* readPlaintextNoLongerEmpty;
  dart_bool* writePlaintextNoLongerFull;
  dart_bool* readEncryptedNoLongerFull;
  dart_bool* writeEncryptedNoLongerEmpty;
} dart__FilterStatus;
 
typedef struct {
  dart_int* HANDSHAKE;
  dart_int* CONNECTED;
  dart_int* CLOSED;
  dart_int* READ_PLAINTEXT;
  dart_int* WRITE_PLAINTEXT;
  dart_int* READ_ENCRYPTED;
  dart_int* WRITE_ENCRYPTED;
  dart_int* NUM_BUFFERS;
  dart_RawSocket* _socket;
  dart_Completer* _handshakeComplete;
  dart_StreamController* _controller;
  dart_Stream* _stream;
  dart_StreamSubscription* _socketSubscription;
  dart_List* _bufferedData;
  dart_int* _bufferedDataIndex;
  dart_InternetAddress* address;
  dart_bool* is_server;
  dart_SecurityContext* context;
  dart_bool* requestClientCertificate;
  dart_bool* requireClientCertificate;
  dart_Function* onBadCertificate;
  dart_int* _status;
  dart_bool* _writeEventsEnabled;
  dart_bool* _readEventsEnabled;
  dart_int* _pauseCount;
  dart_bool* _pendingReadEvent;
  dart_bool* _socketClosedRead;
  dart_bool* _socketClosedWrite;
  dart_bool* _closedRead;
  dart_bool* _closedWrite;
  dart_Completer* _closeCompleter;
  dart__FilterStatus* _filterStatus;
  dart_bool* _connectPending;
  dart_bool* _filterPending;
  dart_bool* _filterActive;
  dart__SecureFilter* _secureFilter;
  dart_String* _selectedProtocol;
} dart__RawSecureSocket;
 
typedef struct {
  dart_List* data;
  dart_int* start;
  dart_int* end;
  void* size;
} dart__ExternalBuffer;
 
typedef struct {
} dart__SecureFilter;
 
typedef struct {
  dart_String* type;
  dart_String* message;
  dart_OSError* osError;
} dart_TlsException;
 
typedef struct {
} dart_HandshakeException;
 
typedef struct {
} dart_CertificateException;
 
typedef struct {
} dart_SecurityContext;
 
typedef struct {
  dart_int* __serviceId;
} dart__ServiceObject;
 
typedef struct {
  dart_InternetAddressType* IP_V4;
  dart_InternetAddressType* IP_V6;
  dart_InternetAddressType* ANY;
  dart_int* _value;
} dart_InternetAddressType;
 
typedef struct {
} dart_InternetAddress;
 
typedef struct {
} dart_NetworkInterface;
 
typedef struct {
} dart_RawServerSocket;
 
typedef struct {
} dart_ServerSocket;
 
typedef struct {
  dart_SocketDirection* RECEIVE;
  dart_SocketDirection* SEND;
  dart_SocketDirection* BOTH;
  void* _value;
} dart_SocketDirection;
 
typedef struct {
  dart_SocketOption* TCP_NODELAY;
  dart_SocketOption* _IP_MULTICAST_LOOP;
  dart_SocketOption* _IP_MULTICAST_HOPS;
  dart_SocketOption* _IP_MULTICAST_IF;
  dart_SocketOption* _IP_BROADCAST;
  void* _value;
} dart_SocketOption;
 
typedef struct {
  dart_RawSocketEvent* READ;
  dart_RawSocketEvent* WRITE;
  dart_RawSocketEvent* READ_CLOSED;
  dart_RawSocketEvent* CLOSED;
  dart_int* _value;
} dart_RawSocketEvent;
 
typedef struct {
  dart_bool* readEventsEnabled;
  dart_bool* writeEventsEnabled;
} dart_RawSocket;
 
typedef struct {
} dart_Socket;
 
typedef struct {
  dart_List* data;
  dart_InternetAddress* address;
  dart_int* port;
} dart_Datagram;
 
typedef struct {
  dart_bool* readEventsEnabled;
  dart_bool* writeEventsEnabled;
  dart_bool* multicastLoopback;
  dart_int* multicastHops;
  dart_NetworkInterface* multicastInterface;
  dart_bool* broadcastEnabled;
} dart_RawDatagramSocket;
 
typedef struct {
  dart_String* message;
  dart_OSError* osError;
  dart_InternetAddress* address;
  dart_int* port;
} dart_SocketException;
 
typedef struct {
  dart_Stream* _stream;
} dart__StdStream;
 
typedef struct {
  dart_int* _fd;
} dart_Stdin;
 
typedef struct {
  dart_int* _fd;
  dart_IOSink* _nonBlocking;
} dart_Stdout;
 
typedef struct {
  dart_String* message;
  dart_OSError* osError;
} dart_StdoutException;
 
typedef struct {
  dart_String* message;
  dart_OSError* osError;
} dart_StdinException;
 
typedef struct {
  void* _file;
} dart__StdConsumer;
 
typedef struct {
  dart_IOSink* _sink;
} dart__StdSink;
 
typedef struct {
  dart_StdioType* TERMINAL;
  dart_StdioType* PIPE;
  dart_StdioType* FILE;
  dart_StdioType* OTHER;
  dart_String* name;
} dart_StdioType;
 
typedef struct {
} dart__StdIOUtils;
 
typedef struct {
} dart_SystemEncoding;
 
typedef struct {
} dart__WindowsCodePageEncoder;
 
typedef struct {
  dart_Sink* _sink;
} dart__WindowsCodePageEncoderSink;
 
typedef struct {
} dart__WindowsCodePageDecoder;
 
typedef struct {
  dart_Sink* _sink;
} dart__WindowsCodePageDecoderSink;
 
typedef struct {
} dart_RawSynchronousSocket;
 
void* dart_io__setupHooks();
 
dart_Uri* dart_io__uriBaseClosure();
 
void* dart_io__getUriBaseClosure();
 
dart_Uint8List* dart_io__makeUint8ListView(dart_Uint8List* source, dart_int* offsetInBytes, dart_int* length);
 
dart_Function* dart_io__getWatchSignalInternal();
 
dart_Future* dart_io__runNonInteractiveProcess(dart_String* path, dart_List* arguments, dart_String* workingDirectory, dart_Map* environment, dart_bool* includeParentEnvironment, dart_bool* runInShell, dart_Encoding* stdoutEncoding, dart_Encoding* stderrEncoding);
 
dart_ProcessResult* dart_io__runNonInteractiveProcessSync(dart_String* executable, dart_List* arguments, dart_String* workingDirectory, dart_Map* environment, dart_bool* includeParentEnvironment, dart_bool* runInShell, dart_Encoding* stdoutEncoding, dart_Encoding* stderrEncoding);
 
void dart_io__throwOnBadPort(dart_int* port);
 
dart_Datagram* dart_io__makeDatagram(dart_List* data, dart_String* address, dart_List* in_addr, dart_int* port);
 
void* dart_io__getStdioHandle(dart__NativeSocket* socket, dart_int* num);
 
void* dart_io__getSocketType(dart__NativeSocket* nativeSocket);
 
dart_bool* dart_io__isErrorResponse(void* response);
 
void* dart_io__exceptionFromResponse(void* response, dart_String* message, dart_String* path);
 
dart__BufferAndStart* dart_io__ensureFastAndSerializableByteData(dart_List* buffer, dart_int* start, dart_int* end);
 
void dart_io__validateZLibWindowBits(dart_int* windowBits);
 
void dart_io__validateZLibeLevel(dart_int* level);
 
void dart_io__validateZLibMemLevel(dart_int* memLevel);
 
void dart_io__validateZLibStrategy(dart_int* strategy);
 
void dart_io_exit(dart_int* code);
 
void dart_io_get_exitCode(dart_int* code);
 
dart_int* dart_io_get_exitCode();
 
void dart_io_sleep(dart_Duration* duration);
 
dart_int* dart_io_get_pid();
 
void dart_io__setStdioFDs(dart_int* stdin, dart_int* stdout, dart_int* stderr);
 
dart_Stdin* dart_io_get_stdin();
 
dart_Stdout* dart_io_get_stdout();
 
dart_Stdout* dart_io_get_stderr();
 
dart_StdioType* dart_io_stdioType(void* object);
 
typedef struct {
} dart__WaitForUtils;
 
void* dart_cli__getWaitForEvent();
 
void* dart_cli_waitFor(dart_Future* future);
 
typedef struct {
  dart_String* _name;
} dart__EnumHelper;
 
typedef struct {
  void* _moveNextFn;
} dart__SyncIterable;
 
typedef struct {
  void* _moveNextFn;
  dart_Iterator* _yieldEachIterator;
  void* _current;
  dart_Iterable* _yieldEachIterable;
} dart__SyncIterator;
 
typedef struct {
} dart__List;
 
typedef struct {
} dart__ImmutableList;
 
typedef struct {
  dart_List* _array;
  dart_int* _length;
  dart_int* _index;
  void* _current;
} dart__FixedSizeArrayIterator;
 
typedef struct {
} dart__GrowableArrayMarker;
 
typedef struct {
  dart_int* _DIGIT_BITS;
  dart_int* _LOG2_DIGIT_BITS;
  dart_int* _DIGIT_BASE;
  dart_int* _DIGIT_MASK;
  dart_int* _DIGIT2_BITS;
  dart_int* _DIGIT2_MASK;
  dart_int* _TWO_DIGITS_BITS;
  dart_int* _TWO_DIGITS_MASK;
  dart_int* _MIN_INT64;
  dart_int* _MAX_INT64;
  dart__Bigint* _MINUS_ONE;
  dart__Bigint* _ZERO;
  dart__Bigint* _ONE;
  dart_Uint32List* _lastDividend_digits;
  dart_int* _lastDividend_used;
  dart_Uint32List* _lastDivisor_digits;
  dart_int* _lastDivisor_used;
  dart_Uint32List* _lastQuoRem_digits;
  dart_int* _lastQuoRem_used;
  dart_int* _lastRem_used;
  dart_int* _lastRem_nsh;
  dart_int* _YT_LO;
  dart_int* _YT;
  dart_int* _QD;
  dart_int* _QD_HI;
} dart__Bigint;
 
typedef struct {
} dart__Reduction;
 
typedef struct {
  dart__Bigint* _m;
  dart_int* _mused2p2;
  dart_Uint32List* _args;
  dart_int* _digits_per_step;
  dart_int* _X;
  dart_int* _X_HI;
  dart_int* _RHO;
  dart_int* _RHO_HI;
  dart_int* _MU;
  dart_int* _MU_HI;
} dart__Montgomery;
 
typedef struct {
  dart__Bigint* _m;
  dart__Bigint* _norm_m;
  dart_Uint32List* _neg_norm_m_digits;
  dart_int* _m_nsh;
  dart_Uint32List* _mt_qd;
  dart_Uint32List* _t_digits;
} dart__Classic;
 
typedef struct {
  dart_int* _digitBits;
  dart_int* _digitBase;
  dart_int* _digitMask;
  dart_int* _halfDigitBits;
  dart_int* _halfDigitMask;
  dart__BigIntImpl* zero;
  dart__BigIntImpl* one;
  dart__BigIntImpl* two;
  dart__BigIntImpl* _minusOne;
  dart__BigIntImpl* _oneDigitMask;
  dart__BigIntImpl* _twoDigitMask;
  dart__BigIntImpl* _oneBillion;
  dart_int* _minInt;
  dart_int* _maxInt;
  dart_Uint32List* _lastDividendDigits;
  dart_int* _lastDividendUsed;
  dart_Uint32List* _lastDivisorDigits;
  dart_int* _lastDivisorUsed;
  dart_Uint32List* _lastQuoRemDigits;
  dart_int* _lastQuoRemUsed;
  dart_int* _lastRemUsed;
  dart_int* _lastRem_nsh;
  dart_bool* _isNegative;
  dart_Uint32List* _digits;
  dart_int* _used;
  dart_Uint8List* _bitsForFromDouble;
  dart_int* _divisorLowTopDigit;
  dart_int* _divisorTopDigit;
  dart_int* _quotientDigit;
  dart_int* _quotientHighDigit;
} dart__BigIntImpl;
 
typedef struct {
} dart__BigIntReduction;
 
typedef struct {
  dart__BigIntImpl* _modulus;
  dart_int* _normModulusUsed;
  dart_Uint32List* _modulusDigits;
  dart_Uint32List* _args;
  dart_int* _digitsPerStep;
  dart_int* _xDigit;
  dart_int* _xHighDigit;
  dart_int* _rhoDigit;
  dart_int* _rhoHighDigit;
  dart_int* _muDigit;
  dart_int* _muHighDigit;
} dart__BigIntMontgomeryReduction;
 
typedef struct {
  dart__BigIntImpl* _modulus;
  dart_int* _normModulusUsed;
  dart__BigIntImpl* _normModulus;
  dart_Uint32List* _normModulusDigits;
  dart_Uint32List* _negNormModulusDigits;
  dart_int* _modulusNsh;
  dart_Uint32List* _args;
  dart_Uint32List* _tmpDigits;
} dart__BigIntClassicReduction;
 
typedef struct {
  dart_int* CACHE_SIZE_LOG2;
  dart_int* CACHE_LENGTH;
  dart_int* CACHE_MASK;
  dart_List* _cache;
  dart_int* _cacheEvictIndex;
} dart__Double;
 
typedef struct {
  dart_String* _failedAssertion;
  dart_String* _url;
  dart_int* _line;
  dart_int* _column;
  dart_Object* message;
} dart__AssertionError;
 
typedef struct {
} dart__TypeError;
 
typedef struct {
  dart_String* _url;
  dart_int* _line;
  dart_int* _column;
  dart_String* _errorMsg;
} dart__CastError;
 
typedef struct {
  dart_String* _msg;
} dart__InternalError;
 
typedef struct {
  dart_String* _errorMsg;
} dart__CompileTimeError;
 
typedef struct {
  dart_String* _name;
} dart__DuplicatedFieldInitializerError;
 
typedef struct {
  void* _instantiator_type_arguments;
  void* _function_type_arguments;
  void* _delayed_type_arguments;
  void* _function;
  void* _context;
  void* _hash;
} dart__Closure;
 
typedef struct {
  dart__List* _emptyList;
} dart__GrowableList;
 
typedef struct {
  dart__ImmutableList* _kvPairs;
} dart__ImmutableMap;
 
typedef struct {
  dart__ImmutableMap* _map;
} dart__ImmutableMapKeyIterable;
 
typedef struct {
  dart__ImmutableMap* _map;
} dart__ImmutableMapValueIterable;
 
typedef struct {
  dart__ImmutableMap* _map;
} dart__ImmutableMapEntryIterable;
 
typedef struct {
  dart__ImmutableMap* _map;
  dart_int* _nextIndex;
  void* _current;
} dart__ImmutableMapKeyIterator;
 
typedef struct {
  dart__ImmutableMap* _map;
  dart_int* _nextIndex;
  void* _current;
} dart__ImmutableMapValueIterator;
 
typedef struct {
  dart__ImmutableMap* _map;
  dart_int* _nextIndex;
  dart_MapEntry* _current;
} dart__ImmutableMapEntryIterator;
 
typedef struct {
} dart__int64;
 
typedef struct {
  dart_String* _digits;
} dart__IntegerImplementation;
 
typedef struct {
  dart_List* _digitTable;
  dart_List* _smallLookupTable;
  dart_int* _POW_10_7;
  dart_int* _POW_10_8;
  dart_int* _POW_10_9;
} dart__Smi;
 
typedef struct {
} dart__Mint;
 
typedef struct {
  dart_int* _METHOD;
  dart_int* _GETTER;
  dart_int* _SETTER;
  dart_int* _FIELD;
  dart_int* _LOCAL_VAR;
  dart_int* _KIND_SHIFT;
  dart_int* _KIND_BITS;
  dart_int* _KIND_MASK;
  dart_int* _DYNAMIC;
  dart_int* _SUPER;
  dart_int* _STATIC;
  dart_int* _CONSTRUCTOR;
  dart_int* _TOP_LEVEL;
  dart_int* _LEVEL_SHIFT;
  dart_int* _LEVEL_BITS;
  dart_int* _LEVEL_MASK;
  dart_int* _TYPE_ARGS_LEN;
  dart_int* _COUNT;
  dart_int* _POSITIONAL_COUNT;
  dart_int* _FIRST_NAMED_ENTRY;
  dart_String* _functionName;
  dart_List* _argumentsDescriptor;
  dart_List* _arguments;
  dart_bool* _isSuperInvocation;
  dart_Symbol* _memberName;
  dart_int* _type;
  dart_List* _typeArguments;
  dart_List* _positionalArguments;
  dart_Map* _namedArguments;
} dart__InvocationMirror;
 
typedef struct {
} dart__LibraryPrefix;
 
typedef struct {
  dart_String* pattern;
  dart_bool* multiLine;
  dart_bool* caseSensitive;
} dart__RegExpHashKey;
 
typedef struct {
  dart__RegExp* regexp;
  dart__RegExpHashKey* key;
} dart__RegExpHashValue;
 
typedef struct {
  dart_RegExp* _regexp;
  dart_String* input;
  dart_List* _match;
  dart_int* _MATCH_PAIR;
} dart__RegExpMatch;
 
typedef struct {
  dart_List* _wordCharacterMap;
} dart__RegExp;
 
typedef struct {
  dart__RegExp* _re;
  dart_String* _str;
  dart_int* _start;
} dart__AllMatchesIterable;
 
typedef struct {
  dart_String* _str;
  dart_int* _nextIndex;
  dart__RegExp* _re;
  dart_Match* _current;
} dart__AllMatchesIterator;
 
typedef struct {
} dart__StackTrace;
 
typedef struct {
  dart_int* _lengthBits;
  dart_int* _maxLengthValue;
  dart_int* _lengthMask;
  dart_int* _startBits;
  dart_int* _maxStartValue;
  dart_int* _maxUnsignedSmiBits;
  dart_int* _maxJoinReplaceOneByteStringLength;
} dart__StringBase;
 
typedef struct {
  dart_String* _LC_TABLE;
  dart_String* _UC_TABLE;
} dart__OneByteString;
 
typedef struct {
} dart__TwoByteString;
 
typedef struct {
} dart__ExternalOneByteString;
 
typedef struct {
} dart__ExternalTwoByteString;
 
typedef struct {
  dart_int* start;
  dart_String* input;
  dart_String* pattern;
} dart__StringMatch;
 
typedef struct {
  dart_String* _input;
  dart_String* _pattern;
  dart_int* _index;
} dart__StringAllMatchesIterable;
 
typedef struct {
  dart_String* _input;
  dart_String* _pattern;
  dart_int* _index;
  dart_Match* _current;
} dart__StringAllMatchesIterator;
 
typedef struct {
} dart__AbstractType;
 
typedef struct {
} dart__Type;
 
typedef struct {
} dart__TypeRef;
 
typedef struct {
} dart__TypeParameter;
 
typedef struct {
} dart__BoundedType;
 
typedef struct {
} dart__MixinAppType;
 
typedef struct {
} dart__WeakProperty;
 
typedef struct {
  dart_String* expires;
} dart_Deprecated;
 
typedef struct {
} dart__Override;
 
typedef struct {
  dart_String* message;
} dart_Provisional;
 
typedef struct {
} dart__Proxy;
 
typedef struct {
  dart_String* name;
  dart_Object* options;
  void* _redirecting_;
} dart_pragma;
 
typedef struct {
} dart_BigInt;
 
typedef struct {
} dart_bool;
 
typedef struct {
} dart_Comparable;
 
typedef struct {
  void* _MICROSECOND_INDEX;
  void* _MILLISECOND_INDEX;
  void* _SECOND_INDEX;
  void* _MINUTE_INDEX;
  void* _HOUR_INDEX;
  void* _DAY_INDEX;
  void* _WEEKDAY_INDEX;
  void* _MONTH_INDEX;
  void* _YEAR_INDEX;
  dart_List* __parts;
  dart_List* _DAYS_UNTIL_MONTH;
  dart_int* monday;
  dart_int* tuesday;
  dart_int* wednesday;
  dart_int* thursday;
  dart_int* friday;
  dart_int* saturday;
  dart_int* sunday;
  dart_int* daysPerWeek;
  dart_int* MONDAY;
  dart_int* TUESDAY;
  dart_int* WEDNESDAY;
  dart_int* THURSDAY;
  dart_int* FRIDAY;
  dart_int* SATURDAY;
  dart_int* SUNDAY;
  dart_int* DAYS_PER_WEEK;
  dart_int* january;
  dart_int* february;
  dart_int* march;
  dart_int* april;
  dart_int* may;
  dart_int* june;
  dart_int* july;
  dart_int* august;
  dart_int* september;
  dart_int* october;
  dart_int* november;
  dart_int* december;
  dart_int* monthsPerYear;
  dart_int* JANUARY;
  dart_int* FEBRUARY;
  dart_int* MARCH;
  dart_int* APRIL;
  dart_int* MAY;
  dart_int* JUNE;
  dart_int* JULY;
  dart_int* AUGUST;
  dart_int* SEPTEMBER;
  dart_int* OCTOBER;
  dart_int* NOVEMBER;
  dart_int* DECEMBER;
  dart_int* MONTHS_PER_YEAR;
  dart_int* _value;
  dart_bool* isUtc;
  dart_int* _maxMillisecondsSinceEpoch;
  dart_RegExp* _parseFormat;
} dart_DateTime;
 
typedef struct {
  dart_double* NAN;
  dart_double* nan;
  dart_double* INFINITY;
  dart_double* infinity;
  dart_double* NEGATIVE_INFINITY;
  dart_double* negativeInfinity;
  dart_double* MIN_POSITIVE;
  dart_double* minPositive;
  dart_double* MAX_FINITE;
  dart_double* maxFinite;
} dart_double;
 
typedef struct {
  dart_int* microsecondsPerMillisecond;
  dart_int* millisecondsPerSecond;
  dart_int* secondsPerMinute;
  dart_int* minutesPerHour;
  dart_int* hoursPerDay;
  dart_int* microsecondsPerSecond;
  dart_int* microsecondsPerMinute;
  dart_int* microsecondsPerHour;
  dart_int* microsecondsPerDay;
  dart_int* millisecondsPerMinute;
  dart_int* millisecondsPerHour;
  dart_int* millisecondsPerDay;
  dart_int* secondsPerHour;
  dart_int* secondsPerDay;
  dart_int* minutesPerDay;
  dart_Duration* zero;
  dart_int* MICROSECONDS_PER_MILLISECOND;
  dart_int* MILLISECONDS_PER_SECOND;
  dart_int* SECONDS_PER_MINUTE;
  dart_int* MINUTES_PER_HOUR;
  dart_int* HOURS_PER_DAY;
  dart_int* MICROSECONDS_PER_SECOND;
  dart_int* MICROSECONDS_PER_MINUTE;
  dart_int* MICROSECONDS_PER_HOUR;
  dart_int* MICROSECONDS_PER_DAY;
  dart_int* MILLISECONDS_PER_MINUTE;
  dart_int* MILLISECONDS_PER_HOUR;
  dart_int* MILLISECONDS_PER_DAY;
  dart_int* SECONDS_PER_HOUR;
  dart_int* SECONDS_PER_DAY;
  dart_int* MINUTES_PER_DAY;
  dart_Duration* ZERO;
  dart_int* _duration;
} dart_Duration;
 
typedef struct {
  dart_StackTrace* _stackTrace;
} dart_Error;
 
typedef struct {
  dart_Object* message;
} dart_AssertionError;
 
typedef struct {
} dart_TypeError;
 
typedef struct {
} dart_CastError;
 
typedef struct {
} dart_NullThrownError;
 
typedef struct {
  dart_bool* _hasValue;
  void* invalidValue;
  dart_String* name;
  void* message;
} dart_ArgumentError;
 
typedef struct {
  dart_num* start;
  dart_num* end;
  void* _redirecting_;
} dart_RangeError;
 
typedef struct {
  void* indexable;
  dart_int* length;
} dart_IndexError;
 
typedef struct {
  dart_String* _url;
  dart_int* _line;
} dart_FallThroughError;
 
typedef struct {
  dart_String* _url;
  dart_int* _line;
  dart_String* _className;
} dart_AbstractClassInstantiationError;
 
typedef struct {
  dart__InvocationMirror* _invocation;
  dart_int* _invocation_type;
  dart_Object* _receiver;
  dart_Symbol* _memberName;
  dart_List* _arguments;
  dart_Map* _namedArguments;
  dart_List* _existingArgumentNames;
} dart_NoSuchMethodError;
 
typedef struct {
  dart_String* message;
} dart_UnsupportedError;
 
typedef struct {
  dart_String* message;
} dart_UnimplementedError;
 
typedef struct {
  dart_String* message;
} dart_StateError;
 
typedef struct {
  dart_Object* modifiedObject;
} dart_ConcurrentModificationError;
 
typedef struct {
} dart_OutOfMemoryError;
 
typedef struct {
} dart_StackOverflowError;
 
typedef struct {
  dart_String* variableName;
} dart_CyclicInitializationError;
 
typedef struct {
} dart__ConstantExpressionError;
 
typedef struct {
} dart__ConstantHelper;
 
typedef struct {
} dart_Exception;
 
typedef struct {
  void* message;
} dart__Exception;
 
typedef struct {
  dart_String* message;
  void* source;
  dart_int* offset;
} dart_FormatException;
 
typedef struct {
} dart_IntegerDivisionByZeroException;
 
typedef struct {
  void* _minSize;
  void* _deletedEntry;
  dart_List* _data;
  dart_int* _used;
  dart_String* name;
} dart_Expando;
 
typedef struct {
} dart_Function;
 
typedef struct {
  void* _PARSE_LIMITS;
  void* _limitIntsTo64Bits;
  void* _maxInt64;
  void* _minInt64;
  void* _int64UnsignedOverflowLimits;
  void* _int64UnsignedSmiOverflowLimits;
  dart_Int64List* _int64OverflowLimits;
} dart_int;
 
typedef struct {
  void* _redirecting_;
} dart_Invocation;
 
typedef struct {
  dart_Symbol* memberName;
  dart_List* typeArguments;
  dart_List* _positional;
  dart_Map* _named;
} dart__Invocation;
 
typedef struct {
  void* _redirecting_;
} dart_Iterable;
 
typedef struct {
  dart_int* length;
  void* _generator;
} dart__GeneratorIterable;
 
typedef struct {
} dart_BidirectionalIterator;
 
typedef struct {
} dart_Iterator;
 
typedef struct {
} dart_List;
 
typedef struct {
  void* _redirecting_;
} dart_Map;
 
typedef struct {
  void* key;
  void* value;
  void* _redirecting_;
} dart_MapEntry;
 
typedef struct {
  void* _HASH_CODE;
} dart_Null;
 
typedef struct {
} dart_num;
 
typedef struct {
  void* _hashCodeRnd;
} dart_Object;
 
typedef struct {
} dart_Pattern;
 
typedef struct {
} dart_Match;
 
typedef struct {
  dart_int* _MAX_CACHE_SIZE;
  dart_Map* _cache;
  dart_LinkedList* _recentlyUsed;
} dart_RegExp;
 
typedef struct {
  void* _redirecting_;
} dart_Set;
 
typedef struct {
} dart_Sink;
 
typedef struct {
  void* _redirecting_;
} dart_StackTrace;
 
typedef struct {
  dart_String* _stackTrace;
} dart__StringStackTrace;
 
typedef struct {
  dart_int* _frequency;
  dart_int* _start;
  dart_int* _stop;
} dart_Stopwatch;
 
typedef struct {
} dart_String;
 
typedef struct {
  dart_String* string;
} dart_Runes;
 
typedef struct {
  dart_String* string;
  dart_int* _position;
  dart_int* _nextPosition;
  dart_int* _currentCodePoint;
} dart_RuneIterator;
 
typedef struct {
  dart_int* _BUFFER_SIZE;
  dart_int* _PARTS_TO_COMPACT;
  dart_int* _PARTS_TO_COMPACT_SIZE_LIMIT;
  dart_List* _parts;
  dart_int* _partsCodeUnits;
  dart_int* _partsCompactionIndex;
  dart_int* _partsCodeUnitsSinceCompaction;
  dart_Uint16List* _buffer;
  dart_int* _bufferPosition;
  dart_int* _bufferCodeUnitMagnitude;
} dart_StringBuffer;
 
typedef struct {
} dart_StringSink;
 
typedef struct {
  dart_Symbol* unaryMinus;
  dart_Symbol* empty;
  void* _redirecting_;
} dart_Symbol;
 
typedef struct {
} dart_Type;
 
typedef struct {
  void* _redirecting_;
} dart_Uri;
 
typedef struct {
  dart_bool* _isWindowsCached;
  dart_String* scheme;
  dart_String* _userInfo;
  dart_String* _host;
  dart_int* _port;
  dart_String* path;
  dart_String* _query;
  dart_String* _fragment;
  dart_List* _pathSegments;
  dart_String* _text;
  dart_int* _hashCodeCache;
  dart_Map* _queryParameters;
  dart_Map* _queryParameterLists;
  dart_List* _unreservedTable;
  dart_List* _unreserved2396Table;
  dart_List* _encodeFullTable;
  dart_List* _schemeTable;
  dart_List* _schemeLowerTable;
  dart_List* _subDelimitersTable;
  dart_List* _genDelimitersTable;
  dart_List* _userinfoTable;
  dart_List* _regNameTable;
  dart_List* _pathCharTable;
  dart_List* _pathCharOrSlashTable;
  dart_List* _queryCharTable;
} dart__Uri;
 
typedef struct {
  dart_int* _noScheme;
  dart_String* _text;
  dart_List* _separatorIndices;
  dart_Uri* _uriCache;
  dart_Base64Codec* _base64;
  dart_List* _tokenCharTable;
  dart_List* _uricTable;
  dart_List* _base64Table;
} dart_UriData;
 
typedef struct {
  dart_String* _uri;
  dart_int* _schemeEnd;
  dart_int* _hostStart;
  dart_int* _portStart;
  dart_int* _pathStart;
  dart_int* _queryStart;
  dart_int* _fragmentStart;
  dart_String* _schemeCache;
  dart_int* _hashCodeCache;
} dart__SimpleUri;
 
typedef struct {
  dart_UriData* _data;
} dart__DataUri;
 
dart_int* dart_core__max(dart_int* a, dart_int* b);
 
dart_int* dart_core__min(dart_int* a, dart_int* b);
 
dart_Uint32List* dart_core__newDigits(dart_int* length);
 
void* dart_core__classRangeAssert(dart_int* position, void* instance, dart__Type* type, dart_int* cid, dart_int* lowerLimit, dart_int* upperLimit);
 
void* dart_core__classIdEqualsAssert(dart_int* position, void* instance, dart__Type* type, dart_int* cid, dart_int* otherCid);
 
void* dart_core__completeDeferredLoads();
 
dart_int* dart_core__getHash(void* obj);
 
void dart_core__setHash(void* obj, void* hash);
 
dart_Uri* dart_core__unsupportedUriBase();
 
void dart_core_print(dart_Object* object);
 
dart_bool* dart_core__isLeadSurrogate(dart_int* code);
 
dart_bool* dart_core__isTrailSurrogate(dart_int* code);
 
dart_int* dart_core__combineSurrogatePair(dart_int* start, dart_int* end);
 
dart_List* dart_core__createTables();
 
dart_int* dart_core__scan(dart_String* uri, dart_int* start, dart_int* end, dart_int* state, dart_List* indices);
 
dart_int* dart_core__startsWithData(dart_String* text, dart_int* start);
 
dart_int* dart_core__stringOrNullLength(dart_String* s);
 
typedef struct {
  dart_int* CONTINUE;
  dart_int* SWITCHING_PROTOCOLS;
  dart_int* OK;
  dart_int* CREATED;
  dart_int* ACCEPTED;
  dart_int* NON_AUTHORITATIVE_INFORMATION;
  dart_int* NO_CONTENT;
  dart_int* RESET_CONTENT;
  dart_int* PARTIAL_CONTENT;
  dart_int* MULTIPLE_CHOICES;
  dart_int* MOVED_PERMANENTLY;
  dart_int* FOUND;
  dart_int* MOVED_TEMPORARILY;
  dart_int* SEE_OTHER;
  dart_int* NOT_MODIFIED;
  dart_int* USE_PROXY;
  dart_int* TEMPORARY_REDIRECT;
  dart_int* BAD_REQUEST;
  dart_int* UNAUTHORIZED;
  dart_int* PAYMENT_REQUIRED;
  dart_int* FORBIDDEN;
  dart_int* NOT_FOUND;
  dart_int* METHOD_NOT_ALLOWED;
  dart_int* NOT_ACCEPTABLE;
  dart_int* PROXY_AUTHENTICATION_REQUIRED;
  dart_int* REQUEST_TIMEOUT;
  dart_int* CONFLICT;
  dart_int* GONE;
  dart_int* LENGTH_REQUIRED;
  dart_int* PRECONDITION_FAILED;
  dart_int* REQUEST_ENTITY_TOO_LARGE;
  dart_int* REQUEST_URI_TOO_LONG;
  dart_int* UNSUPPORTED_MEDIA_TYPE;
  dart_int* REQUESTED_RANGE_NOT_SATISFIABLE;
  dart_int* EXPECTATION_FAILED;
  dart_int* UPGRADE_REQUIRED;
  dart_int* INTERNAL_SERVER_ERROR;
  dart_int* NOT_IMPLEMENTED;
  dart_int* BAD_GATEWAY;
  dart_int* SERVICE_UNAVAILABLE;
  dart_int* GATEWAY_TIMEOUT;
  dart_int* HTTP_VERSION_NOT_SUPPORTED;
  dart_int* NETWORK_CONNECT_TIMEOUT_ERROR;
} dart_HttpStatus;
 
typedef struct {
  dart_String* serverHeader;
  dart_bool* autoCompress;
  dart_Duration* idleTimeout;
} dart_HttpServer;
 
typedef struct {
  dart_int* total;
  dart_int* active;
  dart_int* idle;
  dart_int* closing;
} dart_HttpConnectionsInfo;
 
typedef struct {
  dart_String* ACCEPT;
  dart_String* ACCEPT_CHARSET;
  dart_String* ACCEPT_ENCODING;
  dart_String* ACCEPT_LANGUAGE;
  dart_String* ACCEPT_RANGES;
  dart_String* AGE;
  dart_String* ALLOW;
  dart_String* AUTHORIZATION;
  dart_String* CACHE_CONTROL;
  dart_String* CONNECTION;
  dart_String* CONTENT_ENCODING;
  dart_String* CONTENT_LANGUAGE;
  dart_String* CONTENT_LENGTH;
  dart_String* CONTENT_LOCATION;
  dart_String* CONTENT_MD5;
  dart_String* CONTENT_RANGE;
  dart_String* CONTENT_TYPE;
  dart_String* DATE;
  dart_String* ETAG;
  dart_String* EXPECT;
  dart_String* EXPIRES;
  dart_String* FROM;
  dart_String* HOST;
  dart_String* IF_MATCH;
  dart_String* IF_MODIFIED_SINCE;
  dart_String* IF_NONE_MATCH;
  dart_String* IF_RANGE;
  dart_String* IF_UNMODIFIED_SINCE;
  dart_String* LAST_MODIFIED;
  dart_String* LOCATION;
  dart_String* MAX_FORWARDS;
  dart_String* PRAGMA;
  dart_String* PROXY_AUTHENTICATE;
  dart_String* PROXY_AUTHORIZATION;
  dart_String* RANGE;
  dart_String* REFERER;
  dart_String* RETRY_AFTER;
  dart_String* SERVER;
  dart_String* TE;
  dart_String* TRAILER;
  dart_String* TRANSFER_ENCODING;
  dart_String* UPGRADE;
  dart_String* USER_AGENT;
  dart_String* VARY;
  dart_String* VIA;
  dart_String* WARNING;
  dart_String* WWW_AUTHENTICATE;
  dart_String* COOKIE;
  dart_String* SET_COOKIE;
  dart_List* GENERAL_HEADERS;
  dart_List* ENTITY_HEADERS;
  dart_List* RESPONSE_HEADERS;
  dart_List* REQUEST_HEADERS;
  dart_DateTime* date;
  dart_DateTime* expires;
  dart_DateTime* ifModifiedSince;
  dart_String* host;
  dart_int* port;
  dart_ContentType* contentType;
  dart_int* contentLength;
  dart_bool* persistentConnection;
  dart_bool* chunkedTransferEncoding;
} dart_HttpHeaders;
 
typedef struct {
} dart_HeaderValue;
 
typedef struct {
} dart_HttpSession;
 
typedef struct {
  dart_ContentType* TEXT;
  dart_ContentType* HTML;
  dart_ContentType* JSON;
  dart_ContentType* BINARY;
} dart_ContentType;
 
typedef struct {
  dart_String* name;
  dart_String* value;
  dart_DateTime* expires;
  dart_int* maxAge;
  dart_String* domain;
  dart_String* path;
  dart_bool* secure;
  dart_bool* httpOnly;
} dart_Cookie;
 
typedef struct {
} dart_HttpRequest;
 
typedef struct {
  dart_int* contentLength;
  dart_int* statusCode;
  dart_String* reasonPhrase;
  dart_bool* persistentConnection;
  dart_Duration* deadline;
  dart_bool* bufferOutput;
} dart_HttpResponse;
 
typedef struct {
  dart_int* DEFAULT_HTTP_PORT;
  dart_int* DEFAULT_HTTPS_PORT;
  dart_Duration* idleTimeout;
  dart_int* maxConnectionsPerHost;
  dart_bool* autoUncompress;
  dart_String* userAgent;
} dart_HttpClient;
 
typedef struct {
  dart_bool* persistentConnection;
  dart_bool* followRedirects;
  dart_int* maxRedirects;
  dart_int* contentLength;
  dart_bool* bufferOutput;
} dart_HttpClientRequest;
 
typedef struct {
} dart_HttpClientResponse;
 
typedef struct {
} dart_HttpClientCredentials;
 
typedef struct {
} dart_HttpClientBasicCredentials;
 
typedef struct {
} dart_HttpClientDigestCredentials;
 
typedef struct {
} dart_HttpConnectionInfo;
 
typedef struct {
} dart_RedirectInfo;
 
typedef struct {
} dart_DetachedSocket;
 
typedef struct {
  dart_String* message;
  dart_Uri* uri;
} dart_HttpException;
 
typedef struct {
  dart_String* message;
  dart_List* redirects;
} dart_RedirectException;
 
typedef struct {
  dart_int* PAD;
  dart_int* CR;
  dart_int* LF;
  dart_int* LINE_LENGTH;
  dart_String* _encodeTable;
  dart_String* _encodeTableUrlSafe;
  dart_List* _decodeTable;
  dart_Random* _rng;
} dart__CryptoUtils;
 
typedef struct {
  dart_int* _chunkSizeInWords;
  dart_int* _digestSizeInWords;
  dart_bool* _bigEndianWords;
  dart_int* _lengthInBytes;
  dart_List* _pendingData;
  dart_List* _currentChunk;
  dart_List* _h;
  dart_bool* _digestCalled;
} dart__HashBase;
 
typedef struct {
  dart_List* _k;
  dart_List* _r;
} dart__MD5;
 
typedef struct {
  dart_List* _w;
} dart__SHA1;
 
typedef struct {
} dart_HttpDate;
 
typedef struct {
  dart_Map* _headers;
  dart_String* protocolVersion;
  dart_bool* _mutable;
  dart_List* _noFoldingHeaders;
  dart_int* _contentLength;
  dart_bool* _persistentConnection;
  dart_bool* _chunkedTransferEncoding;
  dart_String* _host;
  dart_int* _port;
  dart_int* _defaultPortForScheme;
} dart__HttpHeaders;
 
typedef struct {
  dart_String* _value;
  dart_Map* _parameters;
  dart_Map* _unmodifiableParameters;
} dart__HeaderValue;
 
typedef struct {
  dart_String* _primaryType;
  dart_String* _subType;
} dart__ContentType;
 
typedef struct {
  dart_String* name;
  dart_String* value;
  dart_DateTime* expires;
  dart_int* maxAge;
  dart_String* domain;
  dart_String* path;
  dart_bool* httpOnly;
  dart_bool* secure;
} dart__Cookie;
 
typedef struct {
  dart_int* __serviceId;
} dart__ServiceObject;
 
typedef struct {
  dart_int* _INIT_SIZE;
  dart_Uint8List* _emptyList;
  dart_int* _length;
  dart_Uint8List* _buffer;
} dart__CopyingBytesBuilder;
 
typedef struct {
  dart_int* _transferLength;
  dart_Completer* _dataCompleter;
  dart_Stream* _stream;
  dart_bool* fullBodyRead;
  dart__HttpHeaders* headers;
  dart_bool* upgraded;
  dart_int* statusCode;
  dart_String* reasonPhrase;
  dart_String* method;
  dart_Uri* uri;
  dart_bool* hasSubscriber;
} dart__HttpIncoming;
 
typedef struct {
  dart__HttpIncoming* _incoming;
  dart_List* _cookies;
} dart__HttpInboundMessage;
 
typedef struct {
  dart_HttpResponse* response;
  dart__HttpServer* _httpServer;
  dart__HttpConnection* _httpConnection;
  dart__HttpSession* _session;
  dart_Uri* _requestedUri;
} dart__HttpRequest;
 
typedef struct {
  dart__HttpClient* _httpClient;
  dart__HttpClientRequest* _httpRequest;
} dart__HttpClientResponse;
 
typedef struct {
  dart_StreamConsumer* _target;
  dart_Completer* _doneCompleter;
  dart_StreamController* _controllerInstance;
  dart_Completer* _controllerCompleter;
  dart_bool* _isClosed;
  dart_bool* _isBound;
  dart_bool* _hasError;
} dart__StreamSinkImpl;
 
typedef struct {
  dart_Encoding* _encoding;
  dart_bool* _encodingMutable;
} dart__IOSinkImpl;
 
typedef struct {
  dart_bool* _encodingSet;
  dart_bool* _bufferOutput;
  dart_Uri* _uri;
  dart__HttpOutgoing* _outgoing;
  dart__HttpHeaders* headers;
} dart__HttpOutboundMessage;
 
typedef struct {
  dart_int* _statusCode;
  dart_String* _reasonPhrase;
  dart_List* _cookies;
  dart__HttpRequest* _httpRequest;
  dart_Duration* _deadline;
  dart_Timer* _deadlineTimer;
} dart__HttpResponse;
 
typedef struct {
  dart_String* method;
  dart_Uri* uri;
  dart_List* cookies;
  dart__HttpClient* _httpClient;
  dart__HttpClientConnection* _httpClientConnection;
  dart_Completer* _responseCompleter;
  dart__Proxy* _proxy;
  dart_Future* _response;
  dart_bool* _followRedirects;
  dart_int* _maxRedirects;
  dart_List* _responseRedirects;
} dart__HttpClientRequest;
 
typedef struct {
  void* _consume;
} dart__HttpGZipSink;
 
typedef struct {
  dart_List* _footerAndChunk0Length;
  dart_List* _chunk0Length;
  dart_Completer* _doneCompleter;
  dart_Socket* socket;
  dart_bool* ignoreBody;
  dart_bool* headersWritten;
  dart_Uint8List* _buffer;
  dart_int* _length;
  dart_Future* _closeFuture;
  dart_bool* chunked;
  dart_int* _pendingChunkedFooter;
  dart_int* contentLength;
  dart_int* _bytesWritten;
  dart_bool* _gzip;
  dart_ByteConversionSink* _gzipSink;
  void* _gzipAdd;
  dart_Uint8List* _gzipBuffer;
  dart_int* _gzipBufferLength;
  dart_bool* _socketError;
  dart__HttpOutboundMessage* outbound;
} dart__HttpOutgoing;
 
typedef struct {
  dart_String* key;
  dart_Socket* _socket;
  dart_bool* _proxyTunnel;
  dart_SecurityContext* _context;
  dart__HttpParser* _httpParser;
  dart_StreamSubscription* _subscription;
  dart__HttpClient* _httpClient;
  dart_bool* _dispose;
  dart_Timer* _idleTimer;
  dart_bool* closed;
  dart_Uri* _currentUri;
  dart_Completer* _nextResponseCompleter;
  dart_Future* _streamFuture;
} dart__HttpClientConnection;
 
typedef struct {
  dart__HttpClientConnection* connection;
  dart__Proxy* proxy;
} dart__ConnectionInfo;
 
typedef struct {
  dart_String* key;
  dart_String* host;
  dart_int* port;
  dart_bool* isSecure;
  dart_SecurityContext* context;
  dart_Set* _idle;
  dart_Set* _active;
  dart_Queue* _pending;
  dart_int* _connecting;
} dart__ConnectionTarget;
 
typedef struct {
  dart_bool* _closing;
  dart_bool* _closingForcefully;
  dart_Map* _connectionTargets;
  dart_List* _credentials;
  dart_List* _proxyCredentials;
  dart_SecurityContext* _context;
  dart_Function* _authenticate;
  dart_Function* _authenticateProxy;
  dart_Function* _findProxy;
  dart_Duration* _idleTimeout;
  void* _badCertificateCallback;
  dart_int* maxConnectionsPerHost;
  dart_bool* autoUncompress;
  dart_String* userAgent;
  dart_Map* _platformEnvironmentCache;
} dart__HttpClient;
 
typedef struct {
} dart___HttpConnection_LinkedListEntry__ServiceObject;
 
typedef struct {
  dart_int* _ACTIVE;
  dart_int* _IDLE;
  dart_int* _CLOSING;
  dart_int* _DETACHED;
  dart_Map* _connections;
  void* _socket;
  dart__HttpServer* _httpServer;
  dart__HttpParser* _httpParser;
  dart_int* _state;
  dart_StreamSubscription* _subscription;
  dart_bool* _idleMark;
  dart_Future* _streamFuture;
} dart__HttpConnection;
 
typedef struct {
} dart___HttpServer_Stream__ServiceObject;
 
typedef struct {
  dart_Map* _servers;
  dart_String* serverHeader;
  dart_HttpHeaders* defaultResponseHeaders;
  dart_bool* autoCompress;
  dart_Duration* _idleTimeout;
  dart_Timer* _idleTimer;
  dart__HttpSessionManager* _sessionManagerInstance;
  dart_bool* closed;
  void* _serverSocket;
  dart_bool* _closeServer;
  dart_LinkedList* _activeConnections;
  dart_LinkedList* _idleConnections;
  dart_StreamController* _controller;
} dart__HttpServer;
 
typedef struct {
  dart_String* PROXY_PREFIX;
  dart_String* DIRECT_PREFIX;
  dart_List* proxies;
} dart__ProxyConfiguration;
 
typedef struct {
  dart_String* host;
  dart_int* port;
  dart_String* username;
  dart_String* password;
  dart_bool* isDirect;
} dart__Proxy;
 
typedef struct {
  dart_InternetAddress* remoteAddress;
  dart_int* remotePort;
  dart_int* localPort;
} dart__HttpConnectionInfo;
 
typedef struct {
  dart_Stream* _incoming;
  dart_Socket* _socket;
} dart__DetachedSocket;
 
typedef struct {
  dart_int* _scheme;
  dart__AuthenticationScheme* UNKNOWN;
  dart__AuthenticationScheme* BASIC;
  dart__AuthenticationScheme* DIGEST;
} dart__AuthenticationScheme;
 
typedef struct {
  dart__HttpClientCredentials* credentials;
  dart_String* realm;
  dart_bool* used;
  dart_String* ha1;
  dart_String* nonce;
  dart_String* algorithm;
  dart_String* qop;
  dart_int* nonceCount;
} dart__Credentials;
 
typedef struct {
  dart_Uri* uri;
} dart__SiteCredentials;
 
typedef struct {
  dart_String* host;
  dart_int* port;
} dart__ProxyCredentials;
 
typedef struct {
} dart__HttpClientCredentials;
 
typedef struct {
  dart_String* username;
  dart_String* password;
} dart__HttpClientBasicCredentials;
 
typedef struct {
  dart_String* username;
  dart_String* password;
} dart__HttpClientDigestCredentials;
 
typedef struct {
  dart_int* statusCode;
  dart_String* method;
  dart_Uri* location;
} dart__RedirectInfo;
 
typedef struct {
  dart_List* HTTP;
  dart_List* HTTP1DOT;
  dart_List* HTTP10;
  dart_List* HTTP11;
  dart_bool* T;
  dart_bool* F;
  dart_List* SEPARATOR_MAP;
} dart__Const;
 
typedef struct {
  dart_int* HT;
  dart_int* LF;
  dart_int* CR;
  dart_int* SP;
  dart_int* AMPERSAND;
  dart_int* COMMA;
  dart_int* DASH;
  dart_int* SLASH;
  dart_int* ZERO;
  dart_int* ONE;
  dart_int* COLON;
  dart_int* SEMI_COLON;
  dart_int* EQUAL;
} dart__CharCode;
 
typedef struct {
  dart_int* START;
  dart_int* METHOD_OR_RESPONSE_HTTP_VERSION;
  dart_int* RESPONSE_HTTP_VERSION;
  dart_int* REQUEST_LINE_METHOD;
  dart_int* REQUEST_LINE_URI;
  dart_int* REQUEST_LINE_HTTP_VERSION;
  dart_int* REQUEST_LINE_ENDING;
  dart_int* RESPONSE_LINE_STATUS_CODE;
  dart_int* RESPONSE_LINE_REASON_PHRASE;
  dart_int* RESPONSE_LINE_ENDING;
  dart_int* HEADER_START;
  dart_int* HEADER_FIELD;
  dart_int* HEADER_VALUE_START;
  dart_int* HEADER_VALUE;
  dart_int* HEADER_VALUE_FOLDING_OR_ENDING;
  dart_int* HEADER_VALUE_FOLD_OR_END;
  dart_int* HEADER_ENDING;
  dart_int* CHUNK_SIZE_STARTING_CR;
  dart_int* CHUNK_SIZE_STARTING_LF;
  dart_int* CHUNK_SIZE;
  dart_int* CHUNK_SIZE_EXTENSION;
  dart_int* CHUNK_SIZE_ENDING;
  dart_int* CHUNKED_BODY_DONE_CR;
  dart_int* CHUNKED_BODY_DONE_LF;
  dart_int* BODY;
  dart_int* CLOSED;
  dart_int* UPGRADED;
  dart_int* FAILURE;
  dart_int* FIRST_BODY_STATE;
} dart__State;
 
typedef struct {
  dart_int* UNDETERMINED;
  dart_int* HTTP10;
  dart_int* HTTP11;
} dart__HttpVersion;
 
typedef struct {
  dart_int* UNDETERMINED;
  dart_int* REQUEST;
  dart_int* RESPONSE;
} dart__MessageType;
 
typedef struct {
  dart_StreamSubscription* _subscription;
  dart_List* _injectData;
  dart_bool* _isCanceled;
  dart_int* _pauseCount;
  dart_Function* _userOnData;
  dart_bool* _scheduled;
} dart__HttpDetachedStreamSubscription;
 
typedef struct {
  dart_StreamSubscription* subscription;
  dart_List* bufferedData;
} dart__HttpDetachedIncoming;
 
typedef struct {
  dart_bool* _parserCalled;
  dart_Uint8List* _buffer;
  dart_int* _index;
  dart_bool* _requestParser;
  dart_int* _state;
  dart_int* _httpVersionIndex;
  dart_int* _messageType;
  dart_int* _statusCode;
  dart_int* _statusCodeLength;
  dart_List* _method;
  dart_List* _uri_or_reason_phrase;
  dart_List* _headerField;
  dart_List* _headerValue;
  dart_int* _httpVersion;
  dart_int* _transferLength;
  dart_bool* _persistentConnection;
  dart_bool* _connectionUpgrade;
  dart_bool* _chunked;
  dart_bool* _noMessageBody;
  dart_int* _remainingContent;
  dart__HttpHeaders* _headers;
  dart__HttpIncoming* _incoming;
  dart_StreamSubscription* _socketSubscription;
  dart_bool* _paused;
  dart_bool* _bodyPaused;
  dart_StreamController* _controller;
  dart_StreamController* _bodyController;
} dart__HttpParser;
 
typedef struct {
  dart_bool* _destroyed;
  dart_bool* _isNew;
  dart_DateTime* _lastSeen;
  dart_Function* _timeoutCallback;
  dart__HttpSessionManager* _sessionManager;
  dart__HttpSession* _prev;
  dart__HttpSession* _next;
  dart_String* id;
  dart_Map* _data;
} dart__HttpSession;
 
typedef struct {
  dart_Map* _sessions;
  dart_int* _sessionTimeout;
  dart__HttpSession* _head;
  dart__HttpSession* _tail;
  dart_Timer* _timer;
} dart__HttpSessionManager;
 
typedef struct {
  dart_HttpOverrides* _global;
} dart_HttpOverrides;
 
typedef struct {
  dart_HttpOverrides* _previous;
  void* _createHttpClient;
  void* _findProxyFromEnvironment;
} dart__HttpOverridesScope;
 
typedef struct {
  dart_int* NORMAL_CLOSURE;
  dart_int* GOING_AWAY;
  dart_int* PROTOCOL_ERROR;
  dart_int* UNSUPPORTED_DATA;
  dart_int* RESERVED_1004;
  dart_int* NO_STATUS_RECEIVED;
  dart_int* ABNORMAL_CLOSURE;
  dart_int* INVALID_FRAME_PAYLOAD_DATA;
  dart_int* POLICY_VIOLATION;
  dart_int* MESSAGE_TOO_BIG;
  dart_int* MISSING_MANDATORY_EXTENSION;
  dart_int* INTERNAL_SERVER_ERROR;
  dart_int* RESERVED_1015;
} dart_WebSocketStatus;
 
typedef struct {
  dart_CompressionOptions* DEFAULT;
  dart_CompressionOptions* OFF;
  dart_bool* clientNoContextTakeover;
  dart_bool* serverNoContextTakeover;
  dart_int* clientMaxWindowBits;
  dart_int* serverMaxWindowBits;
  dart_bool* enabled;
} dart_CompressionOptions;
 
typedef struct {
} dart_WebSocketTransformer;
 
typedef struct {
  dart_int* CONNECTING;
  dart_int* OPEN;
  dart_int* CLOSING;
  dart_int* CLOSED;
  dart_Duration* pingInterval;
} dart_WebSocket;
 
typedef struct {
  dart_String* message;
} dart_WebSocketException;
 
typedef struct {
  dart_int* NONE;
  dart_int* TEXT;
  dart_int* BINARY;
} dart__WebSocketMessageType;
 
typedef struct {
  dart_int* CONTINUATION;
  dart_int* TEXT;
  dart_int* BINARY;
  dart_int* RESERVED_3;
  dart_int* RESERVED_4;
  dart_int* RESERVED_5;
  dart_int* RESERVED_6;
  dart_int* RESERVED_7;
  dart_int* CLOSE;
  dart_int* PING;
  dart_int* PONG;
  dart_int* RESERVED_B;
  dart_int* RESERVED_C;
  dart_int* RESERVED_D;
  dart_int* RESERVED_E;
  dart_int* RESERVED_F;
} dart__WebSocketOpcode;
 
typedef struct {
  dart_List* bytes;
} dart__EncodedString;
 
typedef struct {
  dart_String* headerValue;
  dart_int* maxWindowBits;
} dart__CompressionMaxWindowBits;
 
typedef struct {
  dart_int* START;
  dart_int* LEN_FIRST;
  dart_int* LEN_REST;
  dart_int* MASK;
  dart_int* PAYLOAD;
  dart_int* CLOSED;
  dart_int* FAILURE;
  dart_int* FIN;
  dart_int* RSV1;
  dart_int* RSV2;
  dart_int* RSV3;
  dart_int* OPCODE;
  dart_int* _state;
  dart_bool* _fin;
  dart_bool* _compressed;
  dart_int* _opcode;
  dart_int* _len;
  dart_bool* _masked;
  dart_int* _remainingLenBytes;
  dart_int* _remainingMaskingKeyBytes;
  dart_int* _remainingPayloadBytes;
  dart_int* _unmaskingIndex;
  dart_int* _currentMessageType;
  dart_int* closeCode;
  dart_String* closeReason;
  dart_EventSink* _eventSink;
  dart_bool* _serverSide;
  dart_List* _maskingBytes;
  dart_BytesBuilder* _payload;
  dart__WebSocketPerMessageDeflate* _deflate;
} dart__WebSocketProtocolTransformer;
 
typedef struct {
  dart_List* payload;
} dart__WebSocketPing;
 
typedef struct {
  dart_List* payload;
} dart__WebSocketPong;
 
typedef struct {
  dart_StreamController* _controller;
  void* _protocolSelector;
  dart_CompressionOptions* _compression;
} dart__WebSocketTransformerImpl;
 
typedef struct {
  dart_bool* serverNoContextTakeover;
  dart_bool* clientNoContextTakeover;
  dart_int* clientMaxWindowBits;
  dart_int* serverMaxWindowBits;
  dart_bool* serverSide;
  dart_RawZLibFilter* decoder;
  dart_RawZLibFilter* encoder;
} dart__WebSocketPerMessageDeflate;
 
typedef struct {
  dart__WebSocketImpl* webSocket;
  dart_EventSink* _eventSink;
  dart__WebSocketPerMessageDeflate* _deflateHelper;
} dart__WebSocketOutgoingTransformer;
 
typedef struct {
  dart__WebSocketImpl* webSocket;
  dart_Socket* socket;
  dart_StreamController* _controller;
  dart_StreamSubscription* _subscription;
  dart_bool* _issuedPause;
  dart_bool* _closed;
  dart_Completer* _closeCompleter;
  dart_Completer* _completer;
} dart__WebSocketConsumer;
 
typedef struct {
} dart___WebSocketImpl_Stream__ServiceObject;
 
typedef struct {
  dart_Map* _webSockets;
  dart_int* DEFAULT_WINDOW_BITS;
  dart_String* PER_MESSAGE_DEFLATE;
  dart_String* protocol;
  dart_StreamController* _controller;
  dart_StreamSubscription* _subscription;
  dart_StreamSink* _sink;
  void* _socket;
  dart_bool* _serverSide;
  dart_int* _readyState;
  dart_bool* _writeClosed;
  dart_int* _closeCode;
  dart_String* _closeReason;
  dart_Duration* _pingInterval;
  dart_Timer* _pingTimer;
  dart__WebSocketConsumer* _consumer;
  dart_int* _outCloseCode;
  dart_String* _outCloseReason;
  dart_Timer* _closeTimer;
  dart__WebSocketPerMessageDeflate* _deflate;
  dart_HttpClient* _httpClient;
} dart__WebSocketImpl;
 
dart_String* dart__http__getHttpVersion();
 