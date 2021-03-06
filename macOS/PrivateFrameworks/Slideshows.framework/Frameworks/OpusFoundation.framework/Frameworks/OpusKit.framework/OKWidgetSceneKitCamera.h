//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetSceneKitNode.h>

@class SCNCamera;

@interface OKWidgetSceneKitCamera : OKWidgetSceneKitNode
{
    SCNCamera *_camera;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (void)setSettingUsesOrthographicProjection:(BOOL)arg1;
- (BOOL)settingUsesOrthographicProjection;
- (void)setSettingXFov:(double)arg1;
- (double)settingXFov;
- (void)setSettingYFov:(double)arg1;
- (double)settingYFov;
- (void)setSettingZFar:(double)arg1;
- (double)settingZFar;
- (void)setSettingZNear:(double)arg1;
- (double)settingZNear;
- (void)setSettingCameraName:(id)arg1;
- (id)settingCameraName;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;

@end

