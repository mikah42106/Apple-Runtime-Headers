//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <dispatch/OS_dispatch_data-Protocol.h>

@class NSString;

@interface OS_dispatch_data : NSObject <OS_dispatch_data>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)_activate;
- (void)_resume;
- (void)_suspend;
- (BOOL)_isCompact;
@property(readonly, nonatomic) const void *bytes;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, copy) NSString *debugDescription;
- (void)_setTargetQueue:(id)arg1;
- (void)_setFinalizer:(CDUnknownFunctionPointerType)arg1;
- (void *)_getContext;
- (void)_setContext:(void *)arg1;
- (BOOL)_bytesAreVM;
- (void)dealloc;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

