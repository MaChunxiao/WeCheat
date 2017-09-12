//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IRsaCertMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString, ProtobufCGIWrap;

@interface RsaCGIWrapLogic : NSObject <PBMessageObserverDelegate, IRsaCertMgrExt>
{
    unsigned int m_cert_error_count;
    unsigned int m_uiFlag;
    unsigned int m_uiEventID;
    ProtobufCGIWrap *m_pbCGIWrap;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnRsaCertCGIAgain;
- (void)OnRsaCertFail;
- (void)dealloc;
- (id)getKey;
@property(retain, nonatomic) ProtobufCGIWrap *m_pbCGIWrap; // @synthesize m_pbCGIWrap;
@property(nonatomic) unsigned int m_uiEventID; // @synthesize m_uiEventID;
@property(nonatomic) unsigned int m_uiFlag; // @synthesize m_uiFlag;
- (_Bool)startLogic;
- (void)startLogicAgain;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
