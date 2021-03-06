/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView<_UISwitchInternalViewProtocol>, UIColor, NSString, UIImage, UIPanGestureRecognizer, UILongPressGestureRecognizer;

@interface UISwitch : UIControl <UIGestureRecognizerDelegate, NSCoding> {
    UILongPressGestureRecognizer *_pressGesture;
    UIPanGestureRecognizer *_panGesture;
    UIView<_UISwitchInternalViewProtocol> *_control;
    bool_onStateChangedByLongPressGestureRecognizer;
    bool_onStateChangedByPanGestureRecognizer;
    bool_on;
    double _enabledAlpha;
}

@property(getter=_onColor,setter=_setOnColor:,retain) UIColor * onColor;
@property(getter=_alwaysShowOnOffLabel,setter=_setAlwaysShowsOnOffLabel:) bool alwaysShowOnOffLabel;
@property(retain) UIColor * onTintColor;
@property(retain) UIColor * tintColor;
@property(retain) UIColor * thumbTintColor;
@property(retain) UIImage * onImage;
@property(retain) UIImage * offImage;
@property(getter=isOn) bool on;
@property double enabledAlpha;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (Class)_internalViewClass;

- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isAccessibilityElementByDefault;
- (unsigned long long)defaultAccessibilityTraits;
- (void)_setKnobBounceMass:(double)arg1;
- (double)_knobBounceMass;
- (void)_setKnobBounceStiffness:(double)arg1;
- (double)_knobBounceStiffness;
- (void)_setKnobBounceDamping:(double)arg1;
- (double)_knobBounceDamping;
- (void)_setKnobBounceDuration:(double)arg1;
- (double)_knobBounceDuration;
- (void)_setPressed:(bool)arg1 on:(bool)arg2 animated:(bool)arg3 completion:(id)arg4;
- (void)setAlternateColors:(bool)arg1;
- (double)enabledAlpha;
- (bool)_alwaysShowOnOffLabel;
- (void)_setAlwaysShowsOnOffLabel:(bool)arg1;
- (id)_onColor;
- (void)_setOnColor:(id)arg1;
- (void)setOn:(bool)arg1 animated:(bool)arg2;
- (bool)isOn;
- (bool)_shouldAlterCodedFrame;
- (void)_commonInitNewLookNeue1;
- (void)_commonInitNewLook;
- (bool)_useOldSize;
- (void)_animateToOn:(bool)arg1 withDuration:(double)arg2 sendAction:(bool)arg3;
- (bool)_handleTranslationInPanGestureRecognizer:(id)arg1;
- (void)_handleLongPressNL:(id)arg1;
- (void)_handleTapNL:(id)arg1;
- (void)_handlePanNL:(id)arg1;
- (void)setEnabledAlpha:(double)arg1;
- (id)_onTintColor;
- (void)setOn:(bool)arg1;
- (void)setOffImage:(id)arg1;
- (id)offImage;
- (void)setOnImage:(id)arg1;
- (id)onImage;
- (void)setOnTintColor:(id)arg1;
- (id)onTintColor;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_setOnTintColor:(id)arg1;
- (id)thumbTintColor;
- (void)setThumbTintColor:(id)arg1;
- (bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_scriptingInfo;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)_encodeFrameWithCoder:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAlpha:(double)arg1;
- (void)_populateArchivedSubviews:(id)arg1;

@end
