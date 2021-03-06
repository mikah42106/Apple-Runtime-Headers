//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/NSObject-Protocol.h>

@class CSLBulletin, NSSet;
@protocol CSLBulletinPipelineStepActor;

@protocol CSLBulletinPipelineStepActorDelegate <NSObject>
- (void)actor:(id <CSLBulletinPipelineStepActor>)arg1 isBusy:(_Bool)arg2;
- (void)actor:(id <CSLBulletinPipelineStepActor>)arg1 unlockBulletin:(CSLBulletin *)arg2;
- (void)actor:(id <CSLBulletinPipelineStepActor>)arg1 lockBulletin:(CSLBulletin *)arg2;
- (void)actor:(id <CSLBulletinPipelineStepActor>)arg1 willManageStateForBulletinWithKeys:(NSSet *)arg2 withBlock:(_Bool (^)(NSDictionary *))arg3 completion:(void (^)(void))arg4;
- (void)actor:(id <CSLBulletinPipelineStepActor>)arg1 willManageStateForBulletins:(NSSet *)arg2 withBlock:(_Bool (^)(NSDictionary *))arg3 completion:(void (^)(void))arg4;
- (void)actor:(id <CSLBulletinPipelineStepActor>)arg1 willManageStateForBulletin:(CSLBulletin *)arg2 withBlock:(_Bool (^)(CSLBulletinState *))arg3 completion:(void (^)(void))arg4;
@end

