//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPSpacerFinder : NSObject <CPDisposable>
{
    CPZone *contentZone;
    struct CGRect zoneBounds;
    struct CGRect textBounds;
    struct {
        unsigned int allocatedSize;
        unsigned int size;
        unsigned int count;
        CDStruct_183601bc *stats;
        CDStruct_183601bc **ordered;
    } spacerSequence;
    NSMutableArray *spacers;
    unsigned int segmentationCount;
    struct {
        id _field1;
        unsigned int _field2;
        CDStruct_183601bc *_field3;
    } *segmentations;
    struct {
        struct CGRect _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        unsigned int _field6;
        unsigned int _field7;
        unsigned int _field8;
        unsigned int _field9;
        unsigned int _field10;
        unsigned int _field11;
        unsigned int _field12;
        unsigned int _field13;
        unsigned int _field14;
        CDStruct_c3b9c2ee _field15;
        CDStruct_c3b9c2ee _field16;
        CDStruct_c3b9c2ee _field17;
        CDStruct_c3b9c2ee _field18;
        double _field19;
        double _field20;
        char _field21;
        char _field22;
        char _field23;
    } *qualityEntries;
}

- (id)spacers;
- (void)splitTextLines;
- (void)determineValidity;
- (void)assessQuality;
- (void)findSpacers;
- (void)initializeJunctions;
- (void)initializeSegmentations;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithContentZone:(id)arg1;

@end

