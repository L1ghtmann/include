//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBRootFolder.h>

#import <SpringBoardHome/SBIconIndexNodeObserver-Protocol.h>

@class SBIconListModel;

@interface SBRootFolderWithDock : SBRootFolder <SBIconIndexNodeObserver>
{
    SBIconListModel *_dock;
}

- (id)dock;
// - (void).cxx_destruct;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)listDidMoveNodes:(id)arg1;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)_notifyIndexChange:(int)arg1 identifiers:(id)arg2 withValidationBlock:(id /* CDUnknownBlockType */)arg3;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(NSUInteger)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)arg1;
- (void)enumerateAllIconsWithBaseIndexPath:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (void)sort;
- (void)addIconsOfClass:(Class)arg1 toSet:(id)arg2;
- (void)markIconStateClean;
- (BOOL)isIconStateDirty;
- (BOOL)isValidPageIndex:(NSUInteger)arg1;
- (void)removeList:(id)arg1;
- (id)listsContainingLeafIconWithIdentifier:(id)arg1;
- (id)listsContainingIcon:(id)arg1;
- (NSUInteger)indexOfList:(id)arg1;
- (id)listAtIndex:(NSUInteger)arg1;
- (void)setIcon:(id)arg1;
- (void)_setDock:(id)arg1;
- (BOOL)supportsDock;
- (id)initWithUniqueIdentifier:(id)arg1 displayName:(id)arg2 maxListCount:(NSUInteger)arg3 maxIconCountInLists:(NSUInteger)arg4;

@end
