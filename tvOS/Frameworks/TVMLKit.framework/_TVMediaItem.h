//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/IKAppMediaItem-Protocol.h>

@class IKAppMediaItemBridge, NSMutableDictionary, NSString, NSURL, TVMediaItem;

__attribute__((visibility("hidden")))
@interface _TVMediaItem : NSObject <IKAppMediaItem>
{
    NSMutableDictionary *_metadata;
    NSURL *_url;
    NSString *_type;
    IKAppMediaItemBridge *_bridge;
    TVMediaItem *_publicObj;
}

+ (id)_tvHighlightGroupsFromObject:(id)arg1;
+ (id)_tvInterstitialsFromObject:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) TVMediaItem *publicObj; // @synthesize publicObj=_publicObj;
@property(readonly, nonatomic) IKAppMediaItemBridge *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)_forwardObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithIKAppMediaItem:(id)arg1;

@end

