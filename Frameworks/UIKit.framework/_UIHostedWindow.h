/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIHostedWindowHostingHandle;

@interface _UIHostedWindow : UIWindow  {
    long long _hostTintAdjustmentMode;
}

@property(readonly) _UIHostedWindowHostingHandle * hostingHandle;
@property(setter=_setHostTintAdjustmentMode:) long long _hostTintAdjustmentMode;


- (unsigned int)contextID;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(double)arg3;
- (void)_setHostTintAdjustmentMode:(long long)arg1;
- (long long)_hostTintAdjustmentMode;
- (id)hostingHandle;
- (long long)_defaultTintAdjustmentMode;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_updateAppTintView;
- (bool)_canPromoteFromKeyWindowStack;
- (void)_configureContextOptions:(id)arg1;
- (bool)_isClippedByScreenJail;
- (void)_updateTransformLayerForClassicPresentation;
- (bool)_isOffsetByScreenJail;
- (bool)_isScaledByScreenJail;
- (bool)_isRotatedByScreenJail;
- (bool)_usesWindowServerHitTesting;
- (bool)_isConstrainedByScreenJail;
- (bool)_isWindowServerHostingManaged;
- (bool)_needsShakesWhenInactive;

@end
