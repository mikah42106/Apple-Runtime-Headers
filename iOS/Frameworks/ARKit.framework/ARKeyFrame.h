//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARPointCloud;

@interface ARKeyFrame : NSObject
{
    ARPointCloud *_featurePoints;
    // Error parsing type: {?="columns"[3]}, name: _cameraIntrinsics
    // Error parsing type: {?="columns"[4]}, name: _transform
}

- (void).cxx_destruct;
// Error parsing type for property cameraIntrinsics:
// Property attributes: T{?=[3]},N,V_cameraIntrinsics

@property(readonly, nonatomic) ARPointCloud *featurePoints; // @synthesize featurePoints=_featurePoints;
// Error parsing type for property transform:
// Property attributes: T{?=[4]},R,N,V_transform

- (id)description;
-     // Error parsing type: @96@0:8^{?=[9d][3d][9d]Q^I}16@24{?=[4]}32, name: initWithKeyframeData:featurePoints:referenceOriginTransform:

@end

