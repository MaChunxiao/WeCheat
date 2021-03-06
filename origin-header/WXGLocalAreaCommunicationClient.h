//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LocalAreaNetworkClientDelegate-Protocol.h"
#import "LocalAreaPeerClientDelegate-Protocol.h"

@class LocalAreaNetworkClient, LocalAreaPeerClient, MMTimer, NSData, NSString;
@protocol LocalAreaCommunicationClientDelegate;

@interface WXGLocalAreaCommunicationClient : NSObject <LocalAreaNetworkClientDelegate, LocalAreaPeerClientDelegate>
{
    LocalAreaPeerClient *m_peerClient;
    LocalAreaNetworkClient *m_networkClient;
    unsigned long long m_transferType;
    NSData *m_firstPacketData;
    unsigned long long m_reconnectCount;
    MMTimer *m_reconnectTimer;
    MMTimer *m_cutConnectionTimer;
    MMTimer *m_transferSpeedTimer;
    _Bool _shoudNeedReconnect;
    _Bool _supportReconnect;
    _Bool _tryPeer;
    _Bool _inReconnecting;
    unsigned short _server_port;
    id <LocalAreaCommunicationClientDelegate> _delegate;
    NSString *_server_ip;
    NSString *_server_id;
    NSString *_server_hello;
    NSString *_server_ok;
    NSData *_reconnectTokenData;
    NSString *_wifiName;
}

- (void).cxx_destruct;
- (void)checkReconnect;
- (void)checkTransferSpeed;
- (void)clientDisconnect;
- (void)clientReconnect;
- (unsigned long long)clientSendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <LocalAreaCommunicationClientDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getClientOpenTime;
- (float)getClientReceiveSpeed;
- (float)getClientSendSpeed;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getTotalSendLength;
@property(nonatomic) _Bool inReconnecting; // @synthesize inReconnecting=_inReconnecting;
- (id)init;
- (id)initWithServerIP:(id)arg1 serverPort:(unsigned short)arg2 serverID:(id)arg3 serverHello:(id)arg4 serverOk:(id)arg5;
- (void)initiativeToTerminateClient;
- (_Bool)isPeerTransferData;
- (void)onNetworkConnectFailWithFirstPacketData:(id)arg1;
- (void)onNetworkDisconnect;
- (void)onNetworkReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)onPeerConnectFailed;
- (void)onPeerConnected;
- (void)onPeerDisconnect;
- (void)onPeerReciveData:(id)arg1;
- (void)p_stopNetworkClient;
- (void)p_stopPeerClient;
- (void)p_tryPeer;
@property(retain, nonatomic) NSData *reconnectTokenData; // @synthesize reconnectTokenData=_reconnectTokenData;
- (void)resetNetworkClient;
@property(retain, nonatomic) NSString *server_hello; // @synthesize server_hello=_server_hello;
@property(retain, nonatomic) NSString *server_id; // @synthesize server_id=_server_id;
@property(retain, nonatomic) NSString *server_ip; // @synthesize server_ip=_server_ip;
@property(retain, nonatomic) NSString *server_ok; // @synthesize server_ok=_server_ok;
@property(nonatomic) unsigned short server_port; // @synthesize server_port=_server_port;
@property(nonatomic) _Bool shoudNeedReconnect; // @synthesize shoudNeedReconnect=_shoudNeedReconnect;
@property(nonatomic) _Bool supportReconnect; // @synthesize supportReconnect=_supportReconnect;
@property(nonatomic) _Bool tryPeer; // @synthesize tryPeer=_tryPeer;
@property(retain, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

