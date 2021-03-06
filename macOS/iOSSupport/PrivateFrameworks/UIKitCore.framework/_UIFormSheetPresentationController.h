//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UISheetPresentationController.h>

@interface _UIFormSheetPresentationController : _UISheetPresentationController
{
    BOOL _layoutStateShouldAvoidKeyboard;
    double _keyboardYOrigin;
}

+ (long long)_initialMode;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (BOOL)shouldSubscribeToKeyboardNotifications;
- (BOOL)_shouldHideBottomCorner;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)_changeLayoutModeToAvoidKeyboard:(BOOL)arg1 withOrigin:(double)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;

@end

