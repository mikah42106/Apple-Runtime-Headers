//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, REMListChangeItem;

@interface REMListCalDAVNotificationContextChangeItem : NSObject
{
    REMListChangeItem *_listChangeItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) REMListChangeItem *listChangeItem; // @synthesize listChangeItem=_listChangeItem;
- (void)updateCalDAVNotification:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)clearCalDAVNotifications;
- (void)removeCalDAVNotication:(id)arg1;
- (void)_addCalDAVNotification:(id)arg1;
- (id)addCalDAVNotificationWithUUIDString:(id)arg1 hostURL:(id)arg2 externalIdentifier:(id)arg3 externalModificationTag:(id)arg4;
@property(readonly, nonatomic) NSArray *calDAVNotifications;
- (id)initWithListChangeItem:(id)arg1;

@end

