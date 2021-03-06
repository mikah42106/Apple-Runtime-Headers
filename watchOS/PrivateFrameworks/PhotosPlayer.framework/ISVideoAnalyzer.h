//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ISVideoAnalyzer : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *_operationsByRequestID;
    int __currentRequestID;
}

+ (id)defaultAnalyzer;
- (void).cxx_destruct;
@property(nonatomic, setter=_setCurrentRequestID:) int _currentRequestID; // @synthesize _currentRequestID=__currentRequestID;
- (int)requestAllFrameTimesInAsset:(id)arg1 trackID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleAllFrameTimesRequestFinishedForTime:(CDStruct_1b6d18a9)arg1 frameTimes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (int)requestFrameTimesAroundTime:(CDStruct_1b6d18a9)arg1 inAsset:(id)arg2 trackID:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

