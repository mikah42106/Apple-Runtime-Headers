//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MMCS/C2RequestDelegate-Protocol.h>
#import <MMCS/NSStreamDelegate-Protocol.h>
#import <MMCS/NSURLSessionDataDelegate-Protocol.h>
#import <MMCS/NSURLSessionDataDelegatePrivate-Protocol.h>
#import <MMCS/NSURLSessionDelegate-Protocol.h>
#import <MMCS/NSURLSessionTaskDelegate-Protocol.h>
#import <MMCS/NSURLSessionTaskDelegatePrivate-Protocol.h>

@class NSDictionary, NSInputStream, NSOutputStream, NSString, NSURLSession, NSURLSessionDataTask;

__attribute__((visibility("hidden")))
@interface MMCSHTTPContext : NSObject <C2RequestDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegatePrivate, NSStreamDelegate>
{
    _Bool _didOpen;
    _Bool _isValid;
    _Bool _isTaskDone;
    _Bool _requestIsStreamed;
    _Bool _isHandlingError;
    // Error parsing type: ^{mmcs_http_context={_C3Base={__CFRuntimeBase=IAI}}i{_Metricsinfo__HTTPMetricsInfo={_ProtobufCMessage=^{_ProtobufCMessageDescriptor}I^{_ProtobufCMessageUnknownField}}*iiiiidididddqqiqQQidiqiqI^{_Chunkserver__ErrorResponse}idid}^{__CFString}iddCCCCCCi^{__CFUUID}dd^{__CFError}^{__CFHTTPMessage}CQ^{_mmcs_http_request_options}dd^{__CFHTTPMessage}C^{__CFData}C^{__sFILE}^{__sFILE}{_Metricsinfo__SocketInfo={_ProtobufCMessage=^{_ProtobufCMessageDescriptor}I^{_ProtobufCMessageUnknownField}}**Ii}^{mmcs_metrics_http_info}^?^?^?^?^?^?^?^?^?^v^v^{os_activity_s}^{voucher_s}^{mmcs_read_stream_pool}^{__CFRunLoop}^{__CFArray}^{__CFData}(?=^{mmcs_cfnetwork_http_context}^{mmcs_nsurlsession_http_context}^{mmcs_curl_http_context}^v)}, name: _hc
    NSURLSession *_urlSession;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSURLSessionDataTask *_dataTask;
    NSDictionary *_timingData;
    struct os_activity_s *_activityMarker;
}

- (void).cxx_destruct;
@property(nonatomic) struct os_activity_s *activityMarker; // @synthesize activityMarker=_activityMarker;
@property(nonatomic) _Bool isHandlingError; // @synthesize isHandlingError=_isHandlingError;
@property(nonatomic) _Bool requestIsStreamed; // @synthesize requestIsStreamed=_requestIsStreamed;
@property(nonatomic) _Bool isTaskDone; // @synthesize isTaskDone=_isTaskDone;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) _Bool didOpen; // @synthesize didOpen=_didOpen;
@property(retain, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
// Error parsing type for property hc:
// Property attributes: T^{mmcs_http_context={_C3Base={__CFRuntimeBase=IAI}}i{_Metricsinfo__HTTPMetricsInfo={_ProtobufCMessage=^{_ProtobufCMessageDescriptor}I^{_ProtobufCMessageUnknownField}}*iiiiidididddqqiqQQidiqiqI^{_Chunkserver__ErrorResponse}idid}^{__CFString}iddCCCCCCi^{__CFUUID}dd^{__CFError}^{__CFHTTPMessage}CQ^{_mmcs_http_request_options}dd^{__CFHTTPMessage}C^{__CFData}C^{__sFILE}^{__sFILE}{_Metricsinfo__SocketInfo={_ProtobufCMessage=^{_ProtobufCMessageDescriptor}I^{_ProtobufCMessageUnknownField}}**Ii}^{mmcs_metrics_http_info}^?^?^?^?^?^?^?^?^?^v^v^{os_activity_s}^{voucher_s}^{mmcs_read_stream_pool}^{__CFRunLoop}^{__CFArray}^{__CFData}(?=^{mmcs_cfnetwork_http_context}^{mmcs_nsurlsession_http_context}^{mmcs_curl_http_context}^v)},N,V_hc

- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)invalidate;
- (void)cleanupResponse;
- (void)cleanupRequest;
- (void)dealloc;
- (_Bool)send;
-     // Error parsing type: @20@0:4^{mmcs_http_context={_C3Base={__CFRuntimeBase=IAI}}i{_Metricsinfo__HTTPMetricsInfo={_ProtobufCMessage=^{_ProtobufCMessageDescriptor}I^{_ProtobufCMessageUnknownField}}*iiiiidididddqqiqQQidiqiqI^{_Chunkserver__ErrorResponse}idid}^{__CFString}iddCCCCCCi^{__CFUUID}dd^{__CFError}^{__CFHTTPMessage}CQ^{_mmcs_http_request_options}dd^{__CFHTTPMessage}C^{__CFData}C^{__sFILE}^{__sFILE}{_Metricsinfo__SocketInfo={_ProtobufCMessage=^{_ProtobufCMessageDescriptor}I^{_ProtobufCMessageUnknownField}}**Ii}^{mmcs_metrics_http_info}^?^?^?^?^?^?^?^?^?^v^v^{os_activity_s}^{voucher_s}^{mmcs_read_stream_pool}^{__CFRunLoop}^{__CFArray}^{__CFData}(?=^{mmcs_cfnetwork_http_context}^{mmcs_nsurlsession_http_context}^{mmcs_curl_http_context}^v)}8r^{mmcs_http_context_options=^{__CFString}^{__CFHTTPMessage}^{_mmcs_http_request_options}ddQ^?^?^?^?^?^?^?^v^?^vCd^{os_activity_s}}12^{os_activity_s=}16, name: initWithContext:options:activityMarker:
- (_Bool)createNewRequestBodyInputStream;
- (long long)countOfRequestBodyBytesSent;
- (_Bool)requestBodyCanAcceptData;
- (void)invalidateStreamPair;
@property(readonly, copy) NSString *description;
- (void)requestBodyDone;
- (int)writeRequestBody:(const char *)arg1 maxLength:(unsigned int)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

