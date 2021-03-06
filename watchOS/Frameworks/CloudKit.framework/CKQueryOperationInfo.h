//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKQuery, CKQueryCursor, CKRecordZoneID, NSArray, NSDictionary;

@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    _Bool _shouldFetchAssetContent;
    _Bool _fetchAllResults;
    CKQuery *_query;
    CKRecordZoneID *_zoneID;
    CKQueryCursor *_cursor;
    unsigned int _resultsLimit;
    NSArray *_desiredKeys;
    NSDictionary *_assetTransferOptionsByKey;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByKey; // @synthesize assetTransferOptionsByKey=_assetTransferOptionsByKey;
@property(nonatomic) _Bool fetchAllResults; // @synthesize fetchAllResults=_fetchAllResults;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) unsigned int resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) CKQuery *query; // @synthesize query=_query;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

