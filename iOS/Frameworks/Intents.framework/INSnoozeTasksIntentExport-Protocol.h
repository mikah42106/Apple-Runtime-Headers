//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, NSArray, NSNumber;

@protocol INSnoozeTasksIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSNumber *all;
@property(copy, nonatomic) INDateComponentsRange *nextTriggerTime;
@property(copy, nonatomic) NSArray *tasks;
- (id)init;
@end

