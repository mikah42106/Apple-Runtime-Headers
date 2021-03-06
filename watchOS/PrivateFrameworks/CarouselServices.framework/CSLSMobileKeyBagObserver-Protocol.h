//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarouselServices/NSObject-Protocol.h>

@class CSLSMobileKeyBag, CSLSMobileKeyBagState;

@protocol CSLSMobileKeyBagObserver <NSObject>

@optional
- (void)keybagDidFinishProcessingStateChange:(CSLSMobileKeyBag *)arg1;
- (void)keybag:(CSLSMobileKeyBag *)arg1 extendedStateDidChange:(CSLSMobileKeyBagState *)arg2;
- (void)keybagWillBeginProcessingStateChange:(CSLSMobileKeyBag *)arg1;
- (void)keybagDidUnlockForTheFirstTime:(CSLSMobileKeyBag *)arg1;
@end

