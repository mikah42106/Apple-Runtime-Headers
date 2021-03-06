//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSImage, NSImageView, NSString;
@protocol SiriUICardHeaderViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SiriUICardHeaderViewController : NSViewController
{
    BOOL _allowsStashing;
    id <SiriUICardHeaderViewControllerDelegate> _delegate;
    NSString *_summaryTitle;
    NSImageView *_iconView;
}

- (void).cxx_destruct;
@property __weak NSImageView *iconView; // @synthesize iconView=_iconView;
@property(retain) NSString *summaryTitle; // @synthesize summaryTitle=_summaryTitle;
@property BOOL allowsStashing; // @synthesize allowsStashing=_allowsStashing;
@property(nonatomic) __weak id <SiriUICardHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSImage *icon; // @dynamic icon;
- (void)stashPressed:(id)arg1;
- (id)nibBundle;

@end

