//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>
#import <TelephonyUtilities/TUCallRequest-Protocol.h>
#import <TelephonyUtilities/TUFilteredRequest-Protocol.h>
#import <TelephonyUtilities/TUVideoRequest-Protocol.h>

@class BSProcessHandle, IDSDestination, NSArray, NSDate, NSString, NSURL, NSUUID, NSUserActivity, TUCallProvider, TUCallProviderManager, TUHandle, TUSenderIdentity, TUSenderIdentityClient;

@interface TUDialRequest : NSObject <TUCallRequest, TUVideoRequest, TUFilteredRequest, NSSecureCoding, NSCopying>
{
    BOOL _video;
    BOOL _performDialAssist;
    BOOL _performLocalDialAssist;
    BOOL _dialAssisted;
    BOOL _showUIPrompt;
    BOOL _hostOnCurrentDevice;
    BOOL _endpointOnCurrentDevice;
    BOOL _sos;
    BOOL _redial;
    BOOL _shouldSuppressInCallUI;
    NSString *_uniqueProxyIdentifier;
    TUSenderIdentityClient *_senderIdentityClient;
    TUCallProvider *_provider;
    long long _dialType;
    TUHandle *_handle;
    NSString *_contactIdentifier;
    NSString *_providerCustomIdentifier;
    NSString *_audioSourceIdentifier;
    long long _ttyType;
    TUCallProviderManager *_providerManager;
    CDUnknownBlockType _isEmergencyNumberBlock;
    CDUnknownBlockType _isEmergencyNumberOrIsWhitelistedBlock;
    NSDate *_dateDialed;
    NSString *_endpointIDSDestinationURI;
    NSString *_endpointRapportMediaSystemIdentifier;
    NSString *_endpointRapportEffectiveIdentifier;
    NSUUID *_localSenderIdentityUUID;
    NSUUID *_localSenderIdentityAccountUUID;
    long long _originatingUIType;
    NSString *_successNotification;
    NSString *_failureNotification;
    BSProcessHandle *_processHandle;
    struct CGSize _localPortraitAspectRatio;
    struct CGSize _localLandscapeAspectRatio;
}

+ (BOOL)supportsSecureCoding;
+ (void)setCallProviderManagerGeneratorBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)callProviderManagerGeneratorBlock;
+ (id)contactStore;
+ (long long)originatingUITypeForString:(id)arg1;
+ (id)stringForOriginatingUIType:(long long)arg1;
+ (id)providerForIntentPreferredCallProvider:(long long)arg1 callCapability:(long long)arg2 providerManager:(id)arg3;
+ (long long)ttyTypeForIntentTTYType:(long long)arg1;
+ (long long)intentTTYTypeForTTYType:(long long)arg1;
+ (long long)dialRequestTypeForIntentDestinationType:(long long)arg1;
+ (long long)ttyTypeForString:(id)arg1;
+ (id)stringForTTYType:(long long)arg1;
+ (long long)handleTypeForQueryItem:(id)arg1;
+ (id)stringForDialType:(long long)arg1;
+ (long long)dialRequestTTYTypeForCHRecentCallTTYType:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
@property(copy, nonatomic) NSString *failureNotification; // @synthesize failureNotification=_failureNotification;
@property(copy, nonatomic) NSString *successNotification; // @synthesize successNotification=_successNotification;
@property(nonatomic) BOOL shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(nonatomic, getter=isRedial) BOOL redial; // @synthesize redial=_redial;
@property(nonatomic, getter=isSOS, setter=setSOS:) BOOL sos; // @synthesize sos=_sos;
@property(nonatomic) long long originatingUIType; // @synthesize originatingUIType=_originatingUIType;
@property(copy, nonatomic) NSUUID *localSenderIdentityAccountUUID; // @synthesize localSenderIdentityAccountUUID=_localSenderIdentityAccountUUID;
@property(copy, nonatomic) NSUUID *localSenderIdentityUUID; // @synthesize localSenderIdentityUUID=_localSenderIdentityUUID;
@property(copy, nonatomic) NSString *endpointRapportEffectiveIdentifier; // @synthesize endpointRapportEffectiveIdentifier=_endpointRapportEffectiveIdentifier;
@property(copy, nonatomic) NSString *endpointRapportMediaSystemIdentifier; // @synthesize endpointRapportMediaSystemIdentifier=_endpointRapportMediaSystemIdentifier;
@property(copy, nonatomic) NSString *endpointIDSDestinationURI; // @synthesize endpointIDSDestinationURI=_endpointIDSDestinationURI;
@property(nonatomic) BOOL endpointOnCurrentDevice; // @synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice;
@property(nonatomic) BOOL hostOnCurrentDevice; // @synthesize hostOnCurrentDevice=_hostOnCurrentDevice;
@property(retain, nonatomic) NSDate *dateDialed; // @synthesize dateDialed=_dateDialed;
@property(copy, nonatomic) CDUnknownBlockType isEmergencyNumberOrIsWhitelistedBlock; // @synthesize isEmergencyNumberOrIsWhitelistedBlock=_isEmergencyNumberOrIsWhitelistedBlock;
@property(copy, nonatomic) CDUnknownBlockType isEmergencyNumberBlock; // @synthesize isEmergencyNumberBlock=_isEmergencyNumberBlock;
@property(readonly, nonatomic) TUCallProviderManager *providerManager; // @synthesize providerManager=_providerManager;
@property(nonatomic) BOOL showUIPrompt; // @synthesize showUIPrompt=_showUIPrompt;
@property(nonatomic) long long ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic, getter=isDialAssisted) BOOL dialAssisted; // @synthesize dialAssisted=_dialAssisted;
@property(nonatomic) BOOL performLocalDialAssist; // @synthesize performLocalDialAssist=_performLocalDialAssist;
@property(nonatomic) BOOL performDialAssist; // @synthesize performDialAssist=_performDialAssist;
@property(copy, nonatomic) NSString *audioSourceIdentifier; // @synthesize audioSourceIdentifier=_audioSourceIdentifier;
@property(nonatomic, getter=isVideo) BOOL video; // @synthesize video=_video;
@property(copy, nonatomic) NSString *providerCustomIdentifier; // @synthesize providerCustomIdentifier=_providerCustomIdentifier;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) long long dialType; // @synthesize dialType=_dialType;
@property(retain, nonatomic) TUCallProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) struct CGSize localLandscapeAspectRatio; // @synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio;
@property(nonatomic) struct CGSize localPortraitAspectRatio; // @synthesize localPortraitAspectRatio=_localPortraitAspectRatio;
@property(copy, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToDialRequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)_contactFromINPerson:(id)arg1 contactsDataSource:(id)arg2 bestGuessHandle:(id *)arg3;
- (id)dialRequestByReplacingProvider:(id)arg1;
- (id)validityErrorForSOS;
- (id)validityErrorForUnsupportedHandleType;
- (id)validityErrorForNormalDialTypeWithUnknownDestination;
- (id)validityErrorForVideoUnsupported;
- (id)validityErrorForEmergencyCall;
- (id)validityErrorForEndpointNotOnCurrentDeviceForNonRelayableService;
- (id)validityErrorForNonNormalDialTypeWithoutTelephony;
- (id)validityErrorForDestinationIDWithVoicemail;
- (id)validityErrorForUnspecifiedProvider;
@property(readonly, copy, nonatomic) NSArray *validityErrors;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)userActivityUsingDeprecatedCallingIntents:(BOOL)arg1;
@property(readonly, nonatomic) NSUserActivity *userActivity;
- (id)failureNotificationQueryItem;
- (id)successNotificationQueryItem;
- (id)shouldSuppressInCallUIQueryItem;
- (id)endpointRapportEffectiveIdentifierQueryItem;
- (id)endpointRapportMediaSystemIdentifierQueryItem;
- (id)endpointIDSDestinationURIQueryItem;
- (id)redialURLQueryItem;
- (id)sosURLQueryItem;
- (id)noPromptURLQueryItem;
- (id)originatingUIURLQueryItem;
- (id)ttyTypeURLQueryItem;
- (id)handleTypeURLQueryItem;
- (id)dialAssistedURLQueryItem;
- (id)suppressAssistURLQueryItem;
- (id)forceAssistURLQueryItem;
- (id)audioSourceIdentifierURLQueryItem;
- (id)localSenderIdentityAccountUUIDURLQueryItem;
- (id)localSenderIdentityUUIDURLQueryItem;
- (id)providerCustomIdentifierURLQueryItem;
- (id)contactIdentifierURLQueryItem;
- (id)isVoicemailURLQueryItem;
- (id)URLQueryItems;
- (id)URLHost;
- (id)URLScheme;
@property(readonly, nonatomic) NSURL *URL;
- (id)legacyAddressBookIdentifierQueryItemName;
- (id)contactIdentifierFromURLComponents:(id)arg1;
- (id)handleFromURL:(id)arg1;
- (id)destinationIDFromURL:(id)arg1;
- (id)callProviderFromURLComponents:(id)arg1 video:(char *)arg2;
- (BOOL)boolValueForQueryItemWithName:(id)arg1 inURLComponents:(id)arg2;
- (id)contactNamesByHandleWithContactsDataSource:(id)arg1;
- (id)handles;
- (id)bundleIdentifier;
@property(readonly, nonatomic) IDSDestination *endpointIDSDestination;
@property(copy, nonatomic) NSString *destinationID;
@property(readonly, nonatomic) TUSenderIdentityClient *senderIdentityClient; // @synthesize senderIdentityClient=_senderIdentityClient;
@property(readonly, copy, nonatomic) TUSenderIdentity *localSenderIdentity;
@property(readonly, nonatomic) BOOL useTTY;
@property(readonly, nonatomic) int service;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithDialIntent:(id)arg1 providerManager:(id)arg2 contactsDataSource:(id)arg3 senderIdentityClient:(id)arg4;
- (id)initWithUserActivity:(id)arg1 providerManager:(id)arg2 contactsDataSource:(id)arg3 senderIdentityClient:(id)arg4;
- (id)initWithUserActivity:(id)arg1 providerManager:(id)arg2;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithService:(int)arg1;
- (id)initWithProvider:(id)arg1;
@property(readonly, nonatomic, getter=isTTYAvailable) BOOL ttyAvailable;
@property(readonly, nonatomic, getter=isRTTAvailable) BOOL rttAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

