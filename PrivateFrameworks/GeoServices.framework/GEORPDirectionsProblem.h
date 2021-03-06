/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData;

@interface GEORPDirectionsProblem : PBCodable <NSCopying> {
    NSData *_directionsResponseId;
    NSData *_overviewScreenshotImageData;
    unsigned int _problematicStepIndex;
    struct { 
        unsigned int problematicStepIndex : 1; 
    } _has;
}

@property(readonly) bool hasDirectionsResponseId;
@property(retain) NSData * directionsResponseId;
@property(readonly) bool hasOverviewScreenshotImageData;
@property(retain) NSData * overviewScreenshotImageData;
@property bool hasProblematicStepIndex;
@property unsigned int problematicStepIndex;


- (unsigned int)problematicStepIndex;
- (id)overviewScreenshotImageData;
- (id)directionsResponseId;
- (bool)hasProblematicStepIndex;
- (void)setHasProblematicStepIndex:(bool)arg1;
- (void)setProblematicStepIndex:(unsigned int)arg1;
- (bool)hasOverviewScreenshotImageData;
- (bool)hasDirectionsResponseId;
- (void)setOverviewScreenshotImageData:(id)arg1;
- (void)setDirectionsResponseId:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
