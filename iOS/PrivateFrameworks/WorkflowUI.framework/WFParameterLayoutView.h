//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;
@protocol WFParameterLayoutViewDelegate;

@interface WFParameterLayoutView : UIView
{
    _Bool _selectable;
    _Bool _highlighted;
    id <WFParameterLayoutViewDelegate> _delegate;
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(nonatomic) __weak id <WFParameterLayoutViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelectable) _Bool selectable; // @synthesize selectable=_selectable;
- (id)accessibilityElements;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)fadeOutHighlight;
- (void)unhighlight;
- (void)highlight;
- (void)updateBackgroundColor;

@end

