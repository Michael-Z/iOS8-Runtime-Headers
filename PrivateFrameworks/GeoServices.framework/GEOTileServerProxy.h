/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSLocale, NSObject<OS_dispatch_queue>, <GEOTileServerProxyDelegate>, GEOResourceManifestConfiguration;

@interface GEOTileServerProxy : NSObject  {
    <GEOTileServerProxyDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQ;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
}

@property <GEOTileServerProxyDelegate> * delegate;
@property NSObject<OS_dispatch_queue> * delegateQ;


- (id)delegateQ;
- (bool)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)flushPendingWrites;
- (void)calculateFreeableSize;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(bool)arg2;
- (void)loadTiles:(id)arg1 priorities:(unsigned int*)arg2 options:(unsigned long long)arg3 client:(id)arg4;
- (void)setDelegateQ:(id)arg1;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)cancel:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)close;
- (void)open;
- (id)delegate;
- (void)dealloc;

@end
