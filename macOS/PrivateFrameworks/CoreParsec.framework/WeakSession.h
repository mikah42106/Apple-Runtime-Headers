//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PARSession;

__attribute__((visibility("hidden")))
@interface WeakSession : NSObject
{
    PARSession *_weakSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PARSession *strongSession;
- (id)initWithSession:(id)arg1;

@end

