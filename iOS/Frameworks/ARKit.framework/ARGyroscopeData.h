//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARDictionaryCoding-Protocol.h>
#import <ARKit/ARMetadataWrapperCoding-Protocol.h>
#import <ARKit/ARMutableSensorData-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface ARGyroscopeData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding>
{
    double _timestamp;
    CDStruct_31142d93 _rotationRate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) CDStruct_31142d93 rotationRate; // @synthesize rotationRate=_rotationRate;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadataWrapper:(id)arg1;
- (id)encodeToMetadataWrapper;
- (id)initWithDictionary:(id)arg1;
- (id)encodeToDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

