//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarPersistence/CALURLPublishOperation.h>

@class CalFTPOperation;

@interface CALFTPPublishOperation : CALURLPublishOperation
{
    CalFTPOperation *_ftpOperation;
}

+ (BOOL)canHandleURL:(id)arg1;
- (void).cxx_destruct;
@property(retain) CalFTPOperation *ftpOperation; // @synthesize ftpOperation=_ftpOperation;
- (void)abortOperation;
- (void)ftpOperationDidFinish:(id)arg1;
- (void)unpublishDataWithAutomatic:(BOOL)arg1;
- (void)publishData:(id)arg1 automatic:(BOOL)arg2;

@end

