/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MCManifest : NSObject  {
    NSString *_path;
    NSMutableDictionary *_manifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (void)_setManifestPath:(id)arg1;
+ (id)installedProfileWithIdentifier:(id)arg1;
+ (id)sharedManifest;

- (void)removeIdentifierFromManifest:(id)arg1;
- (void)addIdentifierToManifest:(id)arg1 flag:(int)arg2;
- (id)allInstalledProfileIdentifiers;
- (void)_setManifest:(id)arg1;
- (id)identifiersOfProfilesWithFilterFlags:(int)arg1;
- (id)_manifest;
- (id)installedProfileWithIdentifier:(id)arg1;
- (void)invalidateCache;
- (id)manifest;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
