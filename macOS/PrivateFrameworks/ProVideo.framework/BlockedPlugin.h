//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BlockedPlugin : NSObject
{
    NSString *_bundleName;
    NSString *_plugName;
    NSString *_plugVersion;
}

@property(readonly) NSString *plugVersion; // @synthesize plugVersion=_plugVersion;
@property(readonly) NSString *plugName; // @synthesize plugName=_plugName;
@property(readonly) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (void)dealloc;
- (id)init:(id)arg1 plugName:(id)arg2 plugVersion:(id)arg3;

@end

