//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VNClustererContextBase : NSObject
{
    NSString *_type;
    NSNumber *_threshold;
    NSNumber *_torsoThreshold;
    NSString *_cacheDirectoryPath;
    _Bool _readOnly;
    unsigned long long _requestRevision;
}

+ (id)_ageClassifierPathForFaceprintRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (id)_faceprintRevision2ModelPathAndReturnError:(id *)arg1;
+ (id)_faceprintRevision1ModelPathAndReturnError:(id *)arg1;
- (void).cxx_destruct;
- (void)_initializeGreedyClustererOptions:(id)arg1;
- (id)_createGreedyClusterer:(Class)arg1 state:(id)arg2 error:(id *)arg3;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(_Bool)arg4 threshold:(float)arg5 torsoThreshold:(float)arg6 requestRevision:(unsigned long long)arg7 error:(id *)arg8;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(_Bool)arg4 threshold:(float)arg5 requestRevision:(unsigned long long)arg6 error:(id *)arg7;
- (_Bool)_checkInitInputs:(id)arg1 cachePath:(id)arg2 checkType:(id)arg3 requestRevision:(unsigned long long)arg4 error:(id *)arg5;

@end

