//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputMethodKit/NSCopying-Protocol.h>

@interface IMKKeyboardState : NSObject <NSCopying>
{
    unsigned long long _keyModifiers;
}

@property(readonly, nonatomic) unsigned long long keyModifiers; // @synthesize keyModifiers=_keyModifiers;
- (BOOL)isInShortcutState;
- (BOOL)isModifiedByNoneOrAny:(unsigned long long)arg1;
- (BOOL)isModifiedByAny:(unsigned long long)arg1;
- (BOOL)isModifiedBy:(unsigned long long)arg1;
- (id)keyboardStateWithAdditionalModifiers:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKeyModifiers:(unsigned long long)arg1;
- (id)init;

@end

