/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIView<MPVideoOverlay>, MPSwipableView, MPAVController, UIAlertView, _UIHostedWindow, MPVideoView, MPVideoBackgroundView, UIView, MPClosedCaptionDisplay, NSString, MPAVItem, UIColor, MPTVOutWindow, UIActivityIndicatorView, UIImage;

@interface MPVideoViewController : MPViewController <MPVideoControllerProtocol, MPSwipableViewDelegate, UIModalViewDelegate> {
    MPVideoBackgroundView *_backgroundView;
    MPSwipableView *_backstopView;
    bool_batteryMonitoringWasEnabled;
    MPClosedCaptionDisplay *_captionView;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    unsigned long long _visibleParts;
    unsigned int _tvOutEnabled : 1;
    unsigned int _allowsTVOutInBackground : 1;
    unsigned long long _itemTypeOverride;
    unsigned long long _scaleMode;
    unsigned long long _scaleModeOverride;
    UIAlertView *_alertSheet;
    UIColor *_backstopColor;
    UIActivityIndicatorView *_loadingIndicator;
    MPTVOutWindow *_tvOutWindow;
    unsigned long long _backgroundTaskId;
    int _artworkImageStyle;
    UIImage *_posterImage;
    unsigned int _canAnimateControlsOverlay : 1;
    unsigned int _canShowControlsOverlay : 1;
    unsigned int _disableControlsAutohide : 1;
    unsigned int _playAfterPop : 1;
    unsigned int _scheduledLoadingIndicator : 1;
    unsigned int _displayPlaybackErrorAlerts : 1;
    unsigned int _allowsDetailScrubbing : 1;
    unsigned int _attemptAutoPlayWhenControlsHidden : 1;
    unsigned int _alwaysAllowHidingControlsOverlay : 1;
    unsigned int _hasShownFirstVideoFrame : 1;
    unsigned int _allowsWirelessPlayback : 1;
    unsigned int _disableAutoRotation : 1;
    unsigned int _inlinePlaybackUsesTVOut : 1;
}

@property bool allowsTVOutInBackground;
@property(getter=isTransitioningToFullscreen,readonly) bool transitioningToFullscreen;
@property(getter=isTransitioningFromFullscreen,readonly) bool transitioningFromFullscreen;
@property(readonly) UIView * artworkImageView;
@property(readonly) bool showArtworkInImageView;
@property(readonly) bool showArtworkForTVOut;
@property(readonly) bool canShowQTAudioOnlyUI;
@property(readonly) UIView<MPVideoOverlay> * videoOverlayViewIfLoaded;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property id delegate;
@property(retain) MPAVItem * item;
@property long long orientation;
@property(retain) MPAVController * player;
@property(retain,readonly) UIView * view;
@property bool allowsDetailScrubbing;
@property bool allowsWirelessPlayback;
@property bool alwaysAllowHidingControlsOverlay;
@property int artworkImageStyle;
@property bool attemptAutoPlayWhenControlsHidden;
@property(readonly) UIView * backgroundView;
@property(retain) UIColor * backstopColor;
@property bool canAnimateControlsOverlay;
@property(readonly) bool canChangeScaleMode;
@property bool canShowControlsOverlay;
@property bool controlsOverlayVisible;
@property unsigned long long desiredParts;
@property bool disableAutoRotation;
@property bool disableControlsAutohide;
@property unsigned long long disabledParts;
@property bool displayPlaybackErrorAlerts;
@property(readonly) _UIHostedWindow * hostedWindow;
@property(readonly) unsigned int hostedWindowContextID;
@property bool inlinePlaybackUsesTVOut;
@property unsigned long long itemTypeOverride;
@property(getter=isFullscreen) bool fullscreen;
@property(retain) UIImage * posterImage;
@property unsigned long long scaleMode;
@property bool TVOutEnabled;
@property(readonly) bool viewControllerWillRequestExit;
@property(retain,readonly) UIView<MPVideoOverlay> * videoOverlayView;
@property(retain,readonly) MPVideoView * videoView;
@property unsigned long long visibleParts;
@property bool autoPlayWhenLikelyToKeepUp;

+ (bool)supportsFullscreenDisplay;
+ (long long)_activityIndicatorViewStyle;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateArtworkImageViewFrameInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void)_endBackgroundTask;
- (void)_popForTimeJump:(id)arg1;
- (bool)allowsTVOutInBackground;
- (void)setAllowsTVOutInBackground:(bool)arg1;
- (unsigned long long)visiblePartsForProposedParts:(unsigned long long)arg1;
- (bool)displayPlaybackErrorAlerts;
- (bool)disableAutoRotation;
- (void)setControlsOverlayVisible:(bool)arg1;
- (bool)canAnimateControlsOverlay;
- (void)setBackstopColor:(id)arg1;
- (id)backstopColor;
- (bool)attemptAutoPlayWhenControlsHidden;
- (bool)allowsDetailScrubbing;
- (void)setOwnsStatusBar:(bool)arg1;
- (void)showAlternateTracksController:(id)arg1;
- (unsigned long long)disabledParts;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)_delayedShowLoading;
- (void)displayVideoViewOnScreen;
- (void)displayVideoViewOnTV;
- (void)_delayedPopForTimeJump;
- (void)backgroundViewDidUpdate;
- (bool)canShowQTAudioOnlyUI;
- (void)_updateBackgroundView:(bool)arg1;
- (void)_delayedUpdateBackgroundView;
- (void)_exitPlayerForPlaybackError;
- (void)handleScaleModeChange;
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned long long)arg1;
- (void)tearDownTVOutWindow;
- (void)_videoView_scaleModeChangedNotification:(id)arg1;
- (void)_hideLoadingIndicator;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)setScaleMode:(unsigned long long)arg1 animated:(bool)arg2;
- (unsigned long long)disabledPartsForProposedParts:(unsigned long long)arg1;
- (void)enableAirPlayVideoRoutesIfNecessary;
- (void)_updateProgressControlForItem:(id)arg1;
- (void)_itemDurationDidChange:(id)arg1;
- (void)setScaleMode:(unsigned long long)arg1;
- (bool)canChangeScaleMode;
- (void)_fixupViewHierarchyIfNecessary;
- (bool)_showDestinationPlaceholder;
- (bool)_canEnableAirPlayVideoRoutes;
- (id)newArtworkImageView;
- (bool)showArtworkInImageView;
- (id)artworkImageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateArtworkImageViewFrame;
- (bool)showArtworkForTVOut;
- (unsigned long long)_itemTypeWithActualTypePreference;
- (int)displayArtworkImageStyle;
- (unsigned long long)itemTypeOverride;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateFullScreenArtworkImageViewFrame;
- (id)videoOverlayViewIfLoaded;
- (int)artworkImageStyle;
- (bool)isFullscreenForLayoutPurposes;
- (bool)isTransitioningFromFullscreen;
- (bool)isTransitioningToFullscreen;
- (void)reloadArtworkImageView;
- (id)newAlternateTracksTransition;
- (bool)disableControlsAutohide;
- (void)_updateClosedCaptionDisplay;
- (void)unregisterForPlayerNotifications;
- (void)_videoView_validityChangedNotification:(id)arg1;
- (void)_videoView_timedImageMetadataAvailableNotification:(id)arg1;
- (void)_videoView_sizeChangedNotification:(id)arg1;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)_videoView_playbackErrorNotification:(id)arg1;
- (void)_videoView_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)videoView_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (void)_videoView_availableRoutesDidChangeNotification:(id)arg1;
- (void)registerForPlayerNotifications;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_videoView_batteryStateDidChangeNotification:(id)arg1;
- (void)_videoView_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_videoView_applicationSuspendedNotification:(id)arg1;
- (void)_videoView_resumeEventsOnlyNotification:(id)arg1;
- (void)videoView_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)_videoView_effectiveScaleModeChangedNotification:(id)arg1;
- (void)videoView_itemTypeAvailableNotification:(id)arg1;
- (bool)autoPlayWhenLikelyToKeepUp;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)prepareToDisplayVideo;
- (bool)viewControllerWillRequestExit;
- (void)setControlsNeedLayout;
- (id)posterImage;
- (void)setAllowsDetailScrubbing:(bool)arg1;
- (bool)canHideOverlay:(bool)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setDisableAutoRotation:(bool)arg1;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (void)setOrientation:(long long)arg1 animate:(bool)arg2;
- (void)willChangeToInterfaceOrientation:(long long)arg1;
- (void)toggleScaleMode:(bool)arg1;
- (void)setDisableControlsAutohide:(bool)arg1;
- (void)setCanAnimateControlsOverlay:(bool)arg1;
- (void)setArtworkImageStyle:(int)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setClosedCaptions:(id)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(bool)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (unsigned int)hostedWindowContextID;
- (id)hostedWindow;
- (bool)inlinePlaybackUsesTVOut;
- (void)setInlinePlaybackUsesTVOut:(bool)arg1;
- (void)setTVOutEnabled:(bool)arg1;
- (void)setUseHostedWindowWhenFullscreen:(bool)arg1;
- (void)setDisplayPlaybackErrorAlerts:(bool)arg1;
- (void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2 force:(bool)arg3;
- (void)setAlwaysAllowHidingControlsOverlay:(bool)arg1;
- (bool)alwaysAllowHidingControlsOverlay;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (unsigned long long)desiredParts;
- (unsigned long long)visibleParts;
- (id)videoOverlayView;
- (bool)controlsOverlayVisible;
- (void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2;
- (void)displayVideoView;
- (bool)canShowControlsOverlay;
- (id)videoView;
- (void)setItemTypeOverride:(unsigned long long)arg1;
- (bool)TVOutEnabled;
- (bool)allowsWirelessPlayback;
- (void)setAllowsWirelessPlayback:(bool)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(bool)arg1;
- (void)setCanShowControlsOverlay:(bool)arg1;
- (unsigned long long)scaleMode;
- (void)setScaleModeOverride:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setFullscreen:(bool)arg1 animated:(bool)arg2;
- (void)setFullscreen:(bool)arg1;
- (bool)isFullscreen;
- (void)setPlayer:(id)arg1;
- (void)exitFullscreen;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeChildViewController:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)loadView;
- (id)backgroundView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end
