//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIFoundation/NSObject-Protocol.h>

@class NSIndexSet, NSSet, NSString;
@protocol _NSCollectionLayoutAuxiliaryOffsets;

@protocol _NSCollectionLayoutSolveResult <NSObject>
@property(readonly, nonatomic) NSSet *invalidatedAuxiliaryKinds;
@property(readonly, nonatomic) NSIndexSet *invalidatedIndexes;
- (id <_NSCollectionLayoutAuxiliaryOffsets>)invalidatedAuxiliaryOffsets;
- (NSIndexSet *)indexesForInvalidatedAuxiliariesOfKind:(NSString *)arg1;
@end

