//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PPExtractionSet : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_namedEntityRecords;
    NSArray *_topicRecords;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *topicRecords; // @synthesize topicRecords=_topicRecords;
@property(readonly, nonatomic) NSArray *namedEntityRecords; // @synthesize namedEntityRecords=_namedEntityRecords;
- (_Bool)isEmpty;
- (id)merge:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNamedEntityRecords:(id)arg1 topicRecords:(id)arg2;

@end

