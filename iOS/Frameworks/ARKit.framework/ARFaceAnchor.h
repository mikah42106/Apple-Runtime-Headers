//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARAnchor.h>

#import <ARKit/ARTrackable-Protocol.h>

@class ARFaceGeometry, ARFaceTrackingData, NSDictionary, NSError, NSString;

@interface ARFaceAnchor : ARAnchor <ARTrackable>
{
    NSDictionary *_blendShapeCoefficientsDictionary;
    _Bool _isTracked;
    ARFaceGeometry *_geometry;
    ARFaceTrackingData *_trackingData;
    NSError *_trackingError;
}

+ (_Bool)supportsSecureCoding;
+ (id)blendShapeToMirroredBlendShapeMapping;
+ (id)mirroredBlendShapeMapping;
+ (id)blendShapeMapping;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *trackingError; // @synthesize trackingError=_trackingError;
@property(nonatomic) _Bool isTracked; // @synthesize isTracked=_isTracked;
@property(retain, nonatomic) ARFaceTrackingData *trackingData; // @synthesize trackingData=_trackingData;
@property(readonly, nonatomic) ARFaceGeometry *geometry; // @synthesize geometry=_geometry;
- (_Bool)isEqualToFaceAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithAnchor:(id)arg1;
-     // Error parsing type: 16@0:8, name: gazePoint
// Error parsing type for property lookAtPoint:
// Property attributes: T,R,N

// Error parsing type for property rightEyeTransform:
// Property attributes: T{?=[4]},R,N

// Error parsing type for property leftEyeTransform:
// Property attributes: T{?=[4]},R,N

-     // Error parsing type: r^16@0:8, name: imageVertices
@property(readonly, nonatomic) NSDictionary *blendShapes;
- (id)initWithExistingFaceAnchor:(id)arg1 tracked:(_Bool)arg2 trackingError:(id)arg3;
- (id)initWithIdentifier:(id)arg1 trackingData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

