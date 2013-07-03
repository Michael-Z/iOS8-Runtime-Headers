/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class BKSSignal, NSString, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>;

@interface BKSBaseXPCClient : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    BKSSignal *_invalidationSignal;
    NSObject<OS_xpc_object> *_serverEndpoint;
    NSString *_serviceName;
}


- (BOOL)_isServerRegistered;
- (void)reconnectIfNecessary;
- (void)queue_registerWithServerIfNecessary;
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;
- (id)_notifyTokenName;
- (void)queue_connectionWasCreated;
- (void)_sendMessage:(id)arg1 withReplyHandler:(id)arg2 waitForReply:(BOOL)arg3 waitDuration:(double)arg4;
- (id)_errorFromMessageIfAny:(id)arg1;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (id)initWithEndpoint:(id)arg1;
- (void)queue_handleMessage:(id)arg1;
- (void)queue_connectionWasInvalidated;
- (void)queue_reregister;
- (void)queue_invalidate;
- (void)invalidate;
- (void)dealloc;
- (void)_setEndpoint:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)_connection;

@end