//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TVUserManager : NSObject
{
}

- (void)shouldStorePreferenceForCurrentUserToProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentProfilePreferencePanelWithCurrentSettings:(id)arg1 availableProfiles:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSArray *userIdentifiersForCurrentProfile;
@property(readonly, nonatomic) NSString *currentUserIdentifier;
- (id)init;

@end

