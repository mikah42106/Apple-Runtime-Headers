//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UIAirDropProgressView : UIView
{
}

+ (Class)layerClass;
- (float)progressPresentationValue;
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) float progress;
@property(nonatomic) _Bool showProgressTray;
@property(nonatomic) float progressLineWidth;
@property(retain, nonatomic) UIColor *progressBackgroundColor;
@property(retain, nonatomic) UIColor *progressColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

