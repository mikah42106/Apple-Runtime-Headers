//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActivityRingsUI/NSObject-Protocol.h>

@protocol MTLDevice, MTLLibrary;

@protocol ARUICelebrationsRendering <NSObject>
- (id)initWithDevice:(id <MTLDevice>)arg1 library:(id <MTLLibrary>)arg2;

@optional
- (void)prewarm;
@end

