//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSOnboardingUtil : NSObject
{
}

+ (id)viewControllerForMediaType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)shouldShowOnboarding;
+ (void)presentIfNeededFromViewController:(id)arg1 mediaTypes:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)markAsShown;

@end

