//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TVPlayback/TVPMusicNowPlayingBackgroundProvider-Protocol.h>

@class NSString, UIImage, UIImageView;

@interface TVPMusicNowPlayingStaticArtworkBackgroundProvider : UIView <TVPMusicNowPlayingBackgroundProvider>
{
    UIImage *_image;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) UIView *view;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isBlurDisabled) _Bool blurDisabled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

