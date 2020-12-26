//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSystemServiceServerTestAutomationDelegate-Protocol.h>

@class FBServiceClientAuthenticator, NSHashTable;
@protocol BSInvalidatable;

@interface SBTestAutomationService : NSObject <SBSystemServiceServerTestAutomationDelegate>
{
    FBServiceClientAuthenticator *_clientAuthenticator;
    id <BSInvalidatable> _idleTimerAssertion;
    NSHashTable *_inFlightAnimationTransactions;
}

// - (void).cxx_destruct;
- (BOOL)_authenticateClient:(id)arg1;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 countScenesForBundleIdentifier:(id)arg3 withCompletion:(id /* CDUnknownBlockType */)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 port:(id)arg3 acquireHUDHiddenAssertionForIdentifier:(id)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setApplicationBundleIdentifier:(id)arg3 blockedForScreenTime:(BOOL)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 resetToHomeScreenAnimated:(BOOL)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setOrientationLockEnabled:(BOOL)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setIdleTimerEnabled:(BOOL)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setAlertsEnabled:(BOOL)arg3;
- (void)systemServiceServer:(id)arg1 suspendAllDisplaysForClient:(id)arg2;
- (id)init;

@end
