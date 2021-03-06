//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSLPrelaunchBlacklistMonitor, CSLSConcurrentObserverStore, NSMutableDictionary;

@interface CSLPrelaunchBlacklist : NSObject
{
    CSLSConcurrentObserverStore *_observers;
    NSMutableDictionary *_launchlist;
    CSLPrelaunchBlacklistMonitor *_monitor;
    double _maximumBackoffTime;
    double _backoffTime;
    struct _opaque_pthread_mutex_t _blacklistLock;
}

+ (id)sharedBlacklist;
- (void).cxx_destruct;
@property(retain, nonatomic) CSLPrelaunchBlacklistMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) struct _opaque_pthread_mutex_t blacklistLock; // @synthesize blacklistLock=_blacklistLock;
@property double backoffTime; // @synthesize backoffTime=_backoffTime;
@property double maximumBackoffTime; // @synthesize maximumBackoffTime=_maximumBackoffTime;
@property(retain, nonatomic) NSMutableDictionary *launchlist; // @synthesize launchlist=_launchlist;
- (id)_nextPermittedLaunchDateForLaunchEntry:(id)arg1;
- (_Bool)_isCurrentlyBlacklisted:(id)arg1;
- (id)_recordExit:(id)arg1 occurredDuringLaunch:(_Bool)arg2;
- (void)_recordLaunch:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)reset;
- (id)nextPermittedLaunchDateForBundleID:(id)arg1;
- (void)removeFromBlacklist:(id)arg1;
- (_Bool)contains:(id)arg1;
- (void)applicationDidExitWithBundleID:(id)arg1 exitReason:(unsigned int)arg2;
- (void)didFailToSnapshotApp:(id)arg1 error:(id)arg2;
- (void)applicationDidFailToLaunchWithBundleID:(id)arg1 exitReason:(unsigned int)arg2;
- (void)applicationDidLaunchWithBundleID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)_setBackoffWithDefault:(double)arg1 defaultMaximumBackoff:(double)arg2;
- (id)init;

@end

