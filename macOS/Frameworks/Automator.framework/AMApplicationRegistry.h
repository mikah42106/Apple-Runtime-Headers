//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMApplicationDefinition, NSArray, NSMutableDictionary;

@interface AMApplicationRegistry : NSObject
{
    NSMutableDictionary *_definitionRegistry;
    NSMutableDictionary *_typeRegistry;
    BOOL _didLoadDeprecatedDefinitions;
}

+ (id)imagePathKeyForApplicationWithName:(id)arg1;
+ (id)sharedApplicationRegistry;
- (void).cxx_destruct;
@property BOOL didLoadDeprecatedDefinitions; // @synthesize didLoadDeprecatedDefinitions=_didLoadDeprecatedDefinitions;
@property(retain) NSMutableDictionary *typeRegistry; // @synthesize typeRegistry=_typeRegistry;
@property(retain) NSMutableDictionary *definitionRegistry; // @synthesize definitionRegistry=_definitionRegistry;
- (void)setName:(id)arg1 forDefinedType:(id)arg2;
- (id)nameForDefinedType:(id)arg1;
- (id)definitionForApplicationName:(id)arg1;
@property(readonly, nonatomic) NSArray *applicationNames;
- (void)loadNondeprecatedDefinitions;
- (void)loadDeprecatedSystemDefinitionsIfNeeded;
- (void)_loadDeprecatedSystemDefinitions;
- (void)_loadDefinitionsAtURLS:(id)arg1;
- (BOOL)loadDefinitionAtURL:(id)arg1;
- (BOOL)loadDefinition:(id)arg1;
- (id)externalDefinitionURLs;
- (id)deprecatedSystemDefinitionURLs;
- (id)_definitionURLsAtLocations:(id)arg1 deprecatedOnly:(BOOL)arg2;
- (id)_systemLibraryURL;
- (id)deprecatedSystemDefinitionLocation;
- (id)standardNondeprecatedDefinitionLocations;
@property(readonly, nonatomic) AMApplicationDefinition *definitionForMainBundle;
@property(readonly, nonatomic) NSArray *applicationDefinitions;
- (id)init;

@end

