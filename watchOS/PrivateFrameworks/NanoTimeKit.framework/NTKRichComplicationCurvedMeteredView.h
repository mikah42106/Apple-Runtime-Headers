//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKRichComplicationCurveView.h>

@class NSArray;

@interface NTKRichComplicationCurvedMeteredView : NTKRichComplicationCurveView
{
    NSArray *_meterLayers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *meterLayers; // @synthesize meterLayers=_meterLayers;
- (float)rotationAngleAtProgress:(float)arg1;
- (void)colorMetersWithProgress:(float)arg1;
- (void)_updateGradient;
- (void)setProgress:(float)arg1;
- (id)_shapeStrokeColor;
- (void)_setupShapeLayer:(id)arg1;
- (CDUnknownBlockType)customizeMeterLayerBlock;

@end

