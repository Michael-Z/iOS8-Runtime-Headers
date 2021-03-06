/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSString;

@interface NSGlyphInfo : NSObject <NSCopying, NSCoding> {
    NSString *_baseString;
}

+ (id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)glyphName;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (id)_baseString;
- (id)initWithBaseString:(id)arg1;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)classForKeyedArchiver;

@end
