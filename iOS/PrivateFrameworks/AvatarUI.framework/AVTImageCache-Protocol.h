//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AvatarUI/AVTResourceCache-Protocol.h>

@class UIImage;
@protocol AVTCacheableResource, AVTCacheableResourceScope;

@protocol AVTImageCache <AVTResourceCache>
- (UIImage *)imageForItem:(id <AVTCacheableResource>)arg1 scope:(id <AVTCacheableResourceScope>)arg2 cacheMissHandler:(UIImage * (^)(id <AVTCacheableResource>, id <AVTCacheableResourceScope>))arg3;
- (UIImage *)imageForItem:(id <AVTCacheableResource>)arg1 scope:(id <AVTCacheableResourceScope>)arg2;
@end

