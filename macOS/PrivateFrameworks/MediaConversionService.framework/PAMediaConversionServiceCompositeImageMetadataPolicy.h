//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class NSArray;

@interface PAMediaConversionServiceCompositeImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
{
    NSArray *_policies;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithPolicies:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *policies; // @synthesize policies=_policies;
- (id)processMetadata:(id)arg1;
- (BOOL)metadataNeedsProcessing:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

