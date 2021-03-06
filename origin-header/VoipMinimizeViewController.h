//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MultitalkMinimizeViewController.h"

#import "IVOIPExt-Protocol.h"
#import "IVOIPModeSwitchExt-Protocol.h"
#import "VoipUIManagerExt-Protocol.h"

@class NSString, SequenceAnimationObject, UIImageView, UIView, VOIPVideoRender;

@interface VoipMinimizeViewController : MultitalkMinimizeViewController <IVOIPModeSwitchExt, IVOIPExt, VoipUIManagerExt>
{
    _Bool _m_hasChangeToAudioMode;
    _Bool _m_isMinimizeMode;
    VOIPVideoRender *_m_peerRender;
    UIView *_m_peerRenderView;
    UIImageView *_m_imageView;
    UIView *_m_preview;
    SequenceAnimationObject *_m_animation;
    long long _m_videoOrientation;
}

- (void).cxx_destruct;
- (void)OnBeginTalk:(id)arg1;
- (void)OnLocalEarMode;
- (void)OnLocalEarModeFor2G;
- (void)OnOneWayLocalEarMode;
- (void)OnOneWayLocalEarModeFor2G;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)OnOneWayRemoteEarMode;
- (void)OnOneWayRemoteEarModeFor2G;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnRemoteEarMode;
- (void)OnRemoteEarModeFor2G;
- (void)dealloc;
- (void)hideView;
- (id)init;
- (_Bool)isAudioMode;
- (void)layoutIconView;
- (void)layoutPeerRenderView;
- (void)layoutPreview;
@property(retain, nonatomic) SequenceAnimationObject *m_animation; // @synthesize m_animation=_m_animation;
@property(nonatomic) _Bool m_hasChangeToAudioMode; // @synthesize m_hasChangeToAudioMode=_m_hasChangeToAudioMode;
@property(retain, nonatomic) UIImageView *m_imageView; // @synthesize m_imageView=_m_imageView;
@property(nonatomic) _Bool m_isMinimizeMode; // @synthesize m_isMinimizeMode=_m_isMinimizeMode;
@property(retain, nonatomic) VOIPVideoRender *m_peerRender; // @synthesize m_peerRender=_m_peerRender;
@property(retain, nonatomic) UIView *m_peerRenderView; // @synthesize m_peerRenderView=_m_peerRenderView;
@property(retain, nonatomic) UIView *m_preview; // @synthesize m_preview=_m_preview;
@property(nonatomic) long long m_videoOrientation; // @synthesize m_videoOrientation=_m_videoOrientation;
- (void)onVideoOrientationChangeTo:(long long)arg1;
- (void)onVoipAudioDeviceUnPlugin;
- (void)showView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

