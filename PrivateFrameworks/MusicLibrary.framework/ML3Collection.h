/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Collection : ML3Entity  {
}

+ (bool)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(const long long*)arg2 count:(unsigned long long)arg3;
+ (bool)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(const long long*)arg2 count:(unsigned long long)arg3 usingConnection:(id)arg4;
+ (id)artworkCacheIDProperty;
+ (id)propertiesForGroupingKey;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (bool)canonicalizeCollectionRepresentativeItemsWithWriteConnection:(id)arg1;
+ (bool)libraryContentsChangeForProperty:(id)arg1;
+ (id)trackForeignPersistentID;
+ (id)collectionEntityClasses;
+ (void)initialize;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;

- (void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 withArtworkToken:(id)arg3;
- (void)updateTrackValues:(id)arg1;
- (void)updateRepresentativeCollectionValues:(id)arg1 existingRepresentativePersistentID:(unsigned long long)arg2 forUpdateTrackValues:(id)arg3;
- (void)updateCloudStatus;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;

@end
