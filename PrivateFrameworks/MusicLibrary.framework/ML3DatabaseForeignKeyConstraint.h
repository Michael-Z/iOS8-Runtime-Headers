/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSArray, ML3DatabaseTable;

@interface ML3DatabaseForeignKeyConstraint : NSObject  {
    ML3DatabaseTable *_foreignTable;
    NSArray *_localColumns;
    NSArray *_foreignColumns;
}

@property(readonly) ML3DatabaseTable * foreignTable;
@property(readonly) NSArray * localColumns;
@property(readonly) NSArray * foreignColumns;


- (id)foreignColumns;
- (id)localColumns;
- (id)foreignTable;
- (id)_foreignKeyClauseSQL;
- (id)initWithForeignTable:(id)arg1 localColumns:(id)arg2 foreignColumns:(id)arg3;
- (void).cxx_destruct;

@end
