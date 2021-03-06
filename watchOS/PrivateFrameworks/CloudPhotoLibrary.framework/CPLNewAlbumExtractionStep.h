//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@interface CPLNewAlbumExtractionStep : CPLBatchExtractionStep
{
    unsigned int _maximumCount;
}

@property(readonly, nonatomic) unsigned int maximumCount; // @synthesize maximumCount=_maximumCount;
- (id)shortDescription;
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned int)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned int)arg3;

@end

