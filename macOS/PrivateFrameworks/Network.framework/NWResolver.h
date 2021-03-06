//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NWEndpoint, NWParameters;
@protocol OS_nw_resolver;

@interface NWResolver : NSObject
{
    NWEndpoint *_endpoint;
    NWParameters *_parameters;
    NSObject<OS_nw_resolver> *_internalResolver;
    long long _internalStatus;
    NSSet *_internalResolvedEndpoints;
    NSArray *_internalResolvedEndpointArray;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *internalResolvedEndpointArray; // @synthesize internalResolvedEndpointArray=_internalResolvedEndpointArray;
@property(retain) NSSet *internalResolvedEndpoints; // @synthesize internalResolvedEndpoints=_internalResolvedEndpoints;
@property long long internalStatus; // @synthesize internalStatus=_internalStatus;
@property(readonly) NSObject<OS_nw_resolver> *internalResolver; // @synthesize internalResolver=_internalResolver;
@property(readonly) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) NSArray *resolvedEndpointArray;
- (id)copyResolvedEndpointArray;
@property(readonly, nonatomic) NSSet *resolvedEndpoints;
- (id)copyResolvedEndpoints;
@property(readonly, nonatomic) long long status;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (void)setUpdateHandler;

@end

