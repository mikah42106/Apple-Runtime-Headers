//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPSceneProcessingImageManager : NSObject
{
    struct CF<__CVPixelBufferPool *> _pixelBufferPoolBGRA;
}

+ (id)imageManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)loadPixelBuffer:(struct __CVBuffer **)arg1 fromImageURL:(id)arg2;
- (int)createPixelBufferPool;
- (void)dealloc;

@end

