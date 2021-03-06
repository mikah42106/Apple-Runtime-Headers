//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NFPromise;
@protocol SXComponent;

@protocol SXLayoutInvalidator <NSObject>
- (NFPromise *)invalidateComponent:(id <SXComponent>)arg1 suggestedSize:(struct CGSize)arg2 priority:(unsigned long long)arg3;
- (NFPromise *)invalidateComponent:(id <SXComponent>)arg1 suggestedSize:(struct CGSize)arg2;
- (NFPromise *)invalidateComponent:(id <SXComponent>)arg1;
- (void)cancelPendingInvalidationForComponent:(id <SXComponent>)arg1;
- (void)mightInvalidateComponent:(id <SXComponent>)arg1;
@end

