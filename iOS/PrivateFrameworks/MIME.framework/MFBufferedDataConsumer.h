//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFGuaranteedCollectingDataConsumer-Protocol.h>

@class NSMutableData, NSString;

@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer>
{
    NSMutableData *_data;
    int _fd;
    NSString *_path;
}

- (void)done;
- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

