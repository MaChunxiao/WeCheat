//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBaseControlMgrExt-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"
#import "WCPayPayMoneyLogicDelegate-Protocol.h"

@class JSEvent, NSString, WCPayPayMoneyLogic;
@protocol WCPayPayJSApiLogicParamDelegate;

@interface WCPayPayMoneyFromBrandContactJSApiLogic : WCPayControlLogic <WCBaseControlMgrExt, WCPayPayMoneyLogicDelegate, WCPayLogicMgrExt>
{
    JSEvent *m_jsEvent;
    NSString *m_stepInURL;
    NSString *m_stepAppUserName;
    WCPayPayMoneyLogic *m_payLogic;
    id <WCPayPayJSApiLogicParamDelegate> _paramDelegate;
}

- (void).cxx_destruct;
- (void)OnGetGenPaypreErrorRequest:(id)arg1 ErrorMsg:(id)arg2;
- (void)OnGetGenPaypreRequest:(id)arg1 SessionID:(id)arg2 AppSource:(id)arg3;
- (void)dealloc;
- (_Bool)gotoViewController:(id)arg1;
- (id)initWithJSEvent:(id)arg1 URL:(id)arg2 BrandUserName:(id)arg3;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onWCPayJSApiResult:(id)arg1;
@property(nonatomic) __weak id <WCPayPayJSApiLogicParamDelegate> paramDelegate; // @synthesize paramDelegate=_paramDelegate;
- (void)setExtraInfo:(id)arg1;
- (void)startForceRotationToPortrait;
- (void)startLogic;
- (void)stopForceRotationToPortrait;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
