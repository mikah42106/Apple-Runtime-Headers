//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMDAccessoryReachabilityElectionParameter : HMFObject
{
    BOOL _reachable;
    NSUUID *_identifier;
}

- (void).cxx_destruct;
@property(readonly, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)init;

@end

