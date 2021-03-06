//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ABCardViewStyle, ABPerson, CNContact, CNContainer, NSArray, NSDictionary, NSImage, NSString;

@protocol ABPersonViewProtocol
@property(nonatomic) BOOL showsShowInMapsButtons;
@property(readonly) BOOL canEditContact;
@property BOOL autoSave;
@property(retain) CNContact *contact;
@property(retain) ABPerson *person;
@property(nonatomic) BOOL _quicklook_fetchAsynchronously;
@property(readonly) BOOL hasChanges;
@property(readonly) struct CGRect imageFrame;
@property(readonly) struct CGSize contentSize;
@property(readonly) struct CGSize preferredMinimumSize;
@property(readonly, getter=isLoaded) BOOL loaded;
@property(getter=isSelectable) BOOL selectable;
@property(getter=isEditable) BOOL editable;
@property long long backgroundStyle;
@property BOOL drawsBackground;
@property BOOL shouldShowLinkedPeople;
@property BOOL editing;
- (void)setShouldSave:(BOOL)arg1;
- (NSImage *)profilePhotoImage;
- (struct CGRect)profilePhotoScreenRect;
- (void)clearCustomImage;
- (void)beginEditingCustomImage;
- (void)editProperty:(NSString *)arg1 label:(NSString *)arg2;
- (void)editProperty:(NSString *)arg1;
- (BOOL)isAvailableKey:(NSString *)arg1;
- (void)setDisplayAttributes:(NSDictionary *)arg1 forProperty:(NSString *)arg2 identifier:(NSString *)arg3 key:(NSString *)arg4;
- (void)setDisplayAttributes:(NSDictionary *)arg1 forProperty:(NSString *)arg2;
- (void)notifyDelegateActionWasPerformed;
- (void)setPropertyKeysToDisplay:(NSArray *)arg1;
- (void)setParentContainer:(CNContainer *)arg1;
- (void)setAuthorizedMode:(unsigned long long)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setContact:(CNContact *)arg1 shouldShowLinkedContacts:(BOOL)arg2 shouldShowSuggestedFields:(BOOL)arg3;
- (void)setContact:(CNContact *)arg1 shouldShowLinkedContacts:(BOOL)arg2;
- (void)setPerson:(ABPerson *)arg1 shouldShowLinkedPeople:(BOOL)arg2 shouldShowSuggestedFields:(BOOL)arg3;
- (void)setPerson:(ABPerson *)arg1 shouldShowLinkedPeople:(BOOL)arg2;
- (void)refreshView;
- (void)commitEditing;
- (void)setHighlighted:(BOOL)arg1 forProperty:(NSString *)arg2 identifier:(NSString *)arg3;
- (void)_setStyle:(ABCardViewStyle *)arg1;
@end

