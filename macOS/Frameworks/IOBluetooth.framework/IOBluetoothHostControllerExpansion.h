//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IOBluetoothHostControllerExpansion : NSObject
{
    NSMutableDictionary *outstandingRequests;
    NSString *delegateClassString;
}

@property(retain) NSString *delegateClassString; // @synthesize delegateClassString;
@property(retain) NSMutableDictionary *outstandingRequests; // @synthesize outstandingRequests;
- (void)dealloc;

@end

