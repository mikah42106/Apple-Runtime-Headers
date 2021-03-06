//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSText/NSObject-Protocol.h>

@class NSArray, TSWPColumn;

@protocol TSWPRendering <NSObject>
@property(nonatomic) double viewScale;
@property(readonly, nonatomic) struct CGContext *context;
- (void)drawCharacterStrokeAdornmentRects:(NSArray *)arg1 forColumn:(TSWPColumn *)arg2 excludeRange:(struct _NSRange)arg3 drawingState:(const struct TSWPDrawingState *)arg4;
- (void)drawCharacterFillAdornmentRects:(NSArray *)arg1 forColumn:(TSWPColumn *)arg2 excludeRange:(struct _NSRange)arg3 drawingState:(const struct TSWPDrawingState *)arg4;
- (void)drawAdornmentRects:(NSArray *)arg1 forColumn:(TSWPColumn *)arg2 foreground:(_Bool)arg3 drawingState:(const struct TSWPDrawingState *)arg4;
- (struct CGRect)getClipBoundingBox;
- (_Bool)shouldClipFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineDrawFlags:(unsigned long long)arg3 updateRect:(struct CGRect)arg4 outClipRect:(struct CGRect *)arg5;
- (void)drawAdornmentsForFragment:(const struct TSWPLineFragment *)arg1 updateRect:(struct CGRect)arg2 drawingState:(const struct TSWPDrawingState *)arg3 runState:(CDStruct_3b6efdb6 *)arg4 lineDrawFlags:(unsigned long long)arg5;
- (void)drawFragment:(const struct TSWPLineFragment *)arg1 updateRect:(struct CGRect)arg2 drawingState:(const struct TSWPDrawingState *)arg3 runState:(CDStruct_3b6efdb6 *)arg4 lineDrawFlags:(unsigned long long)arg5;
- (void)didRenderFragments;
- (void)willRenderFragmentsWithDrawingState:(const struct TSWPDrawingState *)arg1;
@end

