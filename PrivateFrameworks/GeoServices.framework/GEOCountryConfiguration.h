/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableDictionary, NSLock, NSMutableArray;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver> {
    NSString *_countryCode;
    NSLock *_countryCodeLock;
    bool_isObservingReachability;
    bool_isUpdating;
    NSMutableArray *_updateCompletionHandlers;
    NSLock *_supportedFeaturesLock;
    NSMutableDictionary *_supportedFeatures;
    double _urlAuthenticationTimeToLive;
    bool_hasURLAuthenticationTimeToLive;
}

@property(copy) NSString * countryCode;
@property(readonly) bool currentCountrySupportsTraffic;
@property(readonly) bool currentCountrySupportsDirections;
@property(readonly) bool currentCountrySupportsNavigation;
@property(readonly) bool currentCountrySupportsRouteGenius;
@property(readonly) bool currentCountrySupportsCarIntegration;
@property(readonly) double urlAuthenticationTimeToLive;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedConfiguration;

- (bool)currentCountrySupportsCarIntegration;
- (id)countryDefaultForKey:(id)arg1;
- (double)urlAuthenticationTimeToLive;
- (bool)currentCountrySupportsRouteGenius;
- (bool)currentCountrySupportsDirections;
- (void)updateProvidersForCurrentCountry;
- (id)countryDefaultForKey:(id)arg1 sourcePtr:(long long*)arg2;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3;
- (id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(long long*)arg3;
- (void)_resetSupportedFeatures;
- (bool)currentCountrySupportsNavigation;
- (bool)currentCountrySupportsTraffic;
- (bool)currentCountrySupportsFeature:(long long)arg1;
- (bool)countryCode:(id)arg1 supportsFeature:(long long)arg2;
- (id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(long long*)arg4;
- (void)_determineCurrentCountryCode:(id)arg1;
- (void)_checkCountryProvidersWithOldCountryCode:(id)arg1 providers:(id)arg2;
- (void)_notifyUpdateCompletionHandlers:(bool)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)updateCountryConfiguration:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (void)setCountryCode:(id)arg1;
- (id)countryCode;
- (id)init;
- (void)dealloc;

@end
