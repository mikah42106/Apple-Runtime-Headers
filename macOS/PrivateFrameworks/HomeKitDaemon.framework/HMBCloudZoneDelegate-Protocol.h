//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBCloudZone, HMBCloudZoneRebuilderStatus, HMBProcessingOptions, NSArray, NSUUID;

@protocol HMBCloudZoneDelegate <NSObject>

@optional
- (void)cloudZone:(HMBCloudZone *)arg1 didChangeRebuildStatus:(HMBCloudZoneRebuilderStatus *)arg2;
- (void)cloudZone:(HMBCloudZone *)arg1 didRemoveParticipantWithClientIdentifier:(NSUUID *)arg2;
- (BOOL)cloudZone:(HMBCloudZone *)arg1 didEncounterConflicts:(NSArray *)arg2 options:(HMBProcessingOptions *)arg3;
@end

