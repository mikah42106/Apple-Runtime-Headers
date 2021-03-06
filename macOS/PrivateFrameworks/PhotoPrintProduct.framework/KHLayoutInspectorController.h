//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoPrintProduct/KHInspectorViewController.h>

#import <PhotoPrintProduct/KHInspectorPanelProtocol-Protocol.h>
#import <PhotoPrintProduct/KHLayoutPickerDelegate-Protocol.h>

@class KHInspectorTileViewController, KHLayoutFilterController, KHLayoutPickerController, KHPhotoCountFilterController, KHTreatmentPickerController, NSArray, NSString;

@interface KHLayoutInspectorController : KHInspectorViewController <KHLayoutPickerDelegate, KHInspectorPanelProtocol>
{
    BOOL _hideTreatmentPicker;
    NSArray *_layoutArray;
    KHTreatmentPickerController *_treatmentPicker;
    KHLayoutPickerController *_layoutPicker;
    KHLayoutFilterController *_layoutFilter;
    KHPhotoCountFilterController *_photoCountFilter;
    KHInspectorTileViewController *_treatmentTileController;
    KHInspectorTileViewController *_contentFilterTileController;
    KHInspectorTileViewController *_photoCountFilterTileController;
    KHInspectorTileViewController *_layoutOptionsTileController;
}

- (void).cxx_destruct;
@property BOOL hideTreatmentPicker; // @synthesize hideTreatmentPicker=_hideTreatmentPicker;
@property(retain, nonatomic) KHInspectorTileViewController *layoutOptionsTileController; // @synthesize layoutOptionsTileController=_layoutOptionsTileController;
@property(retain, nonatomic) KHInspectorTileViewController *photoCountFilterTileController; // @synthesize photoCountFilterTileController=_photoCountFilterTileController;
@property(retain, nonatomic) KHInspectorTileViewController *contentFilterTileController; // @synthesize contentFilterTileController=_contentFilterTileController;
@property(retain, nonatomic) KHInspectorTileViewController *treatmentTileController; // @synthesize treatmentTileController=_treatmentTileController;
@property(retain, nonatomic) KHPhotoCountFilterController *photoCountFilter; // @synthesize photoCountFilter=_photoCountFilter;
@property(retain, nonatomic) KHLayoutFilterController *layoutFilter; // @synthesize layoutFilter=_layoutFilter;
@property(retain, nonatomic) KHLayoutPickerController *layoutPicker; // @synthesize layoutPicker=_layoutPicker;
@property(retain, nonatomic) KHTreatmentPickerController *treatmentPicker; // @synthesize treatmentPicker=_treatmentPicker;
@property(retain, nonatomic) NSArray *layoutArray; // @synthesize layoutArray=_layoutArray;
- (id)setupStackView;
- (void)pickerRequiresInspectorRefresh:(id)arg1;
- (void)loadView;
- (id)badgeImage;
- (void)teardownBindings;
- (void)setupModelBindings;
- (id)viewForPresentationMode:(int)arg1;
- (id)initWithLayouts:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

