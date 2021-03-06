//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CHStrokeIdentifier;

__attribute__((visibility("hidden")))
@interface CHSubstroke : NSObject
{
    vector_2e7754b6 _convexHull;
    id <CHStrokeIdentifier> _strokeIdentifier;
    float _curvature;
    double _startTimestamp;
    double _endTimestamp;
    struct CGRect _bounds;
}

+ (id)substrokesForStroke:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) float curvature; // @synthesize curvature=_curvature;
@property(readonly, nonatomic) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(readonly, nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, retain, nonatomic) id <CHStrokeIdentifier> strokeIdentifier; // @synthesize strokeIdentifier=_strokeIdentifier;
@property(readonly, nonatomic) vector_2e7754b6 *convexHull;
- (void)dealloc;
- (id)initWithStrokeIdentifier:(id)arg1 bounds:(struct CGRect)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(const vector_2e7754b6 *)arg5 curvature:(float)arg6;

@end

