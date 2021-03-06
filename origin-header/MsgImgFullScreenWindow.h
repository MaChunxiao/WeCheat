//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "WCNetworkMediaPlayerDelegate-Protocol.h"

@class CMessageWrap, NSString;
@protocol MsgImgFullScreenWindowDelegate;

@interface MsgImgFullScreenWindow : MMUIWindow <WCNetworkMediaPlayerDelegate>
{
    NSString *_chatname;
    id <MsgImgFullScreenWindowDelegate> m_delegate;
    CMessageWrap *m_tempMessageWrap;
    _Bool m_bCloseForViewDetail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatname; // @synthesize chatname=_chatname;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onPlayAttachVideo:(id)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (_Bool)viewAlreadyShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

