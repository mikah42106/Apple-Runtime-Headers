//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IASUtilities/IASInputStream.h>

@interface IASLZMAInputStream : IASInputStream
{
    BOOL _endOfFile;
    BOOL _closed;
    CDStruct_d4262b82 *_stream;
    char *_buffer;
    unsigned long long _bufferCapacity;
}

+ (void)initialize;
@property(nonatomic) BOOL closed; // @synthesize closed=_closed;
@property(nonatomic) BOOL endOfFile; // @synthesize endOfFile=_endOfFile;
@property(nonatomic) unsigned long long bufferCapacity; // @synthesize bufferCapacity=_bufferCapacity;
@property(nonatomic) char *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) CDStruct_d4262b82 *stream; // @synthesize stream=_stream;
- (unsigned long long)streamStatus;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (BOOL)forwardSeekingStreamRequiresReads;
- (long long)seekingCapability;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (id)currentLZMAErrorWithReturnValue:(int)arg1;
- (void)dealloc;

@end

