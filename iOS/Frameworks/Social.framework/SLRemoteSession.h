//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, SLDatabase;

@interface SLRemoteSession : NSObject
{
    NSXPCConnection *_connection;
    SLDatabase *_database;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SLDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)clientHasEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1 database:(id)arg2;

@end

