//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKFace.h>

@interface NTKVictoryAnalogFace : NTKFace
{
}

+ (id)_initialDefaultComplicationForSlot:(id)arg1 forDevice:(id)arg2;
+ (id)_orderedComplicationSlots;
+ (id)_complicationSlotDescriptors;
- (id)editOptionThatHidesAllComplications;
- (Class)_optionClassForCustomEditMode:(int)arg1;
- (id)_optionAtIndex:(unsigned int)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (unsigned int)_numberOfOptionsForCustomEditMode:(int)arg1 slot:(id)arg2;
- (unsigned int)_indexOfOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (int)_customEditModeForUniqueConfiguration;
- (id)_defaultOptionForCustomEditMode:(int)arg1 slot:(id)arg2;
- (id)_customEditModes;
- (int)_editModeForOldEncodingIndex:(int)arg1;

@end

