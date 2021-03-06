/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIProductPageOverlayController, NSString, SKUIChartsComponent, SKUIIPhoneChartsViewController, SKUIIPadChartsViewController;

@interface SKUIChartsPageSection : SKUIStorePageSection <SKUIChartsViewControllerDelegate, SKUIProductPageOverlayDelegate> {
    SKUIIPadChartsViewController *_ipadViewController;
    SKUIIPhoneChartsViewController *_iphoneViewController;
    SKUIProductPageOverlayController *_overlayController;
    long long _selectedChartIndex;
    long long _selectedItemIndex;
}

@property(readonly) SKUIChartsComponent * pageComponent;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)cellForIndexPath:(id)arg1;
- (void)chartsViewController:(id)arg1 willDisplayItem:(id)arg2 atIndex:(long long)arg3 chartIndex:(long long)arg4;
- (void)chartsViewController:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3 chartIndex:(long long)arg4;
- (id)chartsViewController:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndex:(long long)arg3 chartIndex:(long long)arg4;
- (void)_recordClickEvent:(id)arg1 withItem:(id)arg2 itemIndex:(long long)arg3 chartIndex:(long long)arg4;
- (id)_chartsViewController;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (bool)fitsToHeight;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
