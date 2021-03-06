/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUItemOfferButton : UIButton  {
    long long _animationHorizontalAlignment;
    NSString *_buttonStyle;
    NSString *_confirmationTitle;
    bool_isShowingConfirmation;
    NSString *_offerTitle;
    bool_shouldShowConfirmation;
}

@property long long animationHorizontalAlignment;
@property(copy) NSString * confirmationTitle;
@property(copy) NSString * itemOfferButtonStyle;
@property(copy) NSString * offerTitle;
@property bool shouldShowConfirmation;
@property(getter=isShowingConfirmation) bool showingConfirmation;

+ (id)itemOfferButtonStyleForItem:(id)arg1 offer:(id)arg2;
+ (double)defaultAnimationDuration;

- (id)itemOfferButtonStyle;
- (void)_applyConfiguration:(struct { id x1; long long x2; long long x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; id x5; id x6; })arg1;
- (id)offerTitle;
- (id)confirmationTitle;
- (long long)animationHorizontalAlignment;
- (struct { id x1; long long x2; long long x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; id x5; id x6; })_configurationForStyle:(id)arg1;
- (void)_reloadButton;
- (void)setShouldShowConfirmation:(bool)arg1;
- (void)setOfferTitle:(id)arg1;
- (void)setConfirmationTitle:(id)arg1;
- (void)setItemOfferButtonStyle:(id)arg1;
- (bool)shouldShowConfirmation;
- (void)setAnimationHorizontalAlignment:(long long)arg1;
- (bool)configureForItem:(id)arg1 offer:(id)arg2;
- (void)setShowingConfirmation:(bool)arg1 duration:(double)arg2;
- (bool)isShowingConfirmation;
- (void)setShowingConfirmation:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
