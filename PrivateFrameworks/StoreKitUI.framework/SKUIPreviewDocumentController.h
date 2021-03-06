/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext, NSOperationQueue, SUAudioPlayer, IKAppDocument, NSHashTable;

@interface SKUIPreviewDocumentController : NSObject <IKAppDocumentDelegate> {
    SUAudioPlayer *_audioPlayer;
    SKUIClientContext *_clientContext;
    IKAppDocument *_document;
    NSOperationQueue *_operationQueue;
    NSHashTable *_viewControllers;
}

@property(retain) SKUIClientContext * clientContext;
@property(getter=isPreviewActive,readonly) bool previewActive;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (id)newPreviewOverlayViewControllerWithBackgroundStyle:(long long)arg1;
- (bool)isPreviewActive;
- (void)_reloadViewControllersWithPreviewStatus:(id)arg1 animated:(bool)arg2;
- (void)_connectToAudioPlayer;
- (void)_playerSessionsDidChangeNotification:(id)arg1;
- (id)_operationQueue;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDocument:(id)arg1;

@end
