/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/DAAPKit.framework/DAAPKit
 */

@class <DKDAAPParserDelegate>, NSInputStream, NSObject<OS_dispatch_queue>, NSMutableArray, NSMutableData;

@interface DKDAAPParser : NSObject <NSStreamDelegate> {
    NSObject<OS_dispatch_queue> *_inputStreamAccessQueue;
    NSMutableArray *_containerStack;
    NSMutableData *_inputBuffer;
    bool_parsing;
    bool_finished;
    bool_canceled;
    <DKDAAPParserDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSInputStream *_inputStream;
}

@property <DKDAAPParserDelegate> * delegate;
@property(retain) NSObject<OS_dispatch_queue> * delegateQueue;
@property(readonly) NSInputStream * inputStream;
@property(getter=isParsing,readonly) bool parsing;
@property(getter=isFinished,readonly) bool finished;
@property(getter=isCanceled,readonly) bool canceled;


- (bool)isParsing;
- (void)_callDelegateDidParseDataCode:(unsigned int)arg1 bytes:(char *)arg2 contentLength:(unsigned int)arg3;
- (void)_advanceDataBuffer:(id)arg1 byLength:(unsigned int)arg2;
- (void)_callDelegateDidStartContainerCode:(unsigned int)arg1 contentLength:(unsigned int)arg2;
- (bool)_callDelegateShouldParseCodeAsContainer:(unsigned int)arg1;
- (bool)_callDelegateShouldParseCode:(unsigned int)arg1;
- (void)_callDelegateDidEndContainerCode:(unsigned int)arg1;
- (void)_callDelegateDidStart;
- (void)_callDelegateDidFailWithError:(id)arg1;
- (id)inputStream;
- (void)_callDelegateDidFinish;
- (void)_attemptParse:(id)arg1;
- (void)_callDelegateDidCancel;
- (bool)isCanceled;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)start;
- (id)delegate;
- (void)setDelegateQueue:(id)arg1;
- (id)delegateQueue;
- (void)cancel;
- (void).cxx_destruct;
- (bool)isFinished;
- (id)initWithStream:(id)arg1;

@end