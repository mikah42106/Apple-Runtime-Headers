//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface CUISNotificationCenterCellCachedLabel : NSObject
{
    unsigned int _labelType;
    UIImage *_image;
    UIColor *_color;
    NSString *_text;
    CDStruct_e1c9cff6 _metrics;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned int labelType; // @synthesize labelType=_labelType;
@property(nonatomic) CDStruct_e1c9cff6 metrics; // @synthesize metrics=_metrics;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;

@end

