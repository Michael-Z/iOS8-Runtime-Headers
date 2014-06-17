/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSString;

@interface GKImageKey : NSObject  {
    NSString *_filePath;
    NSString *_cacheKey;
    NSString *_imageID;
    NSString *_basename;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
}

@property(retain) NSString * imageID;
@property(retain) NSString * basename;
@property(readonly) NSString * filePath;
@property(readonly) NSString * cacheKey;
@property struct CGSize { double x1; double x2; } size;

+ (id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2;
+ (id)fileNameWithIdentifierInImageSource:(id)arg1;

- (id)basename;
- (id)imageID;
- (void)setImageID:(id)arg1;
- (void)setBasename:(id)arg1;
- (id)filePath;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })size;
- (id)cacheKey;

@end