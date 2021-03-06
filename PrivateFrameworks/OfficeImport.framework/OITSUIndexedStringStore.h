/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSMutableArray;

@interface OITSUIndexedStringStore : NSObject  {
    int _lock;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}


- (id)stringForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForString:(id)arg1;
- (id)init;
- (unsigned long long)count;
- (void)dealloc;

@end
