//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARCoachingBlendableSplineGroup, ARCoachingControlPointContainer, NSArray;
@protocol MTLBuffer;

@interface ARCoachingMetalSplineData : NSObject
{
    id <MTLBuffer> _controlPointsBuffer;
    id <MTLBuffer> _controlPointIndicesBuffer;
    id <MTLBuffer> _patchUserDataBuffer;
    id <MTLBuffer> _tessellationFactorsBuffer;
    id <MTLBuffer> _instanceBuffer;
    int _patchCount;
    NSArray *_instanceTransforms;
    ARCoachingBlendableSplineGroup *_shapes;
    ARCoachingControlPointContainer *_recordedControlPoints;
    // Error parsing type: , name: _recordedScale
    // Error parsing type: , name: _recordedTranslation
}

- (void).cxx_destruct;
// Error parsing type for property recordedTranslation:
// Property attributes: T,R,N,V_recordedTranslation

// Error parsing type for property recordedScale:
// Property attributes: T,R,N,V_recordedScale

@property(readonly, nonatomic) ARCoachingControlPointContainer *recordedControlPoints; // @synthesize recordedControlPoints=_recordedControlPoints;
@property(readonly, nonatomic) ARCoachingBlendableSplineGroup *shapes; // @synthesize shapes=_shapes;
@property(readonly, nonatomic) NSArray *instanceTransforms; // @synthesize instanceTransforms=_instanceTransforms;
@property(readonly, nonatomic) int patchCount; // @synthesize patchCount=_patchCount;
@property(readonly, nonatomic) id <MTLBuffer> instanceBuffer; // @synthesize instanceBuffer=_instanceBuffer;
@property(readonly, nonatomic) id <MTLBuffer> tessellationFactorsBuffer; // @synthesize tessellationFactorsBuffer=_tessellationFactorsBuffer;
@property(readonly, nonatomic) id <MTLBuffer> patchUserDataBuffer; // @synthesize patchUserDataBuffer=_patchUserDataBuffer;
@property(readonly, nonatomic) id <MTLBuffer> controlPointIndicesBuffer; // @synthesize controlPointIndicesBuffer=_controlPointIndicesBuffer;
@property(readonly, nonatomic) id <MTLBuffer> controlPointsBuffer; // @synthesize controlPointsBuffer=_controlPointsBuffer;
- (void)computeInstanceTransformTranslate:(int)arg1 index: /* Error: Ran out of types for this method. */;
- (void)computeInstanceTransformTranslate:(float)arg1 x1:(int)arg2 t:index: /* Error: Ran out of types for this method. */;
- (void)computeInstanceTransformTranslate:(float)arg1 t:(int)arg2 index: /* Error: Ran out of types for this method. */;
- (void)computeInstanceTransformScale: /* Error: Ran out of types for this method. */;
- (void)computeInstanceTransformScale:(float)arg1 s1:t: /* Error: Ran out of types for this method. */;
- (void)computeInstanceTransformScale:(float)arg1 t: /* Error: Ran out of types for this method. */;
- (void)computeShapeBlendWithStart:(CDStruct_37a3040a *)arg1 startCount:(int)arg2 end:(CDStruct_37a3040a *)arg3 endCount:(int)arg4 t:(float)arg5;
- (void)computeShapeBlendWithEnd:(CDStruct_37a3040a *)arg1 endCount:(int)arg2;
- (void)computeShapeBlendWithEnd:(CDStruct_37a3040a *)arg1 endCount:(int)arg2 t:(float)arg3;
- (id)shapeBlendWithStart:(CDStruct_37a3040a *)arg1 startCount:(int)arg2 end:(CDStruct_37a3040a *)arg3 endCount:(int)arg4 t:(float)arg5;
- (void)resetInstanceTransforms:(id)arg1;
- (void)recordState;
- (void)makeShapes;
- (id)init:(id)arg1;

@end

