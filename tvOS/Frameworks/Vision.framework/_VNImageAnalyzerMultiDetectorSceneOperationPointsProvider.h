//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNOperationPointsProviding-Protocol.h>

@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

__attribute__((visibility("hidden")))
@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsProvider : NSObject <VNOperationPointsProviding>
{
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;
    unsigned long long _requestRevision;
}

- (void).cxx_destruct;
- (id)operationPointsAndReturnError:(id *)arg1;
- (id)initWithOperationPointsCache:(id)arg1 requestRevision:(unsigned long long)arg2;

@end

