//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactory_Emoji.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryEmoji_iPhone : UIKBRenderFactory_Emoji
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(BOOL)arg4 blurBlending:(BOOL)arg5;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (struct CGPoint)emojiInternationalKeyOffset;
- (double)emojiInternationalKeySize;
- (struct CGPoint)emojiPopupTextOffset;

@end

