//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKConstraint.h>

@class SKNode, SKRange;

__attribute__((visibility("hidden")))
@interface SKOrientationConstraint : SKConstraint
{
    SKNode *_node;
    SKRange *_offset;
    struct CGPoint _point;
}

+ (id)constraintOrientingToPoint:(struct CGPoint)arg1 offset:(id)arg2;
+ (id)constraintOrientingToNode:(id)arg1 offset:(id)arg2;
+ (id)constraintOrientingToPoint:(struct CGPoint)arg1 inNode:(id)arg2 offset:(id)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) SKRange *offset; // @synthesize offset=_offset;
@property struct CGPoint point; // @synthesize point=_point;
@property __weak SKNode *node; // @synthesize node=_node;
- (_Bool)isEqualToOrientationConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNode:(id)arg1 point:(struct CGPoint)arg2 offset:(id)arg3;

@end

