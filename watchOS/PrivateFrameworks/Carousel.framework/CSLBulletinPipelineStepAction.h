//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSLBulletin;

@interface CSLBulletinPipelineStepAction : NSObject
{
    CSLBulletin *_bulletin;
    CSLBulletin *_oldBulletin;
    unsigned int _feed;
    unsigned int _actionType;
}

+ (id)actionWithBulletin:(id)arg1 oldBulletin:(id)arg2 feed:(unsigned int)arg3 actionType:(unsigned int)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned int feed; // @synthesize feed=_feed;
@property(retain, nonatomic) CSLBulletin *oldBulletin; // @synthesize oldBulletin=_oldBulletin;
@property(retain, nonatomic) CSLBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (id)description;

@end

