//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSArray, NSDate, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKDailySleepSeriesDataSourceChartPoint : NSObject <HKChartPoint>
{
    NSArray *_timeIntervalOffsets;
    NSDate *_xValue;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
@property(retain, nonatomic) NSArray *timeIntervalOffsets; // @synthesize timeIntervalOffsets=_timeIntervalOffsets;
- (id)maxYValue;
- (id)minYValue;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)yValue;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

