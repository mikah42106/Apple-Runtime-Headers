//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBWallpaperObserver-Protocol.h>

@class NSMutableSet, NSString;

@interface SBWallpaperEffectSnapshotCache : NSObject <SBWallpaperObserver>
{
    NSMutableSet *_mappedImageKeys;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)wallpaperWillChangeForVariant:(long long)arg1;
- (id)snapshotForKey:(id)arg1 withGenerationBlockIfNecessary:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

