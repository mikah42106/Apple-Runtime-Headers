//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXMAssetManager : NSObject
{
}

+ (id)defaultManager;
- (id)modelWithName:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3 compileIfNeeded:(BOOL)arg4 persistCompiledModel:(BOOL)arg5 error:(id *)arg6;
- (id)_modelAssetURLForModelNamed:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3 compiled:(BOOL)arg4;
- (id)uncompiledModelAssetURLForModelNamed:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3;
- (id)compiledModelAssetURLForModelNamed:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3;
- (id)uncompiledModelAssetNamesOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2;
- (id)compiledModelAssetNamesOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2;
- (id)_modelAssetNamesOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 compiled:(BOOL)arg3;
- (id)_modelAssetURLsOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 compiled:(BOOL)arg3;
- (id)uncompiledModelAssetURLsOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2;
- (id)compiledModelAssetURLsOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2;
- (id)_modelsDirectoryForType:(unsigned long long)arg1 compiled:(BOOL)arg2;
- (id)_compiledModelsDirectoryForType:(unsigned long long)arg1;
- (id)_uncompiledModelsDirectoryForType:(unsigned long long)arg1;
- (id)_photoCaptionAssetsDirectory;

@end

