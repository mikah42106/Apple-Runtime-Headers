//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@protocol AXPIFingerAppearanceDelegate;

@interface AXPIFingerLayer : CAShapeLayer
{
    _Bool _isSelected;
    _Bool _pressed;
    unsigned long long _shape;
    id <AXPIFingerAppearanceDelegate> _appearanceDelegate;
    struct CGRect _outerFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect outerFrame; // @synthesize outerFrame=_outerFrame;
@property(nonatomic) __weak id <AXPIFingerAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(nonatomic) unsigned long long shape; // @synthesize shape=_shape;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_isSelected;
- (id)initWithAppearanceDelegate:(id)arg1;

@end

