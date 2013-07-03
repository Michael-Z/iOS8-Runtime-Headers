/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSObject, NSString, NSLock, PFUbiquityLocation, NSPersistentStore;

@interface PFUbiquityImportOperation : NSOperation  {
    NSString *_localPeerID;
    NSString *_storeName;
    NSPersistentStore *_store;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSLock *_delegateLock;
    BOOL _lockedDelegateLock;
    NSObject *_delegate;
}

@property(readonly) NSString * localPeerID;
@property(readonly) NSString * storeName;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) NSPersistentStore * store;
@property NSObject * delegate;


- (id)initWithStoreName:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (void)unlockDelegateLock;
- (void)lockDelegateLock;
- (void)storeWillBeRemoved:(id)arg1;
- (id)retainedDelegate;
- (id)localPeerID;
- (id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)ubiquityRootLocation;
- (id)store;
- (id)storeName;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)delegate;
- (void)cancel;

@end