//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCloudAccountOperation : NSOperation
{
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_clientQueue;
    CDUnknownBlockType _operationBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)main;
- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1 clientQueue:(id)arg2;

@end

