//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoHealthDaemon/NSObject-Protocol.h>

@protocol NLDailyActivityGoalDetectionDelegate <NSObject>
- (void)concludeGoalDetectionRun;
- (_Bool)runDailyGoalCompletionDetectionForGoalType:(int)arg1 activitySummaryIndex:(long long)arg2 previousValue:(double)arg3 currentValue:(double)arg4 goalValue:(double)arg5 shouldAlert:(_Bool)arg6 goalMetHandler:(_Bool (^)(double, double))arg7;
@end

