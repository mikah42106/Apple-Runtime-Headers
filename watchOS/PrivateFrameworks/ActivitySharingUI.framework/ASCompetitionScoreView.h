//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ASCompetitionParticipantScoreView, ASCompetitionScoreViewConfiguration, NSNumber, UIImageView, UILabel;

@interface ASCompetitionScoreView : UIView
{
    ASCompetitionScoreViewConfiguration *_configuration;
    ASCompetitionParticipantScoreView *_myScoreView;
    ASCompetitionParticipantScoreView *_opponentScoreView;
    UIImageView *_achievementThumbnailView;
    UILabel *_scoreTypeHeaderLabel;
    NSNumber *_previousLayoutWidth;
    _Bool _isRTLLayout;
}

+ (float)preferredHeightForConfiguration:(id)arg1 friend:(id)arg2;
- (void).cxx_destruct;
- (void)setFriend:(id)arg1 competition:(id)arg2;
@property(readonly, nonatomic) float lastBaselineY;
- (void)layoutForWidth:(float)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)participantScoreViewWidthForParticipant:(int)arg1 maximumWidth:(float)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

