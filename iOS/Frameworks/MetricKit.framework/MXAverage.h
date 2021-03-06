//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricKit/NSSecureCoding-Protocol.h>

@class NSMeasurement, NSMeasurementFormatter;

@interface MXAverage : NSObject <NSSecureCoding>
{
    NSMeasurementFormatter *_averageMeasurementFormatter;
    NSMeasurement *_averageMeasurement;
    long long _sampleCount;
    double _standardDeviation;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) double standardDeviation; // @synthesize standardDeviation=_standardDeviation;
@property(readonly) long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(readonly) NSMeasurement *averageMeasurement; // @synthesize averageMeasurement=_averageMeasurement;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMeasurement:(id)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3;
- (id)initWithDoubleValue:(double)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3 unit:(id)arg4;

@end

