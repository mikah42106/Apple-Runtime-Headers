//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDSCTAdapterCache : NSObject
{
    unsigned int _dualSIMEnabled;
    unsigned int _isAnySIMUsable;
    unsigned int _isAnySIMInserted;
    unsigned int _supportsIdentification;
    NSArray *_contexts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(nonatomic) unsigned int supportsIdentification; // @synthesize supportsIdentification=_supportsIdentification;
@property(nonatomic) unsigned int isAnySIMInserted; // @synthesize isAnySIMInserted=_isAnySIMInserted;
@property(nonatomic) unsigned int isAnySIMUsable; // @synthesize isAnySIMUsable=_isAnySIMUsable;
@property(nonatomic) unsigned int dualSIMEnabled; // @synthesize dualSIMEnabled=_dualSIMEnabled;
- (id)debugDescription;

@end

