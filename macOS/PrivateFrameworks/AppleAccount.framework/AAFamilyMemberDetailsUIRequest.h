//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAFamilyRequest.h>

@class NSNumber, NSString;

@interface AAFamilyMemberDetailsUIRequest : AAFamilyRequest
{
    NSNumber *_memberDSID;
    NSString *_memberEmail;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *memberEmail; // @synthesize memberEmail=_memberEmail;
@property(copy, nonatomic) NSNumber *memberDSID; // @synthesize memberDSID=_memberDSID;
- (id)urlRequest;
- (id)urlString;
- (BOOL)isUserInitiated;

@end

