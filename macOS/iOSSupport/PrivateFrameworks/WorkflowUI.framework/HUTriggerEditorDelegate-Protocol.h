//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/HUServiceGridViewControllerDelegate-Protocol.h>
#import <WorkflowUI/NSObject-Protocol.h>

@class HFTriggerBuilder, UIViewController;

@protocol HUTriggerEditorDelegate <NSObject, HUServiceGridViewControllerDelegate>
- (void)triggerEditor:(UIViewController *)arg1 didFinishWithTriggerBuilder:(HFTriggerBuilder *)arg2;

@optional
- (BOOL)triggerEditor:(UIViewController *)arg1 shouldCommitTriggerBuilder:(HFTriggerBuilder *)arg2;
@end

