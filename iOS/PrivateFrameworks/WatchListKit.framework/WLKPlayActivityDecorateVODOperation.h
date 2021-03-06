//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray, NSDictionary;

@interface WLKPlayActivityDecorateVODOperation : WLKUTSNetworkRequestOperation
{
    NSArray *_playActivityIdentifiers;
    NSDictionary *_metadataByIdentifier;
}

+ (id)identifierForPlayActivityID:(id)arg1 channelID:(id)arg2 duration:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *metadataByIdentifier; // @synthesize metadataByIdentifier=_metadataByIdentifier;
@property(readonly, copy, nonatomic) NSArray *playActivityIdentifiers; // @synthesize playActivityIdentifiers=_playActivityIdentifiers;
- (void)processResponse;
- (id)initWithIdentifiers:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

