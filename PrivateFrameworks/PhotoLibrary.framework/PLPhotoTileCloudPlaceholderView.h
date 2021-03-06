/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLPhotoTileCloudPlaceholderViewDelegate>, NSString, PLRoundProgressView, UIView, UIButton;

@interface PLPhotoTileCloudPlaceholderView : UIView <PLTilePlaceholderView> {
    PLRoundProgressView *_loadingIndicatorView;
    UIView *_loadingContainerView;
    UIButton *_loadingErrorButton;
    bool_indicatorIsVisible;
    bool_showingError;
    bool_showingLoading;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _imageRect;
    bool_toolbarVisible;
    double _lastViewPhaseChangeDate;
    <PLPhotoTileCloudPlaceholderViewDelegate> *_delegate;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setRetryDelegate:(id)arg1;
- (void)setToolbarVisible:(bool)arg1;
- (void)showErrorIndicator;
- (void)showLoadingIndicatorWhenReady;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(bool)arg1;
- (void)_retryDownload;
- (void)updateCloudDownloadProgress:(double)arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)showLoadingIndicator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
