//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricsKit/MTObject.h>

@class MTCallerSuppliedFields, MTPromise, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MTMetricsData : MTObject
{
    MTCallerSuppliedFields *_callerSuppliedFields;
    NSDictionary *_baseFields;
    NSDictionary *_eventSpecificFields;
    MTPromise *_configBaseFields;
    NSMutableDictionary *_performanceData;
    NSMutableArray *_postProcessingBlocks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *postProcessingBlocks; // @synthesize postProcessingBlocks=_postProcessingBlocks;
@property(retain, nonatomic) NSMutableDictionary *performanceData; // @synthesize performanceData=_performanceData;
@property(retain, nonatomic) MTPromise *configBaseFields; // @synthesize configBaseFields=_configBaseFields;
@property(retain, nonatomic) NSDictionary *eventSpecificFields; // @synthesize eventSpecificFields=_eventSpecificFields;
@property(retain, nonatomic) NSDictionary *baseFields; // @synthesize baseFields=_baseFields;
@property(retain, nonatomic) MTCallerSuppliedFields *callerSuppliedFields; // @synthesize callerSuppliedFields=_callerSuppliedFields;
- (id)description;
- (id)recordEvent;
- (void)cancelUnfinishedPromisedEventData;
- (id)toDictionary;
- (id)composeFieldsMaps;
- (void)addPostProcessingBlock:(CDUnknownBlockType)arg1;

@end

