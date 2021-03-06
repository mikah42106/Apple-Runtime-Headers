//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFMediaPlaybackActionBuilder, HFPlaybackArchive;

@interface HFMediaActionSetting : NSObject
{
    HFMediaPlaybackActionBuilder *_mediaActionBuilder;
    long long _originalHMNonPausePlaybackState;
    HFPlaybackArchive *_playbackArchive;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFPlaybackArchive *playbackArchive; // @synthesize playbackArchive=_playbackArchive;
@property(nonatomic) long long originalHMNonPausePlaybackState; // @synthesize originalHMNonPausePlaybackState=_originalHMNonPausePlaybackState;
@property(readonly, nonatomic) HFMediaPlaybackActionBuilder *mediaActionBuilder; // @synthesize mediaActionBuilder=_mediaActionBuilder;
- (void)updatePlaybackState:(long long)arg1;
- (id)initWithActionBuilder:(id)arg1;

@end

