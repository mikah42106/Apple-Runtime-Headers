//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BiometricKit/BKOperation.h>

@class BKIdentity, NSData;
@protocol BKExtendEnrollTouchIDOperationDelegate;

@interface BKExtendEnrollTouchIDOperation : BKOperation
{
    BKIdentity *_identity;
    NSData *_credentialSet;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *credentialSet; // @synthesize credentialSet=_credentialSet;
@property(retain, nonatomic) BKIdentity *identity; // @synthesize identity=_identity;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)startBioOperation:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;

// Remaining properties
@property(nonatomic) __weak id <BKExtendEnrollTouchIDOperationDelegate> delegate; // @dynamic delegate;

@end

