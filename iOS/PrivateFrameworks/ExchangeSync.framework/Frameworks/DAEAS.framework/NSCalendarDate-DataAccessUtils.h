//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCalendarDate.h>

@interface NSCalendarDate (DataAccessUtils)
+ (id)combinedDateWithYMDFrom:(id)arg1 HMSFrom:(id)arg2 componentDatesTimezone:(id)arg3;
- (void)getGregorianDate:(CDStruct_79f9e052 *)arg1;
- (id)gmtMidnight;
- (_Bool)isGMTMidnight;
- (id)nearestMidnight;
- (id)gmtDateToDateInTimeZone:(id)arg1;
- (id)tzDateToDateInGMT:(id)arg1;
@end

