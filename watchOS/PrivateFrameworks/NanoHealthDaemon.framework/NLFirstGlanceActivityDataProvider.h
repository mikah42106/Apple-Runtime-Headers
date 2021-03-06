//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoHealthDaemon/NLFirstGlanceDataProvider.h>

#import <NanoHealthDaemon/NLFirstGlanceActivityDataProvider-Protocol.h>

@class NSString;

@interface NLFirstGlanceActivityDataProvider : NLFirstGlanceDataProvider <NLFirstGlanceActivityDataProvider>
{
}

- (_Bool)hasBestDayThisWeekToDisplay;
- (_Bool)yesterdayHasRingWithCompletionPercentageLessThanMinimumPercentage:(double)arg1;
- (_Bool)yesterdayHasMinimumCompletionPercentage:(double)arg1 goalType:(int)arg2;
- (_Bool)yesterdayClosedMinimumNumberOfRings:(int)arg1;
- (id)weeklySummaryInfo;
- (double)recommendedMoveGoal;
- (id)bestCompletedActivitySummaryThisWeek;
- (id)yesterdayActivitySummary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

