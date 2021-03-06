//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKPlayer, NSMutableArray, NSMutableDictionary;

@interface GKMatchEventQueue : NSObject
{
    GKPlayer *_player;
    GKPlayer *_hostPlayer;
    NSMutableArray *_events;
    NSMutableDictionary *_connectionInfo;
    long long _playerState;
    long long _deferedPlayerState;
    unsigned int _sequenceNumber;
    BOOL _counted;
    BOOL _okToSend;
    BOOL _relayInitiated;
    BOOL _hasInitRelayInfo;
    BOOL _hasUpdateRelayInfo;
}

@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) BOOL hasUpdateRelayInfo; // @synthesize hasUpdateRelayInfo=_hasUpdateRelayInfo;
@property(nonatomic) BOOL hasInitRelayInfo; // @synthesize hasInitRelayInfo=_hasInitRelayInfo;
@property(nonatomic) BOOL relayInitiated; // @synthesize relayInitiated=_relayInitiated;
@property(retain, nonatomic) NSMutableDictionary *connectionInfo; // @synthesize connectionInfo=_connectionInfo;
@property(nonatomic) BOOL okToSend; // @synthesize okToSend=_okToSend;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(nonatomic) long long deferedPlayerState; // @synthesize deferedPlayerState=_deferedPlayerState;
@property(nonatomic) BOOL counted; // @synthesize counted=_counted;
@property(nonatomic) long long playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) GKPlayer *hostPlayer; // @synthesize hostPlayer=_hostPlayer;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)dealloc;
- (id)init;

@end

