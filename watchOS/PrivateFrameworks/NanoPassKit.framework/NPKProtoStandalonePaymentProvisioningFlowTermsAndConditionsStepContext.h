//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandalonePaymentSetupProduct, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext : PBCodable <NSCopying>
{
    NPKProtoStandalonePaymentSetupProduct *_product;
    NSString *_termsURL;
    _Bool _allowNonSecureHTTP;
    struct {
        unsigned int allowNonSecureHTTP:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NPKProtoStandalonePaymentSetupProduct *product; // @synthesize product=_product;
@property(nonatomic) _Bool allowNonSecureHTTP; // @synthesize allowNonSecureHTTP=_allowNonSecureHTTP;
@property(retain, nonatomic) NSString *termsURL; // @synthesize termsURL=_termsURL;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasProduct;
@property(nonatomic) _Bool hasAllowNonSecureHTTP;
@property(readonly, nonatomic) _Bool hasTermsURL;

@end

