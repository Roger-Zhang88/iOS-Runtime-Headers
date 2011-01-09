/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocResponse;



@interface GEOWrapperResponse : PBCodable 
{
    NSInteger _status;
    BOOL _hasStatus;
    GEOLocResponse *_reply;
}

@property(readonly) BOOL hasReply;
@property(retain) GEOLocResponse *reply;
@property(readonly) BOOL hasStatus;
@property NSInteger status;


- (void)writeTo:(id)arg1;
- (id)reply;
- (NSInteger)status;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasStatus;
- (BOOL)hasReply;
- (void)setReply:(id)arg1;
- (void)setStatus:(NSInteger)arg1;

@end