/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSDBezierPath;

@interface MFPhoneRegion : MFRegion  {
    OITSDBezierPath *m_path;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } m_bounds;
}


- (id)initWithPath:(id)arg1 :(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithRects:(id)arg1 :(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 :(id)arg3;
- (int)frame:(id)arg1 :(id)arg2;
- (int)fill:(id)arg1 :(id)arg2;
- (int)setClip:(id)arg1 :(int)arg2;
- (int)invert:(id)arg1;
- (void)dealloc;
- (id).cxx_construct;

@end
