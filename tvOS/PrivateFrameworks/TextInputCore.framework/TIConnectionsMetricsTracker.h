//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TIConnectionsMetricsTracker : NSObject
{
    _Bool _inputContextDidChange;
}

+ (id)sharedInstance;
@property _Bool inputContextDidChange; // @synthesize inputContextDidChange=_inputContextDidChange;
- (void)trackPredictionEngagmentWithConversion:(_Bool)arg1 age:(unsigned long long)arg2 fieldType:(id)arg3 resultType:(id)arg4 fromBundleId:(id)arg5 targetApp:(id)arg6 linguistic:(_Bool)arg7 semantic:(_Bool)arg8;
- (void)trackTextFieldEntryWithEmpty:(_Bool)arg1 fieldType:(id)arg2 trigger:(id)arg3;
- (void)trackTextFieldEntryWithEmpty:(_Bool)arg1 fieldType:(id)arg2 linguistic:(_Bool)arg3 semantic:(_Bool)arg4 requestType:(id)arg5;

@end

