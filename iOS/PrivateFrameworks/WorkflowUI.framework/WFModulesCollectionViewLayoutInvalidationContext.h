//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface WFModulesCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    _Bool _invalidateDelegateHidden;
    _Bool _invalidateDelegateMetrics;
    _Bool _invalidateDelegateOffsetsAndConnections;
}

@property(nonatomic) _Bool invalidateDelegateOffsetsAndConnections; // @synthesize invalidateDelegateOffsetsAndConnections=_invalidateDelegateOffsetsAndConnections;
@property(nonatomic) _Bool invalidateDelegateMetrics; // @synthesize invalidateDelegateMetrics=_invalidateDelegateMetrics;
@property(nonatomic) _Bool invalidateDelegateHidden; // @synthesize invalidateDelegateHidden=_invalidateDelegateHidden;
- (id)init;

@end

