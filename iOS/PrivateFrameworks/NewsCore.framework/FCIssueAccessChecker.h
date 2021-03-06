//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCMultiAccessChecker.h>

@class FCPrivateChannelMembershipController;
@protocol FCPaidAccessCheckerType;

@interface FCIssueAccessChecker : FCMultiAccessChecker
{
    id <FCPaidAccessCheckerType> _paidAccessChecker;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // @synthesize privateChannelMembershipController=_privateChannelMembershipController;
@property(readonly, nonatomic) id <FCPaidAccessCheckerType> paidAccessChecker; // @synthesize paidAccessChecker=_paidAccessChecker;
- (id)initWithPaidAccessChecker:(id)arg1 privateChannelMembershipController:(id)arg2;
- (id)initWithAccessCheckers:(id)arg1;
- (id)init;

@end

