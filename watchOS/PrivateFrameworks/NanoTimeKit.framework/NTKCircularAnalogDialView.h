//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CLKDevice, NSArray, NTKWhistlerAnalogColorPalette;

@interface NTKCircularAnalogDialView : UIView
{
    CLKDevice *_device;
    unsigned int _numberOfTicks;
    CALayer *_dialBackgroundLayer;
    CALayer *_ticksLayer;
    NSArray *_allSmallTicks;
    NSArray *_allHourTicks;
    NSArray *_smallMatchingHourTicks;
    float _tickPadding;
    NTKWhistlerAnalogColorPalette *_colorPalette;
    CDStruct_3c04bc85 _options;
}

+ (id)_disabledLayerActions;
- (void).cxx_destruct;
- (void)_toggleRasterization:(_Bool)arg1;
- (float)_tickOpactiyAtIndex:(int)arg1 bezelTextWidthInRadius:(float)arg2 invisibleTicksAlpha:(float)arg3 visibleTicksAlpha:(float)arg4;
- (float)_tickOpactiyAtIndex:(int)arg1 bezelTextWidthInRadius:(float)arg2 invisibleTicksAlpha:(float)arg3;
- (void)transitInvisibleTicksAlphaWithBezelTextWidthInRadius:(float)arg1 invisbleTicksAlpha:(float)arg2;
- (void)transitTicksWithInitialBezelTextWidthInRadius:(float)arg1 finalBezelTextWidthInRadius:(float)arg2 fraction:(float)arg3;
- (void)showAllTicksInDial;
- (void)fillDialTransitionWithFraction:(float)arg1 bezelTextWidthRadians:(float)arg2;
- (void)setHourTicksOpacity:(float)arg1 bezelTextWidthRadians:(float)arg2;
- (void)setHideHourTicks:(_Bool)arg1;
- (void)cleanupAfterEdit;
- (void)prepareForEdit;
- (void)applyZoomFraction:(float)arg1;
- (void)cleanupAfterZoom;
- (void)prepareForZoom;
- (id)_instantaneousAnimationForKeyPath:(id)arg1 value:(id)arg2;
- (void)applyColorTransitionFraction:(float)arg1 fromColor:(unsigned int)arg2 toColor:(unsigned int)arg3;
- (void)applyColorTransitionFraction:(float)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3;
- (void)setDialBackgroundColor:(id)arg1;
- (void)layoutLayerTicks:(id)arg1 rotationAngleInDegree:(float)arg2 smallTicks:(_Bool)arg3;
- (_Bool)isTickIndexForHour:(unsigned int)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 options:(CDStruct_3c04bc85)arg2 device:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2 hideHourTicks:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2 smallTicksMatchingMinutes:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

@end

