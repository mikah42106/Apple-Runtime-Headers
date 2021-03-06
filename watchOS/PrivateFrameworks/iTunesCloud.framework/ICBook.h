//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL;

@interface ICBook : NSObject <NSSecureCoding>
{
    _Bool _vppLicensed;
    NSString *_title;
    NSString *_author;
    NSString *_genre;
    NSDate *_datePurchased;
    NSURL *_artworkURL;
    NSString *_redownloadParameters;
    NSString *_vppOrganizationID;
    NSString *_vppOrganizationDisplayName;
    unsigned long long _purchaseHistoryID;
    unsigned long long _storeID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *vppOrganizationDisplayName; // @synthesize vppOrganizationDisplayName=_vppOrganizationDisplayName;
@property(copy, nonatomic) NSString *vppOrganizationID; // @synthesize vppOrganizationID=_vppOrganizationID;
@property(nonatomic, getter=isVPPLicensed) _Bool vppLicensed; // @synthesize vppLicensed=_vppLicensed;
@property(copy, nonatomic) NSString *redownloadParameters; // @synthesize redownloadParameters=_redownloadParameters;
@property(copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(copy, nonatomic) NSDate *datePurchased; // @synthesize datePurchased=_datePurchased;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long storeID; // @synthesize storeID=_storeID;
@property(nonatomic) unsigned long long purchaseHistoryID; // @synthesize purchaseHistoryID=_purchaseHistoryID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

