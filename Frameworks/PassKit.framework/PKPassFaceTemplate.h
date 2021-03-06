/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKPassFieldTemplate, NSMutableArray;

@interface PKPassFaceTemplate : NSObject  {
    double _barcodeVerticalInset;
    PKPassFieldTemplate *_defaultFieldTemplate;
    NSMutableArray *_bucketTemplates;
    struct CGSize { 
        double width; 
        double height; 
    } _barcodeMaxSize;
}

@property double barcodeBottomInset;
@property struct CGSize { double x1; double x2; } barcodeMaxSize;
@property(retain) PKPassFieldTemplate * defaultFieldTemplate;
@property(retain) NSMutableArray * bucketTemplates;


- (void)setBucketTemplates:(id)arg1;
- (id)bucketTemplates;
- (void)setDefaultFieldTemplate:(id)arg1;
- (id)templateForBucketAtIndex:(unsigned long long)arg1;
- (double)barcodeBottomInset;
- (struct CGSize { double x1; double x2; })barcodeMaxSize;
- (void)addBucketTemplate:(id)arg1;
- (id)defaultFieldTemplate;
- (void)setBarcodeMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBarcodeBottomInset:(double)arg1;
- (void)dealloc;

@end
