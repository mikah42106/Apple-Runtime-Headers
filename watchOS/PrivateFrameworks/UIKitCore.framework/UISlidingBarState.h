//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UISlidingBarConfiguration;

@interface UISlidingBarState : NSObject <NSCopying>
{
    _Bool __treatLeadingHiddenAsOverlaps;
    _Bool __treatTrailingHiddenAsOverlaps;
    float _leadingWidth;
    float _trailingWidth;
    float _leadingDragOffset;
    float _trailingDragOffset;
    UISlidingBarConfiguration *_configuration;
    float __leadingOverlayWidth;
    float __trailingOverlayWidth;
    float __keyboardAdjustment;
    int __collapsedState;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setCollapsedState:) int _collapsedState; // @synthesize _collapsedState=__collapsedState;
@property(nonatomic) float _keyboardAdjustment; // @synthesize _keyboardAdjustment=__keyboardAdjustment;
@property(nonatomic, setter=_setTreatTrailingHiddenAsOverlaps:) _Bool _treatTrailingHiddenAsOverlaps; // @synthesize _treatTrailingHiddenAsOverlaps=__treatTrailingHiddenAsOverlaps;
@property(nonatomic, setter=_setTrailingOverlayWidth:) float _trailingOverlayWidth; // @synthesize _trailingOverlayWidth=__trailingOverlayWidth;
@property(nonatomic, setter=_setTreatLeadingHiddenAsOverlaps:) _Bool _treatLeadingHiddenAsOverlaps; // @synthesize _treatLeadingHiddenAsOverlaps=__treatLeadingHiddenAsOverlaps;
@property(nonatomic, setter=_setLeadingOverlayWidth:) float _leadingOverlayWidth; // @synthesize _leadingOverlayWidth=__leadingOverlayWidth;
@property(retain, nonatomic) UISlidingBarConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) float trailingDragOffset; // @synthesize trailingDragOffset=_trailingDragOffset;
@property(nonatomic) float leadingDragOffset; // @synthesize leadingDragOffset=_leadingDragOffset;
@property(nonatomic) float trailingWidth; // @synthesize trailingWidth=_trailingWidth;
@property(nonatomic) float leadingWidth; // @synthesize leadingWidth=_leadingWidth;
@property(readonly, nonatomic) _Bool isTrailingVisible;
@property(readonly, nonatomic) _Bool isLeadingVisible;
- (id)_interactiveStateRequest;
- (id)stateRequest;
- (float)_absoluteDistanceFromRequest:(id)arg1;
- (float)_distanceFromRequest:(id)arg1;
- (_Bool)matchesRequest:(id)arg1;
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
- (_Bool)_shouldUseSlidingBars;
- (_Bool)_trailingEntirelyOverlapsMain;
@property(readonly, nonatomic) _Bool trailingOverlapsMain;
- (_Bool)_leadingEntirelyOverlapsMain;
@property(readonly, nonatomic) _Bool leadingOverlapsMain;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

