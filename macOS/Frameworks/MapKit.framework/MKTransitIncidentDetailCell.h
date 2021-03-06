//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

#import <MapKit/MKMultiLineLabelContainer-Protocol.h>

@class MKIncidentTextView, NSDate, NSLayoutConstraint, NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitIncidentDetailCell : MKTableViewCell <MKMultiLineLabelContainer>
{
    MKIncidentTextView *_descriptionLabel;
    _MKUILabel *_lastUpdatedLabel;
    NSLayoutConstraint *_descriptionFirstBaselineToTopConstraint;
    NSLayoutConstraint *_descriptionLastBaselineToBottomConstraint;
    NSLayoutConstraint *_lastUpdatedFirstBaselineToDescriptionFirstBaselineConstraint;
    NSLayoutConstraint *_lastUpdatedLastBaselineToBottomConstraint;
    NSDate *_lastUpdated;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
- (id)multilineTextFieldsWithinContainer;
- (void)_updateLastUpdatedLabel;
@property(copy, nonatomic) NSString *incidentDescription;
- (void)updateConstraints;
- (void)_setConstraints;
- (void)infoCardThemeChanged;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

