/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSPackageSignatureGenerator : NSObject  {
    bool_valid;
    void *_generator;
}

@property void* generator;
@property(getter=isValid) bool valid;


- (void)setGenerator:(void*)arg1;
- (id)dataByFinishingSignature;
- (void)updateWithData:(id)arg1;
- (char *)_finishGenerator;
- (void*)generator;
- (void)setValid:(bool)arg1;
- (id)init;
- (bool)isValid;
- (void)dealloc;

@end
