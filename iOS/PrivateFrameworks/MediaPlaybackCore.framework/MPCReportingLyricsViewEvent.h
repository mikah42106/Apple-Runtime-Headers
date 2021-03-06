//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPModelPlayEvent, MPModelSong, NSData, NSString;

@interface MPCReportingLyricsViewEvent : NSObject
{
    MPModelSong *_modelSong;
    MPModelPlayEvent *_modelPlayEvent;
    NSString *_lyricsID;
    double _visibleDuration;
    long long _displayType;
    long long _displayedCharacterCount;
    NSString *_language;
    NSString *_featureName;
    NSData *_recommendationData;
    long long _sourceType;
}

- (void).cxx_destruct;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSData *recommendationData; // @synthesize recommendationData=_recommendationData;
@property(copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) long long displayedCharacterCount; // @synthesize displayedCharacterCount=_displayedCharacterCount;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) double visibleDuration; // @synthesize visibleDuration=_visibleDuration;
@property(retain, nonatomic) NSString *lyricsID; // @synthesize lyricsID=_lyricsID;
@property(retain, nonatomic) MPModelPlayEvent *modelPlayEvent; // @synthesize modelPlayEvent=_modelPlayEvent;
@property(retain, nonatomic) MPModelSong *modelSong; // @synthesize modelSong=_modelSong;

@end

