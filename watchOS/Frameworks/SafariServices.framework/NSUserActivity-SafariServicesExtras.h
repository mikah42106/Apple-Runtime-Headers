//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreServices/NSUserActivity.h>

@class NSNumber, NSUUID, _SFNavigationIntent;

@interface NSUserActivity (SafariServicesExtras)
+ (id)_sf_windowCreationAcitivtyFromSceneConnectionOptions:(id)arg1;
+ (id)_sf_windowCreationActivityWithRecentlyClosedTabUUID:(id)arg1 browserControllerUUID:(id)arg2;
+ (id)_sf_windowCreationActivityWithTabUUID:(id)arg1 browserControllerUUID:(id)arg2;
+ (id)_sf_windowCreationActivityWithMode:(int)arg1;
+ (id)_sf_windowCreationActivityWithNavigationIntent:(id)arg1;
- (void)_sf_invalidateWindowCreationData;
@property(readonly, nonatomic) NSNumber *_sf_windowCreationMode;
@property(readonly, nonatomic) NSUUID *_sf_windowCreationRecentlyClosedTabUUID;
@property(readonly, nonatomic) NSUUID *_sf_windowCreationSourceBrowserControllerUUID;
@property(readonly, nonatomic) NSUUID *_sf_windowCreationTabUUID;
@property(readonly, nonatomic) _SFNavigationIntent *_sf_windowCreationNavigationIntent;
- (id)sf_windowCreationNavigationIntentID;
@end

