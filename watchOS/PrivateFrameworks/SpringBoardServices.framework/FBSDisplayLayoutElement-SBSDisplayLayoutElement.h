//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSDisplayLayoutElement.h>

#import <SpringBoardServices/SBSDisplayLayoutElement-Protocol.h>

@class NSString;

@interface FBSDisplayLayoutElement (SBSDisplayLayoutElement) <SBSDisplayLayoutElement>
@property(readonly, nonatomic, getter=sb_isTransitioning) _Bool sb_transitioning;
@property(readonly, nonatomic) int layoutRole;
@property(readonly, nonatomic, getter=isSpringBoardElement) _Bool springBoardElement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end

