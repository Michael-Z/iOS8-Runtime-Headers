/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage;

@interface _UIImageViewPretiledImageCacheKey : NSObject  {
    UIImage *_originalImage;
    struct CGSize { 
        double width; 
        double height; 
    } _pretiledSize;
}

+ (id)cacheKeyWithOriginalImage:(id)arg1 pretiledSize:(struct CGSize { double x1; double x2; })arg2;

- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
