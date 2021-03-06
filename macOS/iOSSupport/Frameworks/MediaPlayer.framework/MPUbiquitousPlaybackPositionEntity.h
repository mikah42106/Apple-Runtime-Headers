//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPUbiquitousPlaybackPositionEntity : NSObject
{
    BOOL _hasBeenPlayed;
    NSString *_ubiquitousIdentifier;
    double _bookmarkTimestamp;
    double _bookmarkTime;
    unsigned long long _userPlayCount;
}

+ (id)ubiquitousIdentifierWithStoreAdamID:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(nonatomic) unsigned long long userPlayCount; // @synthesize userPlayCount=_userPlayCount;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(nonatomic) double bookmarkTimestamp; // @synthesize bookmarkTimestamp=_bookmarkTimestamp;
@property(readonly, copy, nonatomic) NSString *ubiquitousIdentifier; // @synthesize ubiquitousIdentifier=_ubiquitousIdentifier;
- (BOOL)bookmarkTimestampModified;
- (BOOL)bookmarkTimeModified;
- (BOOL)userPlayCountModified;
- (BOOL)hasBeenPlayedModified;
- (id)init;
- (id)initWithUbiquitousIdentifier:(id)arg1;

@end

