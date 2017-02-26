//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IFacebookAuthExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class FacebookAuth, NSString;

@interface MMFacebookMgr : MMService <MMService, IFacebookAuthExt, PBMessageObserverDelegate>
{
    FacebookAuth *m_facebookAuth;
}

@property(retain, nonatomic) FacebookAuth *m_facebookAuth; // @synthesize m_facebookAuth;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)verifyAccessTokenValid:(id)arg1;
- (void)clearFacebookToken;
- (void)onExtendTokenFinish:(_Bool)arg1;
- (void)fbDidNotLogin:(_Bool)arg1;
- (void)fbDidLogin;
- (void)updateTokenToSvr;
- (int)getFacebookUsageType;
- (void)setFacebookUsageType:(int)arg1;
- (void)tryUnBindFacebook;
- (void)saveAuthData;
- (_Bool)tryExtendToken;
- (void)tryConnectFacebook;
- (void)tryBindFacebook;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)isFacebookBounded;
- (id)getFacebookName;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
