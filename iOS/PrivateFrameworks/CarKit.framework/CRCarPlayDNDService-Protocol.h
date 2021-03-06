//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol CRCarPlayDNDService
- (void)internalUtilityToolWithReply:(void (^)(NSString *))arg1;
- (void)setInternalAutoReplyWhitelist:(NSArray *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)internalAutoReplyWhitelistWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)disableDNDUntilEndOfDriveWithContext:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)setDNDTriggerMode:(unsigned long long)arg1 withReply:(void (^)(_Bool, NSError *))arg2;
- (void)fetchDNDTriggerModeWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)setAutoReplyMessage:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)autoReplyMessageWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)setAllowedAutoReplyAudience:(unsigned long long)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)allowedAutoReplyAudienceWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)shouldDisplayExitConfirmationWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)resetAutomaticDNDPreferencesWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)completeDNDBuddyWithOption:(unsigned long long)arg1 withReply:(void (^)(_Bool, NSError *))arg2;
- (void)setCarPlayAutomaticDNDActive:(_Bool)arg1 withReply:(void (^)(_Bool, NSError *))arg2;
- (void)isCarPlayAutomaticDNDActiveWithReply:(void (^)(_Bool))arg1;
@end

