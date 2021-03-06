//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPFieldActionDeleteListRange, CKDPFieldActionInsertIntoList, CKDPFieldActionReplaceListRange;

__attribute__((visibility("hidden")))
@interface CKDPFieldAction : PBCodable <NSCopying>
{
    CKDPFieldActionDeleteListRange *_deleteListRange;
    CKDPFieldActionInsertIntoList *_insertIntoList;
    CKDPFieldActionReplaceListRange *_replaceListRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKDPFieldActionReplaceListRange *replaceListRange; // @synthesize replaceListRange=_replaceListRange;
@property(retain, nonatomic) CKDPFieldActionDeleteListRange *deleteListRange; // @synthesize deleteListRange=_deleteListRange;
@property(retain, nonatomic) CKDPFieldActionInsertIntoList *insertIntoList; // @synthesize insertIntoList=_insertIntoList;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasReplaceListRange;
@property(readonly, nonatomic) BOOL hasDeleteListRange;
@property(readonly, nonatomic) BOOL hasInsertIntoList;

@end

