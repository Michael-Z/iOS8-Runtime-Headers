/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSString, MPAVRoutingController;

@interface MPAudioVideoRoutingTableViewController : UITableViewController <MPAVRoutingControllerDelegate> {
    int _airPlayPasswordAlertDidAppearToken;
    bool_airPlayPasswordAlertDidAppearTokenIsValid;
    int _airPlayPasswordAlertDidCancelToken;
    MPAVRoutingController *_routingController;
    unsigned long long _avItemType;
    bool_displayMirroringRoutes;
    NSArray *_displayedRoutes;
    bool_wirelessDisplayCapableRouteIsPicked;
    bool_wirelessDisplayRouteIsPendingAsPicked;
}

@property(readonly) MPAVRoutingController * routingController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)routesPreferringMirroring;

- (id)initWithType:(unsigned long long)arg1 displayMirroringRoutes:(bool)arg2;
- (id)_effectivePickedRouteReturningActualPickedRouteType:(long long*)arg1;
- (bool)_wirelessDisplayCapableRouteIsPicked;
- (void)_debugButtonAction:(id)arg1;
- (id)_availableRoutes;
- (id)_displayedRoutes;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (id)_pickedRoute;
- (void)_mirroringSwitchValueDidChange:(id)arg1;
- (id)routingController;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidAppear:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
