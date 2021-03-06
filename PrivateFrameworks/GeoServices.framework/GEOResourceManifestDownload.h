/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEODownloadMetadata, GEOResources;

@interface GEOResourceManifestDownload : PBCodable <NSCopying> {
    GEODownloadMetadata *_metadata;
    GEOResources *_resources;
}

@property(readonly) bool hasResources;
@property(retain) GEOResources * resources;
@property(retain) GEODownloadMetadata * metadata;


- (bool)hasResources;
- (id)resources;
- (id)initWithResourceManifestData:(id)arg1;
- (void)setResources:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
