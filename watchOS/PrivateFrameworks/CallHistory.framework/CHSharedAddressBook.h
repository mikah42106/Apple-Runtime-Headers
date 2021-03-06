//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CHSharedAddressBook : CHSynchronizedLoggable
{
    NSMutableDictionary *_addressBookCache;
}

+ (id)get;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *addressBookCache; // @synthesize addressBookCache=_addressBookCache;
- (id)description;
- (unsigned int)cachedCount;
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)arg1;
- (void)revertAddressBook:(id)arg1;
- (void)cleanUpAddressBookCache_sync;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)arg1;
- (void)registerForContactsNotifications;
- (void)dealloc;
- (id)init;

@end

