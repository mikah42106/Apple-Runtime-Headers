//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/GFNode.h>

@class GFList;

@interface GFGraph : GFNode
{
    GFList *_nodes;
    GFList *_connections;
    BOOL _finalizing;
    struct _opaque_pthread_mutex_t *_graphLock;
    void *_unused2[3];
}

+ (Class)connectionClass;
+ (Class)proxyPortClass;
+ (Class)baseClass;
- (void)setUndoManager:(id)arg1;
- (BOOL)setState:(id)arg1;
- (id)state;
- (id)proxyOutputPorts;
- (id)proxyInputPorts;
- (id)proxyPortForOriginalPort:(id)arg1;
- (void)deleteProxyPortWithOriginalPort:(id)arg1;
- (void)deleteProxyPortForKey:(id)arg1;
- (void)deleteOutputPortForKey:(id)arg1;
- (void)deleteInputPortForKey:(id)arg1;
- (void)__createProxyPortWithNode:(id)arg1 portKey:(id)arg2 forKey:(id)arg3 withUserInfo:(id)arg4;
- (id)createProxyPortWithOriginalPort:(id)arg1;
- (id)createProxyPortWithOriginalPort:(id)arg1 forKey:(id)arg2;
- (BOOL)canCreateProxyPortWithOriginalPort:(id)arg1;
- (id)portForPath:(id)arg1;
- (id)pathForPort:(id)arg1;
- (id)nodeForPath:(id)arg1;
- (id)pathForNode:(id)arg1;
- (id)keyForConnection:(id)arg1;
- (id)connectionForKey:(id)arg1;
- (id)keyForNode:(id)arg1;
- (id)nodeForKey:(id)arg1;
- (id)connections;
- (void)deleteConnection:(id)arg1;
- (void)deleteConnectionForKey:(id)arg1;
- (void)__createConnectionFrom:(id)arg1 to:(id)arg2 forKey:(id)arg3 withUserInfo:(id)arg4;
- (id)createConnectionFromPort:(id)arg1 toPort:(id)arg2;
- (id)createConnectionFromPort:(id)arg1 toPort:(id)arg2 forKey:(id)arg3;
- (BOOL)canCreateConnectionFromPort:(id)arg1 toPort:(id)arg2;
- (void)applyFunctionOnConnections:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)enumerateConnectionsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)nodes;
- (void)setLock:(struct _opaque_pthread_mutex_t *)arg1;
- (void)applyFunctionOnNodes:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)enumerateNodesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeNode:(id)arg1;
- (void)removeNodeForKey:(id)arg1;
- (BOOL)addNode:(id)arg1;
- (BOOL)addNode:(id)arg1 forKey:(id)arg2;
- (BOOL)canAddNode:(id)arg1;
- (void)dealloc;
- (BOOL)_loadState:(id)arg1;
- (BOOL)_saveState:(id)arg1 filterTarget:(id)arg2 filterAction:(SEL)arg3 flatten:(BOOL)arg4;
- (void)_layoutUpdated;
- (void)_willDeleteNodeOutputPort:(id)arg1;
- (void)_willDeleteNodeInputPort:(id)arg1;
- (id)_nodes;
- (id)_connections;
- (id)_uniqueConnectionKey;
- (BOOL)_isConnectionKeyInUse:(id)arg1;
- (id)_uniqueKeyFromNode:(id)arg1;
- (BOOL)_isNodeKeyInUse:(id)arg1;
- (BOOL)_finalizing;
- (id)_uniqueProxyPortKeyFromPort:(id)arg1;
- (id)uniqueProxyPortKeyFromName:(id)arg1;
- (void)_setNote:(id)arg1 atIndex:(id)arg2;
- (Class)graphViewClass;

@end

