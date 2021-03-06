//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TSUQuicklookAssetColorMap : NSObject
{
    NSMutableDictionary *mAssetMap;
    NSString *mAppAssetPath;
}

+ (id)locatorForSageChartTextureSet:(id)arg1 image:(id)arg2;
+ (id)colorForResource:(id)arg1;
+ (_Bool)hasAppAssets;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)quicklookAssetMap;
@property(retain, nonatomic) NSString *appAssetPath; // @synthesize appAssetPath=mAppAssetPath;
@property(retain, nonatomic) NSMutableDictionary *assetMap; // @synthesize assetMap=mAssetMap;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

