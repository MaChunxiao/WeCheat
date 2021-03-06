//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMsgContentLogicController.h"

#import "IQQMailExt-Protocol.h"
#import "ITranslateMsgMgrExt-Protocol.h"
#import "TipsViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "addContactToChatRoomDelegate-Protocol.h"

@class NSString, UIImageView;

@interface WeixinContentLogicController : BaseMsgContentLogicController <IQQMailExt, UIAlertViewDelegate, addContactToChatRoomDelegate, TipsViewDelegate, ITranslateMsgMgrExt>
{
    _Bool m_bTipsShow;
    UIImageView *_toolView;
}

- (void).cxx_destruct;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanOpenServiceAppList;
- (_Bool)CanOpenTrackRoom;
- (_Bool)CanRemoteRecord;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendTextMsg:(id)arg1;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanShowSight;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)CustomToolViewEX:(id)arg1;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (_Bool)EnabledOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2 withMsgSource:(id)arg3;
- (id)GetChatContact;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetRightBarBtn;
- (id)GetRightBarButtonTitle;
- (id)GetTitleTailImage;
- (_Bool)HasCustomToolBar;
- (id)HighlightedImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)ImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (unsigned int)NumberOfHeaderButtons;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)OnGetMailUnreadCount:(int)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (void)Register;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ShowNewMail;
- (void)StateChanged;
- (id)TitleOfHeaderButtonsAtIndex:(unsigned int)arg1;
- (void)UnRegister;
- (void)ViewDidAppear;
- (void)ViewDidInit;
- (void)ViewWillAppear;
- (void)ViewWillInit;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)bringQQMailToolView2Front;
- (_Bool)canShowChatRoomInfo;
- (void)checkAddFriend;
- (void)checkNeedContactVerify;
- (void)checkQQMailUnReadCount;
- (void)checkSecurityBannerShow;
- (void)clearAllMsg;
- (void)clearContactVerifyFlag;
- (void)clearTransferCount;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)dealloc;
- (void)deleteAllMsg;
- (id)getDefaultEnterMailAppTitle;
- (void)initQQMailToolView;
- (_Bool)isInMyContactList;
- (_Bool)isNeedCached;
- (_Bool)isOpenSingleInfo;
- (_Bool)isQQMailAppInstall;
- (_Bool)isQQMailPlugin;
- (_Bool)isShakeEnabled;
- (_Bool)isToolViewHidden;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (void)newMessageFromAddContactToChatRoom:(id)arg1;
- (void)onClickReceiveBrandMsg;
- (void)onClickShieldBrandMsg;
- (void)onEnterMailAppBtnPress:(id)arg1;
- (void)onPerformAction:(id)arg1;
- (void)onWillPopFromNavigationController;
@property(retain, nonatomic) UIImageView *toolView; // @synthesize toolView=_toolView;
- (_Bool)shouldPreventViewcontrollerAutorotate;
- (void)switchEarpieceMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

