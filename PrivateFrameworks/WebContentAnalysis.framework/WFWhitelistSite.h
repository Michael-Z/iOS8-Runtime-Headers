/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@class NSString, NSURL;

@interface WFWhitelistSite : NSObject  {
    NSString *urlString;
    NSURL *url;
    NSString *domainName;
    NSString *normalizedURLString;
}

@property(copy) NSString * urlString;
@property(copy) NSURL * url;
@property(readonly) NSString * domainName;


- (bool)hasMetasitePrefix:(id)arg1;
- (void)setUrlString:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (id)urlString;
- (id)domainName;
- (id)url;
- (void)setUrl:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;

@end
