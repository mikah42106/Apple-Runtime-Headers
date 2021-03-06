//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIGeometryChangeObserver-Protocol.h>

@class NSMutableDictionary, NSString;

@interface UIFocusRingManager : NSObject <_UIGeometryChangeObserver>
{
    NSMutableDictionary *_focusRingStateForClient;
}

+ (id)_currentFocusItemForClient:(id)arg1;
+ (void)updateRingForFocusItem:(id)arg1 forClient:(id)arg2;
+ (void)updateRingForFocusItem:(id)arg1;
+ (void)removeRingFromFocusItem:(id)arg1 forClient:(id)arg2;
+ (void)removeRingFromFocusItem:(id)arg1;
+ (void)moveRingToFocusItem:(id)arg1 forClient:(id)arg2;
+ (void)moveRingToFocusItem:(id)arg1;
+ (id)manager;
+ (Class)shapeLayerClassForClient:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *focusRingStateForClient; // @synthesize focusRingStateForClient=_focusRingStateForClient;
- (void)_updateFocusLayerFrames;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (id)_viewToAddFocusLayerForItem:(id)arg1;
- (void)_removeActiveFocusLayersForClient:(id)arg1;
- (void)addSelectedParentFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addSelectedFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addParentFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (id)activeFocusLayersForClient:(id)arg1;
- (id)activeFocusLayersToItemsForClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

