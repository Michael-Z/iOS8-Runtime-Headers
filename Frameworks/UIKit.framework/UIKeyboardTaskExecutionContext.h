/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIKeyboardTaskQueue, UIKeyboardTaskExecutionContext;

@interface UIKeyboardTaskExecutionContext : NSObject  {
    UIKeyboardTaskExecutionContext *_parentExecutionContext;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _continuation;

    id _info;
    UIKeyboardTaskQueue *_executionQueue;
}

@property(retain) id info;
@property(readonly) UIKeyboardTaskQueue * executionQueue;


- (id)info;
- (id)init;
- (void)dealloc;
- (id)initWithExecutionQueue:(id)arg1;
- (void)setInfo:(id)arg1;
- (id)initWithParentContext:(id)arg1 continuation:(id)arg2;
- (id)executionQueue;
- (void)returnExecutionToParentWithInfo:(id)arg1;
- (void)transferExecutionToMainThreadWithTask:(id)arg1;
- (id)childWithContinuation:(id)arg1;
- (void)returnExecutionToParent;

@end
