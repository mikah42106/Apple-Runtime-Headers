//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PUICNotchBelt : NSObject
{
    struct vector<PUICNotch, std::__1::allocator<PUICNotch>> _belt;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateDebugDescriptionOfNotches:(CDUnknownBlockType)arg1;
- (id)debugDescription;
- (unsigned int)notchEdgeTypeCrossedFromPosition:(float)arg1 toPosition:(float)arg2 crownInputSequencerIsContinuous:(_Bool)arg3;
- (float)nextRestingPositionForPreviousPosition:(float)arg1 nextPosition:(float)arg2 crownInputSequencerIsContinuous:(_Bool)arg3 notchStrengthExitingPreviousNotch:(int *)arg4;
- (float)notchProgressForPosition:(float)arg1 crownInputSequencerIsContinuous:(_Bool)arg2;
- (float)restingPositionForPosition:(float)arg1 crownInputSequencerIsContinuous:(_Bool)arg2;
- (_Bool)containsPosition:(float)arg1 crownInputSequencerIsContinuous:(_Bool)arg2;
- (void)enumerateOverNotches:(CDUnknownBlockType)arg1;
- (_Bool)removeNotchFrom:(float)arg1 to:(float)arg2;
- (void)checkIntegrity;
- (_Bool)addNotchFrom:(float)arg1 withEdgeType:(unsigned int)arg2 strength:(int)arg3 to:(float)arg4 withEdgeType:(unsigned int)arg5 strength:(int)arg6 restingPosition:(float)arg7;
- (_Bool)addNotchFrom:(float)arg1 withEdgeType:(unsigned int)arg2 strength:(int)arg3 to:(float)arg4 withEdgeType:(unsigned int)arg5 strength:(int)arg6 isContinuous:(_Bool)arg7 restingLocation:(int)arg8;
- (const char *)descriptionForRestingLocation:(int)arg1;
- (_Bool)isEmpty;
- (void)reset;
- (id)init;

@end

