//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableCellBackgroundView : UIView
{
    BOOL _selected;
    BOOL _drawsOpaque;
    BOOL _drawsBorder;
    BOOL _usesDarkTheme;
    unsigned long long _roundedCorners;
}

@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(nonatomic) BOOL usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic) BOOL drawsBorder; // @synthesize drawsBorder=_drawsBorder;
@property(nonatomic) BOOL drawsOpaque; // @synthesize drawsOpaque=_drawsOpaque;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (void)drawRect:(struct CGRect)arg1;

@end

