//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/NSCopying-Protocol.h>

@class NSString;

@interface BSServiceQuality : NSObject <NSCopying>
{
    NSString *_serviceClassName;
    unsigned int _serviceClass;
    int _relativePriority;
    _Bool _singleton;
    _Bool _main;
}

+ (id)serviceWithClass:(unsigned int)arg1 relativePriority:(int)arg2;
+ (id)serviceWithClass:(unsigned int)arg1;
+ (id)main;
+ (id)userInteractive;
+ (id)userInitiated;
+ (id)utility;
+ (id)background;
+ (id)_serviceWithClass:(unsigned int)arg1 relativePriority:(int)arg2 main:(_Bool)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) int relativePriority; // @synthesize relativePriority=_relativePriority;
@property(readonly, nonatomic) unsigned int serviceClass; // @synthesize serviceClass=_serviceClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)_initWithClass:(unsigned int)arg1 name:(id)arg2 relativePriority:(int)arg3 singleton:(_Bool)arg4 main:(_Bool)arg5;
- (id)init;

@end

