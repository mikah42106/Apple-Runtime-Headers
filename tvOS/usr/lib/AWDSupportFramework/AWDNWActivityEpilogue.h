//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class AWDNWActivity, AWDNWDeviceReport, AWDNWL2Report;

@interface AWDNWActivityEpilogue : PBCodable <NSCopying>
{
    unsigned long long _durationMsecs;
    unsigned long long _fragmentsQuenched;
    unsigned long long _timestamp;
    AWDNWActivity *_activity;
    int _completionReason;
    AWDNWDeviceReport *_deviceReport;
    AWDNWL2Report *_l2Report;
    struct {
        unsigned int durationMsecs:1;
        unsigned int fragmentsQuenched:1;
        unsigned int timestamp:1;
        unsigned int completionReason:1;
    } _has;
}

@property(retain, nonatomic) AWDNWDeviceReport *deviceReport; // @synthesize deviceReport=_deviceReport;
@property(retain, nonatomic) AWDNWL2Report *l2Report; // @synthesize l2Report=_l2Report;
@property(nonatomic) unsigned long long fragmentsQuenched; // @synthesize fragmentsQuenched=_fragmentsQuenched;
@property(nonatomic) unsigned long long durationMsecs; // @synthesize durationMsecs=_durationMsecs;
@property(retain, nonatomic) AWDNWActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDeviceReport;
@property(readonly, nonatomic) _Bool hasL2Report;
- (int)StringAsCompletionReason:(id)arg1;
- (id)completionReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasCompletionReason;
@property(nonatomic) int completionReason; // @synthesize completionReason=_completionReason;
@property(nonatomic) _Bool hasFragmentsQuenched;
@property(nonatomic) _Bool hasDurationMsecs;
@property(readonly, nonatomic) _Bool hasActivity;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

