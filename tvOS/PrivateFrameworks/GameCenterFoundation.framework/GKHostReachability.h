//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKReachability.h>

@class NSError, NSString;

@interface GKHostReachability : GKReachability
{
    NSString *_hostName;
    NSError *_error;
}

+ (id)_gkReachabilityWithHostName:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void)dealloc;

@end

