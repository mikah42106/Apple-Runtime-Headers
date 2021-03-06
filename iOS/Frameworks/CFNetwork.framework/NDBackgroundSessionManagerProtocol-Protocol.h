//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, NSURLSessionConfiguration;
@protocol NDBackgroundSessionClient;

@protocol NDBackgroundSessionManagerProtocol <NSObject>
- (void)obliterateAllSessionsWithReply:(void (^)(void))arg1;
- (void)getActiveSessionIdentifiersWithReply:(void (^)(NSArray *))arg1;
- (void)okayToSendPendingCallbacksForIdentifier:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)releaseAssertionForSession:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)sendPendingCallbacksForIdentifier:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)createSessionWithConfiguration:(NSURLSessionConfiguration *)arg1 clientProxy:(id <NDBackgroundSessionClient>)arg2 cachesDirectory:(NSURL *)arg3 options:(NSDictionary *)arg4 reply:(void (^)(id <NDBackgroundSessionProtocol>, NSDictionary *, _Bool))arg5;
- (void)dropBoost;
- (void)boost;
@end

