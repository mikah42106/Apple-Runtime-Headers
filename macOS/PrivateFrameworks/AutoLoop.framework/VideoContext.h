//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext, NSDictionary, VideoWriter;

@interface VideoContext : NSObject
{
    _Bool _colorManagement;
    unsigned int pixelFormatFlags;
    unsigned int pixelFormat;
    CIContext *ciCtx;
    VideoWriter *writer;
    NSDictionary *pixelAttrs;
}

- (void).cxx_destruct;
@property _Bool colorManagement; // @synthesize colorManagement=_colorManagement;
@property(readonly) unsigned int pixelFormat; // @synthesize pixelFormat;
@property(readonly) NSDictionary *pixelAttrs; // @synthesize pixelAttrs;
@property(readonly) unsigned int pixelFormatFlags; // @synthesize pixelFormatFlags;
@property(readonly) VideoWriter *writer; // @synthesize writer;
@property(readonly) CIContext *ciCtx; // @synthesize ciCtx;
- (int)appendFrame:(id)arg1 frameTime:(CDStruct_1b6d18a9)arg2 srcPixBuf:(struct __CVBuffer *)arg3;
- (_Bool)pixelBuffer:(struct __CVBuffer *)arg1 conformsToImage:(id)arg2;
- (struct __CVBuffer *)pixelBufferFromImage:(id)arg1;
- (struct __CVBuffer *)pixelBufferFromImage:(id)arg1 withAttachFrom:(struct __CVBuffer *)arg2;
- (struct __CVBuffer *)createPixelBuffer;
- (struct __CVBuffer *)createPixelBuffer:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)initWithWriter:(id)arg1 pixelFormatFlags:(unsigned int)arg2;
- (id)initWithWriter:(id)arg1 pixelFormatFlags:(unsigned int)arg2 colorManagement:(_Bool)arg3;

@end

