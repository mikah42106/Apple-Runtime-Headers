//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FudProgressWeights : NSObject
{
    float prepareWeight;
    float applyWeight;
    float finishWeight;
}

@property float finishWeight; // @synthesize finishWeight;
@property float applyWeight; // @synthesize applyWeight;
@property float prepareWeight; // @synthesize prepareWeight;
- (id)description;
- (double)calculateOverallProgressWithStepProgress:(double)arg1 step:(int)arg2;
- (id)initWithPrepareWeight:(float)arg1 applyWeight:(float)arg2 finishWeight:(float)arg3;

@end

