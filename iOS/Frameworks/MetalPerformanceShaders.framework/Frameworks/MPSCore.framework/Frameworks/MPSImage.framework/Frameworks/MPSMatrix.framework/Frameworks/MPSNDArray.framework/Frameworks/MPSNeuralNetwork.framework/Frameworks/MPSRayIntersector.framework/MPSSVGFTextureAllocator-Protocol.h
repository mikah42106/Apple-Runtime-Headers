//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSRayIntersector/NSObject-Protocol.h>

@protocol MTLTexture;

@protocol MPSSVGFTextureAllocator <NSObject>
- (void)returnTexture:(id <MTLTexture>)arg1;
- (id <MTLTexture>)textureWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
@end

