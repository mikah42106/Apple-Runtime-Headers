//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

__attribute__((visibility("hidden")))
@interface WKCustomProtocol : NSURLProtocol
{
    unsigned long long _customProtocolID;
    struct RetainPtr<__CFRunLoop *> _initializationRunLoop;
}

+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long customProtocolID; // @synthesize customProtocolID=_customProtocolID;
- (void)stopLoading;
- (void)startLoading;
@property(readonly, nonatomic) struct __CFRunLoop *initializationRunLoop;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end

