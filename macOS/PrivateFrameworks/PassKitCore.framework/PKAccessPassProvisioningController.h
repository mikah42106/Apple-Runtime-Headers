//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKAccessPassProvisioningCoordinator;
@protocol PKAccessPassProvisioningControllerDelegate;

@interface PKAccessPassProvisioningController : NSObject
{
    PKAccessPassProvisioningCoordinator *_coordinator;
}

+ (BOOL)canAddAccessPassWithConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PKAccessPassProvisioningControllerDelegate> delegate;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

