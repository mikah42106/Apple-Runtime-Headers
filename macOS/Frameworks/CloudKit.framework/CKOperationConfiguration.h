//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainer, CKSchedulerActivity, NSDictionary, NSString;
@protocol OS_xpc_object;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _allowsCellularAccess;
    BOOL _longLived;
    BOOL _preferAnonymousRequests;
    BOOL _automaticallyRetryNetworkFailures;
    BOOL _xpcActivityAutomaticallyDefer;
    BOOL _discretionarySchedulingForEntireOperation;
    BOOL _allowsBackgroundNetworking;
    BOOL _shouldSkipZonePCSUpdate;
    BOOL _isCloudKitSupportOperation;
    BOOL _hasContainer;
    BOOL _hasAllowsCellularAccess;
    BOOL _hasLongLived;
    BOOL _hasTimeoutIntervalForRequest;
    BOOL _hasTimeoutIntervalForResource;
    BOOL _hasAutomaticallyRetryNetworkFailures;
    BOOL _hasDiscretionaryNetworkBehavior;
    BOOL _hasXPCActivity;
    BOOL _hasXPCActivityAutomaticallyDefer;
    BOOL _hasSchedulerActivity;
    BOOL _hasDiscretionarySchedulingForEntireOperation;
    BOOL _hasPreferAnonymousRequests;
    BOOL _hasAllowsBackgroundNetworking;
    BOOL _hasSourceApplicationBundleIdentifier;
    BOOL _hasSourceApplicationSecondaryIdentifier;
    BOOL _hasAdditionalRequestHTTPHeaders;
    BOOL _hasShouldSkipZonePCSUpdate;
    BOOL _hasIsCloudKitSupportOperation;
    BOOL _hasQualityOfService;
    CKContainer *_container;
    long long _qualityOfService;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    unsigned long long _discretionaryNetworkBehavior;
    NSObject<OS_xpc_object> *_xpcActivity;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSDictionary *_additionalRequestHTTPHeaders;
    CKSchedulerActivity *_schedulerActivity;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL hasQualityOfService; // @synthesize hasQualityOfService=_hasQualityOfService;
@property(retain, nonatomic) CKSchedulerActivity *schedulerActivity; // @synthesize schedulerActivity=_schedulerActivity;
@property(nonatomic) BOOL hasIsCloudKitSupportOperation; // @synthesize hasIsCloudKitSupportOperation=_hasIsCloudKitSupportOperation;
@property(nonatomic) BOOL hasShouldSkipZonePCSUpdate; // @synthesize hasShouldSkipZonePCSUpdate=_hasShouldSkipZonePCSUpdate;
@property(nonatomic) BOOL hasAdditionalRequestHTTPHeaders; // @synthesize hasAdditionalRequestHTTPHeaders=_hasAdditionalRequestHTTPHeaders;
@property(nonatomic) BOOL hasSourceApplicationSecondaryIdentifier; // @synthesize hasSourceApplicationSecondaryIdentifier=_hasSourceApplicationSecondaryIdentifier;
@property(nonatomic) BOOL hasSourceApplicationBundleIdentifier; // @synthesize hasSourceApplicationBundleIdentifier=_hasSourceApplicationBundleIdentifier;
@property(nonatomic) BOOL hasAllowsBackgroundNetworking; // @synthesize hasAllowsBackgroundNetworking=_hasAllowsBackgroundNetworking;
@property(nonatomic) BOOL hasPreferAnonymousRequests; // @synthesize hasPreferAnonymousRequests=_hasPreferAnonymousRequests;
@property(nonatomic) BOOL hasDiscretionarySchedulingForEntireOperation; // @synthesize hasDiscretionarySchedulingForEntireOperation=_hasDiscretionarySchedulingForEntireOperation;
@property(nonatomic) BOOL hasSchedulerActivity; // @synthesize hasSchedulerActivity=_hasSchedulerActivity;
@property(nonatomic) BOOL hasXPCActivityAutomaticallyDefer; // @synthesize hasXPCActivityAutomaticallyDefer=_hasXPCActivityAutomaticallyDefer;
@property(nonatomic) BOOL hasXPCActivity; // @synthesize hasXPCActivity=_hasXPCActivity;
@property(nonatomic) BOOL hasDiscretionaryNetworkBehavior; // @synthesize hasDiscretionaryNetworkBehavior=_hasDiscretionaryNetworkBehavior;
@property(nonatomic) BOOL hasAutomaticallyRetryNetworkFailures; // @synthesize hasAutomaticallyRetryNetworkFailures=_hasAutomaticallyRetryNetworkFailures;
@property(nonatomic) BOOL hasTimeoutIntervalForResource; // @synthesize hasTimeoutIntervalForResource=_hasTimeoutIntervalForResource;
@property(nonatomic) BOOL hasTimeoutIntervalForRequest; // @synthesize hasTimeoutIntervalForRequest=_hasTimeoutIntervalForRequest;
@property(nonatomic) BOOL hasLongLived; // @synthesize hasLongLived=_hasLongLived;
@property(nonatomic) BOOL hasAllowsCellularAccess; // @synthesize hasAllowsCellularAccess=_hasAllowsCellularAccess;
@property(nonatomic) BOOL hasContainer; // @synthesize hasContainer=_hasContainer;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity; // @synthesize xpcActivity=_xpcActivity;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property(retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(nonatomic) BOOL allowsBackgroundNetworking; // @synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking;
@property(nonatomic) BOOL isCloudKitSupportOperation; // @synthesize isCloudKitSupportOperation=_isCloudKitSupportOperation;
@property(nonatomic) BOOL shouldSkipZonePCSUpdate; // @synthesize shouldSkipZonePCSUpdate=_shouldSkipZonePCSUpdate;
@property(nonatomic) BOOL preferAnonymousRequests; // @synthesize preferAnonymousRequests=_preferAnonymousRequests;
@property(nonatomic) BOOL discretionarySchedulingForEntireOperation; // @synthesize discretionarySchedulingForEntireOperation=_discretionarySchedulingForEntireOperation;
@property(nonatomic) BOOL xpcActivityAutomaticallyDefer; // @synthesize xpcActivityAutomaticallyDefer=_xpcActivityAutomaticallyDefer;
@property(nonatomic) unsigned long long discretionaryNetworkBehavior; // @synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior;
- (void)setAutomaticallyRetryNetworkFailuresIfNotSet:(BOOL)arg1;
@property(nonatomic) BOOL automaticallyRetryNetworkFailures; // @synthesize automaticallyRetryNetworkFailures=_automaticallyRetryNetworkFailures;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic, getter=isLongLived) BOOL longLived; // @synthesize longLived=_longLived;
@property(nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
- (void)setQualityOfServiceWithoutQoSChecks:(long long)arg1;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (id)resolveAgainstGenericConfiguration:(id)arg1;
- (id)init;

@end

