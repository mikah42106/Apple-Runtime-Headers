//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@interface UIWindow (AVAdditions)
- (void)avkit_ensureOrientation:(long long)arg1 disableTouchCancellation:(_Bool)arg2;
- (_Bool)avkit_supportsAutorotationForInterfaceOrientationMask:(unsigned long long)arg1;
- (_Bool)avkit_canAttemptSecondWindowForRotability;
- (_Bool)avkit_canAttemptRotation;
- (long long)avkit_preferredInterfaceOrientationFromDeviceOrientation;
- (_Bool)avkit_isHostedInAnotherProcess;
@end

