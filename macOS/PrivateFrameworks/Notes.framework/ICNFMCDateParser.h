//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICNFMCDateParser : NSObject
{
}

+ (id)_dateStringByStrippingCommentsFromString:(id)arg1;
+ (id)_fallbackDateFormaters;
+ (id)_commonDateFormatters;
+ (id)_imapDateFormatter;
+ (id)_dateFromString:(id)arg1 imapFirst:(BOOL)arg2;
+ (id)dateFromInternetMessageDateString:(id)arg1;
+ (id)dateFromIMAPDateString:(id)arg1;

@end

