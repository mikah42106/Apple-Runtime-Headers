//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/CSLLauncherZoomSequencer.h>

#import <Carousel/PUICCrownInputSequencerDelegate-Protocol.h>

@class CSLIconFieldZoomAnimator, CSLLauncherZoomOptions, NSString, NSTimer, PUICCrownInputSequencer;

@interface CSLLauncherStandardZoomSequencer : CSLLauncherZoomSequencer <PUICCrownInputSequencerDelegate>
{
    _Bool _isRunning;
    _Bool _interactive;
    _Bool _crownSequencerOffsetDirty;
    _Bool _startResistanceAfterCrossingLauncherDetent;
    CSLIconFieldZoomAnimator *_animator;
    double _resistiveCrownExpirationTime;
    PUICCrownInputSequencer *_crownSequencer;
    CSLLauncherZoomOptions *_options;
    NSTimer *_resistanceTimer;
    const struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
    } *_currentSpring;
    _Bool _minorDetentsEnabled;
    id _minorDetentsAssertion;
    float _lastZoomForDetent;
}

- (void).cxx_destruct;
- (void)notifyDidComplete;
- (void)notifyUpdateZoom;
- (void)notifyWillBegin;
- (void)complete;
- (void)stopRunning;
- (void)startRunning;
- (void)animatorReachedTarget;
- (_Bool)updateCurrentSpringForZoom:(float)arg1;
- (void)prepareToStart;
- (void)resistanceTimerFired:(id)arg1;
- (void)invalidateResistanceTimer;
- (void)_setMinorDetentsEnabled:(_Bool)arg1;
- (void)crownInputSequencerOffsetDidChange:(id)arg1;
- (void)handleCrownInputEvent:(id)arg1;
- (void)setZoom:(float)arg1 updateCrownSequencer:(_Bool)arg2;
- (void)completeWithSnap;
- (void)begin;
- (void)setInteractive:(_Bool)arg1;
- (_Bool)isInteractive;
- (void)dealloc;
- (id)createSequencer;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

