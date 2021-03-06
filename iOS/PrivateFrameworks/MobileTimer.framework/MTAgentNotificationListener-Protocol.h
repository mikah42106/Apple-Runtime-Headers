//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol MTAgentNotificationListener <NSObject>
- (void)handleNotification:(NSString *)arg1 ofType:(long long)arg2 completion:(void (^)(void))arg3;
- (_Bool)handlesNotification:(NSString *)arg1 ofType:(long long)arg2;

@optional
- (NSArray *)liveDarwinNotifications;
- (double)assertionTimeOutForNotification:(NSString *)arg1 ofType:(long long)arg2;
@end

