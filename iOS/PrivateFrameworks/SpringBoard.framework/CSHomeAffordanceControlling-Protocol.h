//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSAnimationSettings, UIPanGestureRecognizer, UIWindow;
@protocol CSHomeGestureParticipating, PLKeyboardHomeAffordanceAssertion, UIViewSpringAnimationBehaviorDescribing;

@protocol CSHomeAffordanceControlling <NSObject>
@property(readonly, nonatomic) id <UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;
@property(readonly, nonatomic) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;
@property(readonly, nonatomic) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property(readonly, nonatomic) UIPanGestureRecognizer *screenEdgePanGesture;
- (id <PLKeyboardHomeAffordanceAssertion>)keyboardAssertionForGestureWindow:(UIWindow *)arg1;
- (void)unregisterHomeGestureParticipant:(id <CSHomeGestureParticipating>)arg1 withIdentifier:(long long)arg2;
- (void)registerHomeGestureParticipant:(id <CSHomeGestureParticipating>)arg1 withIdentifier:(long long)arg2;
@end

