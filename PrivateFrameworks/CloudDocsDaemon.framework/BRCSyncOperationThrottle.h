/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSString;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {
    double _delay;
    double _nextTry;
    NSString *_containerID;
}

@property(readonly) double delay;
@property(readonly) double nextTry;
@property(retain) NSString * containerID;

+ (bool)supportsSecureCoding;

- (double)nextTry;
- (void)updateForError:(id)arg1;
- (void)updateAfterSchedulingTask;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1;
- (id)initWithContainerID:(id)arg1;
- (id)containerID;
- (void)setContainerID:(id)arg1;
- (void)clear;
- (double)delay;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
