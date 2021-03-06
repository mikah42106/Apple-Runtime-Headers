//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>

@class CLInUseAssertion, NSArray, NSObject, NSString, PKAddPaymentPassRequest, PKAddPaymentPassRequestConfiguration, PKPasscodeUpgradeFlowController, PKPaymentProvisioningController, PKPaymentProvisioningTracker, PKPaymentWebService, PKTableHeaderView;
@protocol NSObject, OS_dispatch_source, PKAddPaymentPassRequestViewControllerDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKAddPaymentPassRequestViewController : UITableViewController <PKPaymentSetupViewControllerDelegate>
{
    NSString *_title;
    NSString *_subtitle;
    NSArray *_details;
    int _headerState;
    id <NSObject> _notificationToken;
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
    PKPaymentProvisioningController *_provisioningController;
    PKAddPaymentPassRequestConfiguration *_configuration;
    CLInUseAssertion *_passbookForegroundAssertion;
    NSObject<OS_dispatch_source> *_datasourceTimeout;
    PKAddPaymentPassRequest *_addRequest;
    struct CGSize _lastBoundsSize;
    _Bool _offsetForTextfieldWasCalculated;
    float _offsetForTextfield;
    _Bool _viewAppearing;
    _Bool _preconditionsValidated;
    PKTableHeaderView *_headerView;
    PKPaymentProvisioningTracker *_provisioningTracker;
    _Bool _hidePrivacy;
    _Bool _singleTarget;
    id <PKAddPaymentPassRequestViewControllerDelegate> _delegate;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentWebService *_webService;
}

+ (id)backgroundColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(nonatomic) __weak id <PKAddPaymentPassRequestViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool singleTarget; // @synthesize singleTarget=_singleTarget;
@property(nonatomic) _Bool hidePrivacy; // @synthesize hidePrivacy=_hidePrivacy;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1;
- (void)_promptHSA2Required;
- (void)_handleRawResponseData:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentDisplayableError:(id)arg1 allowEarlyExit:(_Bool)arg2;
- (void)_presentDisplayableError:(id)arg1;
- (void)_setupTermsControllerHandlerWithNavigationController:(id)arg1 forCompletion:(CDUnknownBlockType)arg2;
- (void)_cancelDatasourceTimeout;
- (void)_showEligibilityIssueForStatus:(int)arg1 learnMoreURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_displayTermsForEligibilityResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_performMoreInfoItemPush;
- (void)_performProvisioning:(id)arg1;
- (void)_performTerms:(id)arg1;
- (void)_performPasscodeUpgradeIfNeeded;
- (void)_performEligibility;
- (void)_fetchAddRequestWithCertificatesResponse:(id)arg1;
- (void)_fetchCertificates;
- (void)_performPreconditionValidation;
- (void)_performNextProvisioningStep;
- (void)_handleAdd:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_applyHeaderState;
- (void)_updateHeaderSize;
- (void)_updateHeaderWithSubtitle:(id)arg1;
- (id)_titleForCurrentHeaderState;
- (void)_setHeaderState:(int)arg1;
- (void)_setNavigationBarEnabled:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)hostApplicationDidEnterBackground;
- (void)noteNavigationUserInterfaceDidDisappear;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithPaymentWebService:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

