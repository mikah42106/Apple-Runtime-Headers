//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NFFieldNotification, NFReaderSession, NFTechnologyEvent, NSArray, NSError;

@protocol NFReaderSessionDelegate <NSObject>

@optional
- (void)readerSession:(NFReaderSession *)arg1 externalReaderFieldNotification:(NFFieldNotification *)arg2;
- (void)readerSession:(NFReaderSession *)arg1 externalReaderFieldEvent:(NFTechnologyEvent *)arg2;
- (void)readerSessionDidEndUnexpectedly:(NFReaderSession *)arg1 reason:(NSError *)arg2;
- (void)readerSessionDidEndUnexpectedly:(NFReaderSession *)arg1;
- (void)readerSession:(NFReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
@end

