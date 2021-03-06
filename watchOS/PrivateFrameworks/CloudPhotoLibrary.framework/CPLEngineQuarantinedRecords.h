//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, CPLRejectedRecords, NSMutableArray, NSString;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject>
{
    CPLRejectedRecords *_rejectedRecords;
    unsigned int _rejectedCount;
    _Bool _rejectedRecordsHasChanges;
    CPLRejectedRecords *_newRejectedRecords;
    NSMutableArray *_quarantineMessages;
    unsigned int _newRejectedCount;
}

- (void).cxx_destruct;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (_Bool)resetRejectedRecordsWithError:(id *)arg1;
- (_Bool)bumpRejectedRecords:(id)arg1 error:(id *)arg2;
- (void)_sendQuarantineFeedbackWithRecordClass:(Class)arg1 reason:(id)arg2;
- (unsigned int)countOfQuarantinedRecordsInScopeWithIdentifier:(id)arg1;
- (unsigned int)countOfQuarantinedRecords;
- (_Bool)isRecordWithScopedIdentifierQuarantined:(id)arg1;
- (_Bool)removeQuarantinedRecordsWithScopedIdentifier:(id)arg1 notify:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addQuarantinedRecordsWithScopedIdentifier:(id)arg1 reason:(id)arg2 error:(id *)arg3;
- (_Bool)deleteRecordsForScopeIndex:(int)arg1 maxCount:(int)arg2 deletedCount:(int *)arg3 error:(id *)arg4;
- (unsigned int)scopeType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

