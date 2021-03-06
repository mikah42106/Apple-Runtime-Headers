//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/SCRElement.h>

#import <ScreenReader/SCRValueChangeMonitorDelegate-Protocol.h>

@class NSDate, NSOrderedSet, NSString, SCRValueChangeMonitor;

__attribute__((visibility("hidden")))
@interface SCRDateTime : SCRElement <SCRValueChangeMonitorDelegate>
{
    NSDate *__cachedDateValue;
    NSOrderedSet *__supportedDateTimeComponents;
    NSString *__currentlyFocusedComponent;
    SCRValueChangeMonitor *__valueChangeMonitor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCRValueChangeMonitor *_valueChangeMonitor; // @synthesize _valueChangeMonitor=__valueChangeMonitor;
@property(copy, nonatomic, setter=_setCurrentlyFocusedComponent:) NSString *_currentlyFocusedComponent; // @synthesize _currentlyFocusedComponent=__currentlyFocusedComponent;
@property(readonly, copy, nonatomic) NSOrderedSet *_supportedDateTimeComponents; // @synthesize _supportedDateTimeComponents=__supportedDateTimeComponents;
@property(retain, nonatomic, setter=_setCachedDateValue:) NSDate *_cachedDateValue; // @synthesize _cachedDateValue=__cachedDateValue;
- (long long)brailleLineType;
- (id)valueDescription;
- (id)roleDescription;
- (BOOL)_hasTimeComponents;
- (BOOL)_hasDateComponents;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (id)_hourToString:(long long)arg1;
- (id)_stringForComponent:(id)arg1;
- (long long)_valueForDateComponent:(id)arg1 withDate:(id)arg2;
- (id)_nextComponentWithComponent:(id)arg1;
- (id)_previousComponentWithComponent:(id)arg1;
- (id)_moveFromComponent:(id)arg1 inDirection:(long long)arg2;
- (BOOL)_switchToNextComponentWithRequest:(id)arg1;
- (BOOL)_switchToPreviousComponentWithRequest:(id)arg1;
- (BOOL)_switchToComponentWithRequest:(id)arg1 inDirection:(long long)arg2;
- (void)_outputComponent:(id)arg1 withDate:(id)arg2 withRequest:(id)arg3;
- (BOOL)_changeComponentWithRequest:(id)arg1 action:(long long)arg2;
- (id)_dateTimeOrderingFromFormat:(id)arg1;
- (id)_dateTimeComponentsFromFlags:(unsigned long long)arg1;
@property(retain, nonatomic, setter=_setAccessibilityDateValue:) NSDate *_accessibilityDateValue;
- (BOOL)didHandleNewValueAfterPolling:(id)arg1;
- (BOOL)isControlElement;
- (long long)groupBehavior;
- (BOOL)isInteractive;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

