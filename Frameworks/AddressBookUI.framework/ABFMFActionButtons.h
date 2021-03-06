/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, NSString, ABUnknownPersonViewController;

@interface ABFMFActionButtons : NSObject <ABFMFActionButtonsDelegate> {
    ABUnknownPersonViewController *_upvc;
    UIButton *_messageButton;
    UIButton *_facetimeButton;
    UIButton *_callButton;
}

@property void* displayedPerson;
@property(readonly) bool hasTelephonyCapability;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithMessageButton:(id)arg1 facetimeButton:(id)arg2 callButton:(id)arg3;
- (void)showFMFCallButton:(bool)arg1 withAction:(id)arg2;
- (void)showFMFFacetimeButton:(bool)arg1 withAction:(id)arg2;
- (void)showFMFMessageButton:(bool)arg1 withAction:(id)arg2;
- (void*)displayedPerson;
- (void)setDisplayedPerson:(void*)arg1;
- (bool)hasTelephonyCapability;
- (id)init;
- (void)dealloc;

@end
