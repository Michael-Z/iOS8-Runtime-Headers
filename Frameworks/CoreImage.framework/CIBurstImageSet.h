/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject  {
    CIBurstImageSetInternal *_priv;
}

+ (id)burstImageSet;

- (void)setLoggingListener:(void*)arg1 withUserInfo:(void*)arg2;
- (double)secondsSinceStart;
- (id)statsForImageWithIdentifier:(id)arg1;
- (id)imageClusterForIndex:(unsigned int)arg1;
- (unsigned int)imageClusterCount;
- (id)coverImageIdentifier;
- (id)burstId;
- (id)allImageIdentifiers;
- (id)imageClusterForIdentifier:(id)arg1;
- (id)bestImageIdentifiers;
- (void)addImage:(id)arg1 identifier:(id)arg2 completionBlock:(id)arg3;
- (void)addImageFromCGImage:(struct CGImage { }*)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(id)arg4;
- (id)init;
- (void)dealloc;

@end