//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRGesturePanZoomRotation : NSObject
{
    double time;
    double x;
    double y;
    double deltaX;
    double deltaY;
    double scale;
    double rotation;
    double speedX;
    double speedY;
    double speedScale;
    double speedRotation;
    unsigned char direction;
    unsigned char countOfTouches;
    BOOL okToAnimate;
    BOOL isInFocusMode;
    BOOL isInZoomMode;
}

@end

