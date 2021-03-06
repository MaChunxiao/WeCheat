//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCSightViewDelegate-Protocol.h"

@class ForwardMessageLogicController, NSString, WCSightView;

@interface WCContentItemViewTemplateNewSight : WCContentItemBaseView <WCActionSheetDelegate, ForwardMessageLogicDelegate, WCSightViewDelegate>
{
    WCSightView *_sightView;
    ForwardMessageLogicController *m_forwardMsgLogic;
    unsigned long long _legalityType;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)canShareToOpenSDK;
- (void)dealloc;
- (id)getCurrentViewController;
- (id)getVisibleViewController;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 withScene:(unsigned long long)arg3;
- (void)jumpToDetail:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long legalityType; // @synthesize legalityType=_legalityType;
- (void)onClickWCSight:(id)arg1;
- (void)onExposeWithDataItem;
- (void)onFavoriteAdd:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onLongPressedWCSight:(id)arg1;
- (void)onLongPressedWCSightFullScreenWindow:(id)arg1;
- (void)onLongTouch;
- (void)onMore:(id)arg1;
- (void)onShareToOpenSDK;
- (void)onShowSightAction;
- (void)sendSightToFriend;
- (id)sightVideoPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

