//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@class CLLocation, NSString;

@interface RELocationRelevanceProvider : RERelevanceProvider
{
    unsigned long long _type;
    CLLocation *_location;
    double _radius;
    double _accuracy;
    NSString *_bundleIdentifier;
}

+ (id)relevanceSimulatorID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)providerWithBundleIdentifier:(id)arg1;
- (id)initWithLocation:(id)arg1 radius:(double)arg2 accuracy:(double)arg3;
- (id)initWithLocation:(id)arg1 radius:(double)arg2;
- (id)initWithLocationType:(unsigned long long)arg1;

@end

