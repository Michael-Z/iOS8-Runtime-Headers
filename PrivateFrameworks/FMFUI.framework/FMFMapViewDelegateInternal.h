/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@class NSString, <FMFMapViewDelegateInternalDelegate>, FMFWildcardGestureRecognizer;

@interface FMFMapViewDelegateInternal : NSObject <MKMapViewDelegate> {
    bool_respondingToUserTouch;
    <FMFMapViewDelegateInternalDelegate> *_delegate;
    FMFWildcardGestureRecognizer *_gr;
}

@property <FMFMapViewDelegateInternalDelegate> * delegate;
@property bool respondingToUserTouch;
@property(retain) FMFWildcardGestureRecognizer * gr;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)gr;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsWithMinApplied:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)regionIsValid:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_moveCenterByOffset:(struct CGPoint { double x1; double x2; })arg1 from:(struct { double x1; double x2; })arg2 mapView:(id)arg3;
- (id)fmfOverlayColor;
- (id)fmfOverlayColorSatellite;
- (bool)respondingToUserTouch;
- (void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2;
- (id)accuracyCircleForLocation:(id)arg1;
- (void)endTouches;
- (void)setRespondingToUserTouch:(bool)arg1;
- (void)setGr:(id)arg1;
- (void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2;
- (void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2;
- (id)initWithDelegate:(id)arg1 mapView:(id)arg2;
- (void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(bool)arg2 disallowAnimation:(bool)arg3;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(bool)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;

@end
