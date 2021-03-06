//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface PLMomentCluster : NSObject
{
    NSArray *_moments;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSArray *moments; // @synthesize moments=_moments;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMoments:(id)arg1;

@end

