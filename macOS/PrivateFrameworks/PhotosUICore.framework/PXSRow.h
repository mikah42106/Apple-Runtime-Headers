//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSItem.h>

@class NSPredicate, PXSRowAction;

@interface PXSRow : PXSItem
{
    PXSRowAction *_action;
    CDUnknownBlockType _valueValidatator;
}

+ (id)rowWithTitle:(id)arg1 valueKeyPath:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType valueValidatator; // @synthesize valueValidatator=_valueValidatator;
@property(retain, nonatomic) PXSRowAction *action; // @synthesize action=_action;
- (id)valueValidator:(CDUnknownBlockType)arg1;
- (id)conditionFormat:(id)arg1;
- (id)condition:(id)arg1;
- (id)px_increment:(double)arg1;

// Remaining properties
@property(retain, nonatomic) NSPredicate *condition; // @dynamic condition;

@end

