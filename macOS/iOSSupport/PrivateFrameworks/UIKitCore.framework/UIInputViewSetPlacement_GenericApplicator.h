//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInputViewSetPlacementApplicator-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIView;
@protocol UIInputViewSetPlacementOwner;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator>
{
    NSLayoutConstraint *_horizontalConstraint;
    NSLayoutConstraint *_verticalConstraint;
    NSLayoutConstraint *_widthConstraint;
    id <UIInputViewSetPlacementOwner> _owner;
}

+ (id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)allConstraintsActive;
- (void)invalidate;
- (void)prepare;
- (void)applyChanges:(id)arg1;
- (void)checkVerticalConstraint;
@property(readonly) struct CGRect popoverFrame;
@property(readonly) struct UIEdgeInsets contentInsets;
- (BOOL)isGesture:(id)arg1 inDraggableView:(struct CGPoint)arg2;
- (BOOL)preBeginGesture:(id)arg1 shouldBegin:(char *)arg2;
- (struct CGRect)targetRect;
@property(readonly, retain) UIView *twoFingerDraggableView;
@property(readonly, retain) UIView *draggableView;
@property(readonly, retain) NSArray *constraints;
@property(readonly) struct CGPoint origin;
- (id)initForOwner:(id)arg1 withPlacement:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

