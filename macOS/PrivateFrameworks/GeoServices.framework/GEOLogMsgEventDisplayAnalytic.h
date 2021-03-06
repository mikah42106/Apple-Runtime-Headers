//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventDisplayAnalytic : PBCodable <NSCopying>
{
    double _meanImageSpacing;
    int _displayActionTrigger;
    int _displayEvent;
    unsigned int _movementDistance;
    unsigned int _renderedImageCount;
    unsigned int _requestedImageCount;
    unsigned int _requiredResourcesAvailable;
    unsigned int _totalTime;
    struct {
        unsigned int has_meanImageSpacing:1;
        unsigned int has_displayActionTrigger:1;
        unsigned int has_displayEvent:1;
        unsigned int has_movementDistance:1;
        unsigned int has_renderedImageCount:1;
        unsigned int has_requestedImageCount:1;
        unsigned int has_requiredResourcesAvailable:1;
        unsigned int has_totalTime:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsDisplayEvent:(id)arg1;
- (id)displayEventAsString:(int)arg1;
@property(nonatomic) BOOL hasDisplayEvent;
@property(nonatomic) int displayEvent;
@property(nonatomic) BOOL hasMeanImageSpacing;
@property(nonatomic) double meanImageSpacing;
@property(nonatomic) BOOL hasMovementDistance;
@property(nonatomic) unsigned int movementDistance;
@property(nonatomic) BOOL hasRenderedImageCount;
@property(nonatomic) unsigned int renderedImageCount;
@property(nonatomic) BOOL hasRequestedImageCount;
@property(nonatomic) unsigned int requestedImageCount;
@property(nonatomic) BOOL hasTotalTime;
@property(nonatomic) unsigned int totalTime;
@property(nonatomic) BOOL hasRequiredResourcesAvailable;
@property(nonatomic) unsigned int requiredResourcesAvailable;
- (int)StringAsDisplayActionTrigger:(id)arg1;
- (id)displayActionTriggerAsString:(int)arg1;
@property(nonatomic) BOOL hasDisplayActionTrigger;
@property(nonatomic) int displayActionTrigger;

@end

