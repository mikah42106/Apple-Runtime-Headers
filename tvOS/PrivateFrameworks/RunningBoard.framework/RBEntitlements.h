//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>
#import <RunningBoard/RBEntitlementPossessing-Protocol.h>

@class NSSet, NSString;

@interface RBEntitlements : NSObject <BSDescriptionProviding, RBEntitlementPossessing>
{
    NSSet *_entitlements;
}

- (void).cxx_destruct;
- (id)_entitlementsForOption:(unsigned long long)arg1;
- (id)_entitlementsForOptions:(unsigned long long)arg1;
- (id)_initWithEntitlements:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)hasEntitlementDomain:(unsigned long long)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

