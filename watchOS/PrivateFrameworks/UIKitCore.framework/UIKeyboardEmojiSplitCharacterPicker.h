//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKeyboardEmojiCollectionInputView.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiCollectionInputView
{
}

- (void)updateToCategory:(int)arg1;
- (void)didMoveToWindow;
- (float)snappedYOffsetForOffset:(float)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end

