/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class DBManager;

@interface CallDBManager : CHLogger  {
    DBManager *fDBManager;
}

+ (bool)bootUp;
+ (id)dataStoreName;
+ (id)_create:(bool)arg1;
+ (id)modelURL;
+ (long long)isBootUpRequired;
+ (id)create;

- (id)createManagedObjectContext;
- (id)initWithDBManager:(id)arg1;
- (void).cxx_destruct;

@end
