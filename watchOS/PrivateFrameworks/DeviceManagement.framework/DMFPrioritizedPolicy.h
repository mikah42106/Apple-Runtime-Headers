//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DMFPrioritizedPolicy : NSObject
{
    int _priority;
    int _policy;
}

+ (id)prioritizedPoliciesForAppPolicy:(id)arg1 bundleIdentifiers:(id)arg2 categoryPolicy:(id)arg3 categoryIdentifiers:(id)arg4 webPolicy:(id)arg5 webDomains:(id)arg6;
+ (int)arbitratePolicyForPrioritizedPolicies:(id)arg1;
@property(nonatomic) int policy; // @synthesize policy=_policy;
@property(nonatomic) int priority; // @synthesize priority=_priority;
- (int)compare:(id)arg1;
- (_Bool)isEqualToPrioritizedPolicy:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithEffectivePolicy:(id)arg1 identifier:(id)arg2;

@end

