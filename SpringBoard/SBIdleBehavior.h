//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFIdleTimerBehaviorProviding-Protocol.h>

@interface SBIdleBehavior : NSObject <SBFIdleTimerBehaviorProviding>
{
    long long _duration;
    long long _warnMode;
}

@property(readonly, nonatomic) long long warnMode; // @synthesize warnMode=_warnMode;
@property(readonly, nonatomic) long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
- (id)initWithDuration:(long long)arg1 warnMode:(long long)arg2;

@end
