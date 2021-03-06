//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDNetworkRouterFirewallRule : HMFObject <HMFLogging>
{
    _Bool _critical;
    NSString *_name;
    NSDictionary *_jsonDictionary;
}

+ (id)__transportProtocolToString:(unsigned char)arg1;
+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
@property(readonly, nonatomic, getter=isCritical) _Bool critical; // @synthesize critical=_critical;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(id)arg1 critical:(_Bool)arg2;
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

