//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate, NSTimeZone;

@interface RETimeContentProvider : RETextContentProvider
{
    NSDate *_date;
    NSTimeZone *_timeZone;
}

+ (id)timeContentProviderWithDate:(id)arg1 timeZone:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)attributedStringRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)clockKitTextProviderRepresentation;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDate:(id)arg1 timeZone:(id)arg2;

@end

