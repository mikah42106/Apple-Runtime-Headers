//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfigurationUI/MCSectionBasedTableView.h>

@class UIButton, UIView;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageView : MCSectionBasedTableView
{
    UIView *_topBarView;
    UIView *_bottomBarView;
    UIButton *_installButton;
    UIButton *_infoButton;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(readonly, nonatomic) UIButton *installButton; // @synthesize installButton=_installButton;
@property(readonly, nonatomic) UIView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(readonly, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;
- (void)showBottomView:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_createBottomView;
- (id)_createInfoButton;
- (id)_createCancelButton;
- (id)_createInstallButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

