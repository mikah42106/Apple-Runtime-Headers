//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECIntToTwoIntKeyCache : NSObject
{
    NSMutableDictionary *mCache;
}

+ (id)keyForKey1:(unsigned long long)arg1 key2:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)setObject:(unsigned long long)arg1 forKey1:(unsigned long long)arg2 key2:(unsigned long long)arg3;
- (_Bool)integerIsPresentForKey1:(unsigned long long)arg1 key2:(unsigned long long)arg2 outValue:(unsigned long long *)arg3;
- (id)init;

@end

