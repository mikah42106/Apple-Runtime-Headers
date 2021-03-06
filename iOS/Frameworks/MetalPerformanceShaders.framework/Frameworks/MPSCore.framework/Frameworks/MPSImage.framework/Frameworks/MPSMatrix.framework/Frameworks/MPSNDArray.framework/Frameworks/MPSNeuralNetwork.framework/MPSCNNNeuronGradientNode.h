//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@class MPSNNNeuronDescriptor;

@interface MPSCNNNeuronGradientNode : MPSNNGradientFilterNode
{
    MPSNNNeuronDescriptor *_descriptor;
}

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 descriptor:(id)arg4;
@property(readonly, nonatomic) MPSNNNeuronDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (struct FilterGraphNode *)newFilterNode;
- (void)dealloc;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 descriptor:(id)arg4;

@end

