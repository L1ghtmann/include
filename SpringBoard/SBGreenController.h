//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SBGreenController : NSObject
{
    NSArray *_relevantGreenKeys;
    NSUInteger _fileExistenceState;
}

// - (void).cxx_destruct;
- (id)_deviceRegionCode;
- (NSUInteger)_effectivePlaceIsAmbiguous:(BOOL )arg1;
- (BOOL)_writeGreenValuesToDisk:(id)arg1 withState:(NSUInteger)arg2;
- (id)_defaultValuesDictionaryAndState:(NSUInteger )arg1;
- (void)_readFileStateFromDisk;
- (void)performPreBuddyWork;
- (id)init;

@end
