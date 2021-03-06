//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoHealthDaemon/NLActivityCarouselServiceProvider-Protocol.h>
#import <NanoHealthDaemon/NLActivityCoachingAlertObserver-Protocol.h>
#import <NanoHealthDaemon/NLActivitySedentaryAlertObserver-Protocol.h>
#import <NanoHealthDaemon/NLPredictedActivityAlertObserver-Protocol.h>

@class NSMutableSet, NSString;
@protocol NLActivityCarouselServiceProvider, NLActivityCoachingAlertObserver, NLActivitySedentaryAlertObserver, NLPredictedActivityAlertObserver, OS_dispatch_queue;

@interface NLCoachingAlertNotifier : NSObject <NLActivitySedentaryAlertObserver, NLPredictedActivityAlertObserver, NLActivityCoachingAlertObserver, NLActivityCarouselServiceProvider>
{
    NSMutableSet<NLActivitySedentaryAlertObserver> *_sedentaryObservers;
    NSMutableSet<NLPredictedActivityAlertObserver> *_predictedActivityObservers;
    NSMutableSet<NLActivityCoachingAlertObserver> *_coachingObservers;
    NSMutableSet<NLActivityCarouselServiceProvider> *_carouselServiceObservers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)hideAlertForPredictedActivityEnd:(id)arg1;
- (void)showAlertForPredictedEndWorkoutActivity:(id)arg1;
- (void)hideAlertForPredictedActivityStart:(id)arg1;
- (void)showStartAlertForPredictedActivity:(id)arg1;
- (void)fetchWellnessComplicationOnCurrentClockFaceWithCompletion:(CDUnknownBlockType)arg1;
- (void)showCoachingAlertRequests:(id)arg1;
- (void)hideSedentaryActivityAlert;
- (void)showSedentaryAlertOfType:(int)arg1 withTimeoutDate:(id)arg2 withActiveHourCount:(int)arg3 withTotalCount:(int)arg4 wheelchairUser:(_Bool)arg5 experimentInstance:(id)arg6;
- (void)unregisterForActivityAlerts:(id)arg1;
- (void)registerForActivityAlerts:(id)arg1 notificationTypes:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

