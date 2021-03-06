//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface MPMediaLibraryAlbumAppData : NSObject
{
    int _version;
    NSDictionary *_appDataDict;
    NSMutableDictionary *_dirtyPopularityDict;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int version; // @synthesize version=_version;
- (id)createAppDataDictionary;
- (id)songPopularityForAdamID:(long long)arg1;
- (void)setSongPopularity:(id)arg1 forAdamID:(long long)arg2;
- (id)songPopularityForIdentifiers:(id)arg1;
- (void)setSongPopularity:(id)arg1 forIdentifierSet:(id)arg2;
- (id)initWithAppDataDictionary:(id)arg1;
- (id)init;

@end

