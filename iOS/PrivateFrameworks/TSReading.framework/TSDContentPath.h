//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSDContentPath : NSObject
{
    NSArray *_contentLocations;
}

+ (id)contentPathWithLocations:(id)arg1;
@property(copy, nonatomic) NSArray *contentLocations; // @synthesize contentLocations=_contentLocations;
- (id)i_contentLocations;
- (id)contentLocationAtTime:(double)arg1 withTimingFunction:(id)arg2;
- (void)dealloc;

@end

