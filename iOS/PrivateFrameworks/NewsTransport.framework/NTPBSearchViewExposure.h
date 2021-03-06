//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBSearchViewExposure : PBCodable <NSCopying>
{
    int _areaPresentationReason;
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_creativeId;
    struct {
        unsigned int areaPresentationReason:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
- (int)StringAsAreaPresentationReason:(id)arg1;
- (id)areaPresentationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasAreaPresentationReason;
@property(nonatomic) int areaPresentationReason; // @synthesize areaPresentationReason=_areaPresentationReason;

@end

