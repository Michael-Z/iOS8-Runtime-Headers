/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSString;

@interface IMAVCamera : NSObject  {
    id _internalDevice;
}

@property(readonly) NSString * name;
@property(readonly) NSString * uniqueID;
@property(readonly) int cameraStyle;
@property(readonly) BOOL isWideScreen;
@property(readonly) BOOL hasShutter;
@property(readonly) BOOL isShutterOpen;
@property(readonly) BOOL isSuspended;


- (id)_AVCamera;
- (BOOL)isShutterOpen;
- (BOOL)hasShutter;
- (BOOL)isWideScreen;
- (id)_initWithAVCamera:(id)arg1;
- (int)cameraStyle;
- (BOOL)isSuspended;
- (id)uniqueID;
- (id)init;
- (id)name;
- (void)dealloc;
- (id)description;

@end