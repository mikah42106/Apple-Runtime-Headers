//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REFeatureTransformer.h>

@class REFeatureValueCounter;

@interface _RERecentFeatureTransformer : REFeatureTransformer
{
    REFeatureValueCounter *_counter;
    unsigned int _bitCount;
}

+ (_Bool)supportsPersistence;
+ (_Bool)supportsInvalidation;
+ (id)functionName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (_Bool)_validateWithFeatures:(id)arg1;
- (unsigned long)_createTransformFromValues:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)_outputType;
- (unsigned int)_featureCount;
- (int)_bitCount;
- (void)_updateConfigurationForCount:(unsigned int)arg1;
- (void)configureWithInvocation:(id)arg1;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (_Bool)readFromURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end

