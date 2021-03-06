//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKOverlayRenderer.h>

@class NSArray, NSMutableDictionary, UIColor;

@interface MKOverlayPathRenderer : MKOverlayRenderer
{
    UIColor *_fillColor;
    UIColor *_strokeColor;
    float _lineWidth;
    int _lineJoin;
    int _lineCap;
    float _miterLimit;
    float _lineDashPhase;
    NSArray *_lineDashPattern;
    struct CGPath *_path;
    _Bool _shouldRasterize;
    struct os_unfair_lock_s _runningVectorGeometryAnimationsLock;
    NSMutableDictionary *_runningVectorGeometryAnimations;
    _Bool _externalSubclassOverridesDrawingMethods;
}

+ (_Bool)_externalSubclassOverridesDrawingMethods;
+ (Class)_mapkitLeafClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRasterize; // @synthesize shouldRasterize=_shouldRasterize;
@property(readonly, nonatomic, getter=_externalSubclassOverridesDrawingMethods) _Bool externalSubclassOverridesDrawingMethods; // @synthesize externalSubclassOverridesDrawingMethods=_externalSubclassOverridesDrawingMethods;
- (void)dealloc;
- (_Bool)canDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(float)arg2;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(float)arg2 inContext:(struct CGContext *)arg3;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)applyFillPropertiesToContext:(struct CGContext *)arg1 atZoomScale:(float)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext *)arg1 atZoomScale:(float)arg2;
@property(copy) NSArray *lineDashPattern;
- (void)invalidatePath;
@property const struct CGPath *path;
- (void)createPath;
- (id)initWithOverlay:(id)arg1;
@property float lineDashPhase;
@property float miterLimit;
@property int lineCap;
@property int lineJoin;
@property float lineWidth;
@property(retain) UIColor *strokeColor;
@property(retain) UIColor *fillColor;
- (void)_animateVectorGeometryIfNecessaryForKey:(id)arg1 withStepHandler:(CDUnknownBlockType)arg2;
- (void)_performInitialConfiguration;
- (_Bool)_canProvideVectorGeometry;

@end

