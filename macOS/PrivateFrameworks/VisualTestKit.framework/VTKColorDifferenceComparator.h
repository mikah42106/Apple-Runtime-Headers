//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKComparator-Protocol.h>

@class NSString;
@protocol VTKColorDifferenceStrategy;

__attribute__((visibility("hidden")))
@interface VTKColorDifferenceComparator : NSObject <VTKComparator>
{
    id <VTKColorDifferenceStrategy> _strategy;
    unsigned long long _comparisonOptions;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long comparisonOptions; // @synthesize comparisonOptions=_comparisonOptions;
@property(retain, nonatomic) id <VTKColorDifferenceStrategy> strategy; // @synthesize strategy=_strategy;
@property(readonly, copy) NSString *description;
- (BOOL)_downscalesImages;
- (BOOL)_drawAAInResults;
- (BOOL)_ignoreAAInResults;
- (BOOL)_strategySupportsAA;
- (BOOL)_checkForAA;
- (id)compareImage:(id)arg1 withImage:(id)arg2;
- (id)initWithStrategy:(id)arg1 comparisonOptions:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

