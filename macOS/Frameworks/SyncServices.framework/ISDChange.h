//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SyncServices/NSCoding-Protocol.h>

@class NSDate, NSMutableArray, NSString;

@interface ISDChange : NSObject <NSCoding>
{
    int _type;
    NSString *_recordId;
    NSString *_entityName;
    NSMutableArray *_propertyChanges;
    NSString *_clientId;
    unsigned int _fromGeneration;
    unsigned int _toGeneration;
    long long _changeSourceIndex;
    NSDate *_modificationDate;
    NSString *_identityHash;
}

+ (void)initialize;
- (void)setIdentityHash:(id)arg1;
- (id)identityHash;
- (void)noteModificationDate:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (id)modificationDate;
- (BOOL)mergeGlobalIdEquivalents:(id)arg1;
- (void)replaceRelationshipTupleId:(id)arg1 withRelationshipTupleId:(id)arg2;
- (int)cleanupTuplesWithId:(id)arg1;
- (id)idsReferencedByChangeInDictionary:(id)arg1;
- (void)enumerateIdsAsArgumentToFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)enumerateIdsAsArgumentToFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 skipTupleId:(BOOL)arg3;
- (void)enumeratePropertyChangesUsingBlock:(CDUnknownBlockType)arg1;
- (id)relationshipsWhichReferenceRecordWithId:(id)arg1 entity:(id)arg2;
- (void)setRecordId:(id)arg1;
- (void)replaceRecordId:(id)arg1 withRecordId:(id)arg2;
- (id)propertyChangeForName:(id)arg1;
- (void)setPropertyType:(int)arg1;
- (void)setPropertyChanges:(id)arg1;
- (long long)changeSourceIndex;
- (id)propertyChanges;
- (unsigned int)toGeneration;
- (unsigned int)fromGeneration;
- (id)entityName;
- (id)recordId;
- (int)type;
- (id)clientId;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (int)isd_quickDirtyCoderType;
- (void)encodeWithQuickDirtyCoder:(id)arg1;
- (id)initWithQuickDirtyCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChangeType:(int)arg1 entityName:(id)arg2 recordId:(id)arg3 propertyChanges:(id)arg4 clientId:(id)arg5 fromGeneration:(unsigned int)arg6 toGeneration:(unsigned int)arg7;
- (id)initWithChangeType:(int)arg1 entityName:(id)arg2 recordId:(id)arg3 propertyChanges:(id)arg4 clientId:(id)arg5 fromGeneration:(unsigned int)arg6 toGeneration:(unsigned int)arg7 index:(long long)arg8;
- (id)fastClientId;
- (id)fastRecordId;

@end

