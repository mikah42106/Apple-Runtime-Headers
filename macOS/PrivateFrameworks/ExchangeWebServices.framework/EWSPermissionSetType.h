//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSArray, NSString;

@interface EWSPermissionSetType : NSObject <XSDefinitionProvider>
{
    NSArray *_Permissions;
    NSArray *_UnknownEntries;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *UnknownEntries; // @synthesize UnknownEntries=_UnknownEntries;
@property(copy, nonatomic) NSArray *Permissions; // @synthesize Permissions=_Permissions;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

