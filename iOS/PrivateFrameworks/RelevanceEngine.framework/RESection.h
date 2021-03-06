//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RESectionDelegate-Protocol.h>
#import <RelevanceEngine/RESectionProperties-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, REElementQueue, REMLElementComparator, _RESectionDescriptor;
@protocol RESectionDelegate;

@interface RESection : NSObject <RESectionDelegate, RESectionProperties>
{
    _RESectionDescriptor *_descriptor;
    REElementQueue *_queue;
    NSMutableSet *_hiddenElements;
    NSMutableDictionary *_elements;
    _Bool _allowsSubsections;
    NSMutableDictionary *_subsections;
    _Bool _performingBatch;
    NSMutableArray *_batchBlocks;
    REMLElementComparator *_comparator;
    id <RESectionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RESectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) REMLElementComparator *comparator; // @synthesize comparator=_comparator;
@property(readonly, nonatomic) NSArray *elements;
- (id)section:(id)arg1 groupForIdentifier:(id)arg2;
- (void)sectionDidUpdateContentOrder:(id)arg1;
- (long long)_mappedIndexFromIndex:(long long)arg1;
- (id)elementIdAtIndex:(unsigned long long)arg1;
- (long long)indexOfElementWithId:(id)arg1;
- (_Bool)containsElementWithId:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)_performOrEnqueueBlock:(CDUnknownBlockType)arg1;
- (void)_updateElementWithId:(id)arg1 withNewFeatureSet:(id)arg2 forceHidden:(_Bool)arg3;
- (void)updateElementWithId:(id)arg1 withNewFeatureSet:(id)arg2 forceHidden:(_Bool)arg3;
- (void)_removeElementWithId:(id)arg1;
- (void)removeElementWithId:(id)arg1;
- (void)_addElement:(id)arg1 forceHidden:(_Bool)arg2;
- (void)addElement:(id)arg1 forceHidden:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *allElements;
@property(nonatomic) long long maximumElements;
@property(readonly, nonatomic) long long visibleCount;
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) NSString *name;
- (void)_removeSection:(id)arg1;
- (id)_createSectionForGroup:(id)arg1;
- (id)_groupIdentifierForElement:(id)arg1;
- (id)_groupForIdentifier:(id)arg1;
- (long long)_compareElement:(id)arg1 toElement:(id)arg2 level:(unsigned long long)arg3;
- (id)initWithSectionDescriptor:(id)arg1 comparator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

