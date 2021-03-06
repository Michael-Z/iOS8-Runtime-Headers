/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class NSSet, PLPhotoLibrary, NSArray, NSString, NSManagedObjectContext;

@interface PHChangeValidationController : NSObject  {
    bool_didPrepare;
    bool_confirmationRequired;
    NSSet *_insertRequests;
    NSSet *_updateRequests;
    NSSet *_deleteRequests;
    NSManagedObjectContext *_managedObjectContext;
    PLPhotoLibrary *_photoLibrary;
    NSArray *_renderedContentURLs;
    NSArray *_assetsToChangeContent;
    NSArray *_assetsToRevert;
    NSArray *_assetsToHide;
    NSArray *_assetsToDelete;
    NSArray *_albumsToDelete;
    NSArray *_foldersToDelete;
    NSString *_clientName;
}

@property(readonly) NSSet * insertRequests;
@property(readonly) NSSet * updateRequests;
@property(readonly) NSSet * deleteRequests;
@property(readonly) NSManagedObjectContext * managedObjectContext;
@property(readonly) PLPhotoLibrary * photoLibrary;
@property(readonly) NSArray * renderedContentURLs;
@property(readonly) NSArray * assetsToChangeContent;
@property(readonly) NSArray * assetsToRevert;
@property(readonly) NSArray * assetsToHide;
@property(readonly) NSArray * assetsToDelete;
@property(readonly) NSArray * albumsToDelete;
@property(readonly) NSArray * foldersToDelete;
@property(copy,readonly) NSString * clientName;
@property(readonly) bool confirmationRequired;


- (bool)validateWithError:(id*)arg1;
- (id)initWithInsertRequests:(id)arg1 updateRequests:(id)arg2 deleteRequests:(id)arg3 context:(id)arg4 photoLibrary:(id)arg5;
- (id)foldersToDelete;
- (id)albumsToDelete;
- (id)assetsToDelete;
- (id)assetsToHide;
- (id)assetsToRevert;
- (id)assetsToChangeContent;
- (id)renderedContentURLs;
- (bool)_prepareWithError:(id*)arg1;
- (id)deleteRequests;
- (id)updateRequests;
- (id)insertRequests;
- (id)photoLibrary;
- (bool)confirmationRequired;
- (id)managedObjectContext;
- (id)clientName;
- (void).cxx_destruct;

@end
