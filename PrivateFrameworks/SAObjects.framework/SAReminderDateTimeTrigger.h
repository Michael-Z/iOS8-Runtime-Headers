/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAReminderDateTimeTriggerOffset, NSString, NSDate;

@interface SAReminderDateTimeTrigger : SAReminderTrigger  {
}

@property(copy) NSDate * date;
@property(retain) SAReminderDateTimeTriggerOffset * offset;
@property(retain) SAReminderDateTimeTriggerOffset * relativeTimeOffset;
@property(copy) NSString * timeZoneId;

+ (id)dateTimeTriggerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dateTimeTrigger;

- (void)setRelativeTimeOffset:(id)arg1;
- (id)relativeTimeOffset;
- (void)setTimeZoneId:(id)arg1;
- (id)timeZoneId;
- (id)encodedClassName;
- (void)setOffset:(id)arg1;
- (id)offset;
- (id)date;
- (id)groupIdentifier;
- (void)setDate:(id)arg1;

@end
