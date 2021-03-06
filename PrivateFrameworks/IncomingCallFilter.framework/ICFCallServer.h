/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IncomingCallFilter.framework/IncomingCallFilter
 */

@class NSObject<OS_xpc_object>, NSMutableArray;

@interface ICFCallServer : NSObject  {
    NSObject<OS_xpc_object> *_connection;
    NSMutableArray *_clients;
    bool_hasRegistered;
}

+ (id)sharedInstance;

- (void)_requestCallGrantForIdentifier:(id)arg1 forService:(id)arg2 waitForResponse:(bool)arg3 completionBlock:(id)arg4;
- (void)_clientConnected;
- (void)shouldAllowIncomingCallForNumber:(id)arg1 forService:(id)arg2 response:(id)arg3;
- (void)_configureWithClient:(id)arg1;
- (void)_cleanupClient:(id)arg1;
- (id)init;
- (void)_cleanup;
- (void)dealloc;

@end
