/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSObject<OS_dispatch_source>, NSMutableDictionary, NSArray, <SFAirDropBrowserDelegate>;

@interface SFAirDropBrowser : NSObject  {
    bool_didDelay;
    struct __SFBrowser { } *_browser;
    NSObject<OS_dispatch_source> *_timer;
    double _startTime;
    NSMutableDictionary *_nodes;
    NSArray *_people;
    <SFAirDropBrowserDelegate> *_delegate;
}

@property(readonly) NSArray * people;
@property <SFAirDropBrowserDelegate> * delegate;


- (void)handleBrowserCallBack;
- (void)updateDiscoveredPeople;
- (id)people;
- (void)stop;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;

@end
