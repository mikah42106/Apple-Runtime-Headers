//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@interface ASCodableDatabaseCompetitionScore : PBCodable <NSCopying>
{
    CDStruct_815f15fd _scores;
}

- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setScores:(long long *)arg1 count:(unsigned int)arg2;
- (long long)scoresAtIndex:(unsigned int)arg1;
- (void)addScores:(long long)arg1;
- (void)clearScores;
@property(readonly, nonatomic) long long *scores;
@property(readonly, nonatomic) unsigned int scoresCount;
- (void)dealloc;

@end

