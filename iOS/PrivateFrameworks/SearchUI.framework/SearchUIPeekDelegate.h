//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/UIContextMenuInteractionDelegate-Protocol.h>

@class NSString, SearchUITableViewController;

@interface SearchUIPeekDelegate : NSObject <UIContextMenuInteractionDelegate>
{
    SearchUITableViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SearchUITableViewController *viewController; // @synthesize viewController=_viewController;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (void)contextMenuInteractionWillPresent:(id)arg1;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

