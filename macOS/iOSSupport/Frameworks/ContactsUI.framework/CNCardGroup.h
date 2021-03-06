//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/NSCopying-Protocol.h>

@class CNContact, NSArray, NSMutableArray, NSString;

@interface CNCardGroup : NSObject <NSCopying>
{
    NSMutableArray *_items;
    NSMutableArray *_actions;
    NSArray *_actionItems;
    BOOL _useSplitActions;
    BOOL _addSpacerFromPreviousGroup;
    CNContact *_contact;
    NSString *_title;
}

+ (id)groupForContact:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL addSpacerFromPreviousGroup; // @synthesize addSpacerFromPreviousGroup=_addSpacerFromPreviousGroup;
@property(nonatomic) BOOL useSplitActions; // @synthesize useSplitActions=_useSplitActions;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)_loadActionItems;
- (id)description;
- (void)removeAllActions;
- (void)removeActionWithTitle:(id)arg1;
- (SEL)unwrappedSelectorForAction:(id)arg1;
- (id)unwrappedTargetForAction:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)addAction:(id)arg1 withTitle:(id)arg2 color:(id)arg3 transportType:(long long)arg4;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4;
- (void)addAction:(id)arg1 withTitle:(id)arg2;
@property(readonly, nonatomic) NSArray *actionItems;
@property(readonly, nonatomic) NSArray *editingItems;
@property(readonly, nonatomic) NSArray *displayItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContact:(id)arg1;

@end

