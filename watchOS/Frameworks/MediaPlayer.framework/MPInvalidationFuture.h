//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPFuture.h>

@class NSMapTable;

@interface MPInvalidationFuture : MPFuture
{
    NSMapTable *_invalidationBlocks;
    _Bool _invalid;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
- (void)invalidate;
- (id)onInvalid:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)onInvalid:(CDUnknownBlockType)arg1;

@end

