//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DigitalTouchShared/ETMessage.h>

@class ETSketchMessage, NSArray, NSMutableArray, NSURL, UIImage;

@interface ETVideoMessage : ETMessage
{
    NSMutableArray *_playingMessages;
    double _compressedTimeTotal;
    double _compressedTimeLastEventTime;
    double _messageDuration;
    _Bool _pauseTimeCompression;
    NSURL *_mediaURL;
    UIImage *_stillImage;
    ETSketchMessage *_introMessage;
    unsigned long long _mediaType;
}

+ (unsigned short)messageType;
- (void).cxx_destruct;
@property(nonatomic) _Bool pauseTimeCompression; // @synthesize pauseTimeCompression=_pauseTimeCompression;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) ETSketchMessage *introMessage; // @synthesize introMessage=_introMessage;
@property(retain, nonatomic) UIImage *stillImage; // @synthesize stillImage=_stillImage;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
- (double)messageDuration;
- (_Bool)isAnimated;
- (double)compressTimeSinceStartOfMessage:(double)arg1;
@property(readonly, nonatomic) _Bool canCompressTime;
@property(retain, nonatomic) NSArray *playingMessages;
- (_Bool)shouldLoopDuringPlayback;
- (id)messageTypeAsString;
- (id)archiveData;
- (int)_etpMediaTypeFromETMediaType:(unsigned long long)arg1;
- (unsigned long long)_mediaTypeFromETPVideoType:(int)arg1;
- (id)initWithArchiveData:(id)arg1;
- (id)init;

@end

