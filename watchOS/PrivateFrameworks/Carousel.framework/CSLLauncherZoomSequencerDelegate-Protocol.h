//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/NSObject-Protocol.h>

@class CSLLauncherZoomSequencer;

@protocol CSLLauncherZoomSequencerDelegate <NSObject>
- (void)zoomSequencer:(CSLLauncherZoomSequencer *)arg1 didComplete:(_Bool)arg2;
- (void)zoomSequencer:(CSLLauncherZoomSequencer *)arg1 updateZoom:(float)arg2;
- (void)zoomSequencer:(CSLLauncherZoomSequencer *)arg1 willBegin:(_Bool)arg2;
@end

