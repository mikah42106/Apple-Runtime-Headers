//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Proximity/PRServerProtocol-Protocol.h>

@class NSArray, NSDictionary;

@protocol PRBeaconRangingProtocol <PRServerProtocol>
- (void)clearBeaconWhitelist:(void (^)(_Bool, NSError *))arg1;
- (void)pushBeaconWhitelist:(NSArray *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)stopBeaconing:(int)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)startBeaconing:(int)arg1 options:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
@end

