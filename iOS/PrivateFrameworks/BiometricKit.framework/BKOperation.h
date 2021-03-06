//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDevice;
@protocol BKOperationDelegate, OS_dispatch_queue;

@interface BKOperation : NSObject
{
    BKDevice *_device;
    id <BKOperationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <BKOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BKDevice *device; // @synthesize device=_device;
- (id)userPresentWithError:(id *)arg1;
- (void)cancel;
- (void)startWithReply:(CDUnknownBlockType)arg1;
- (_Bool)startWithError:(id *)arg1;

@end

