//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface PLDaemonJobReply : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_xpcReply;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcReply; // @synthesize xpcReply=_xpcReply;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReply:(id)arg1;

@end

