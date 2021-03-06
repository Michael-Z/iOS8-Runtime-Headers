/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSNumber;

@interface SADistance : AceObject <SAAceSerializable> {
}

@property(copy) NSString * unit;
@property(copy) NSString * units;
@property(retain) NSNumber * value;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)distanceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)distance;

- (void)setUnit:(id)arg1;
- (id)unit;
- (id)encodedClassName;
- (id)value;
- (void)setValue:(id)arg1;
- (id)units;
- (void)setUnits:(id)arg1;
- (id)groupIdentifier;

@end
