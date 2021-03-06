//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL, NSURLSessionConfiguration, OspreyAbsintheAuthenticator, OspreyConnectionPreferences, OspreyGRPCChannel;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface OspreyChannel : NSObject
{
    NSURL *_url;
    NSURLSessionConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    OspreyGRPCChannel *_channel;
    OspreyAbsintheAuthenticator *_authenticator;
    NSObject<OS_dispatch_group> *_validationGroup;
    BOOL _waitingForSignature;
    NSError *_signatureError;
    OspreyConnectionPreferences *_connectionPreferences;
    BOOL _useAbsinthe;
    BOOL _forceHTTPv2;
    NSString *_clientTraceId;
    CDUnknownBlockType _connectionMetricsHandler;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType connectionMetricsHandler; // @synthesize connectionMetricsHandler=_connectionMetricsHandler;
@property(copy, nonatomic) NSString *clientTraceId; // @synthesize clientTraceId=_clientTraceId;
@property(nonatomic) BOOL forceHTTPv2; // @synthesize forceHTTPv2=_forceHTTPv2;
@property(nonatomic) BOOL useAbsinthe; // @synthesize useAbsinthe=_useAbsinthe;
- (void)initializeAbsintheSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)preconnect;
- (void)setUseCompression:(BOOL)arg1;
- (id)performBidirectionalStreamingRequest:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)performBidirectionalStreamingCallContextWithMethodName:(id)arg1 data:(id)arg2 handler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performStreamingRequest:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performStreamingCallForMethodName:(id)arg1 data:(id)arg2 handler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)performCallForMethodName:(id)arg1 data:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_on_queue_getChannelWithHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSURL *absintheServer;
- (CDUnknownBlockType)getConnectionMetricsHandler;
- (id)initWithURL:(id)arg1 configuration:(id)arg2 useCache:(BOOL)arg3;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;

@end

