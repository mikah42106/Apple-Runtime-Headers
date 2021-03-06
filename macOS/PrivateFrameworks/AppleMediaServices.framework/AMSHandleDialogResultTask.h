//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSDialogRequest, AMSDialogResult, AMSProcessInfo, NSError, NSString;
@protocol AMSBagProtocol;

@interface AMSHandleDialogResultTask : AMSTask
{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSError *_error;
    AMSProcessInfo *_clientInfo;
    NSString *_proxyBundleId;
    AMSDialogRequest *_request;
    AMSDialogResult *_result;
}

- (void).cxx_destruct;
@property(readonly) AMSDialogResult *result; // @synthesize result=_result;
@property(readonly) AMSDialogRequest *request; // @synthesize request=_request;
@property(copy) NSString *proxyBundleId; // @synthesize proxyBundleId=_proxyBundleId;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, copy) NSError *error; // @synthesize error=_error;
@property(readonly) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(copy) ACAccount *account; // @synthesize account=_account;
- (id)_handleAskPermissionRequestWithURL:(id)arg1 account:(id)arg2;
- (id)perform;
- (id)initWithRequest:(id)arg1 result:(id)arg2 error:(id)arg3 bag:(id)arg4;

@end

