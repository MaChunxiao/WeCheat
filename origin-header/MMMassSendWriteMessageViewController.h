//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMassSendExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "ImageControllerDelegate-Protocol.h"
#import "MMInputToolViewDelegate-Protocol.h"
#import "RecordControllerDelegate-Protocol.h"
#import "StreamVoiceInputViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class ImageController, MMInputToolView, MMLoadingView, MMTableView, MMTimer, NSArray, NSMutableArray, NSString, RecordController, StreamVoiceInputViewController, UIBarButtonItem, UIView, UIWindow;

@interface MMMassSendWriteMessageViewController : MMUIViewController <MMInputToolViewDelegate, UITableViewDelegate, UITableViewDataSource, tableViewDelegate, ImageControllerDelegate, IMsgExt, IMassSendExt, RecordControllerDelegate, UIAlertViewDelegate, WCActionSheetDelegate, StreamVoiceInputViewControllerDelegate>
{
    MMTableView *_tableView;
    UIView *_receiverView;
    MMInputToolView *_inputToolView;
    NSMutableArray *_arrContacts;
    ImageController *_imageController;
    RecordController *_recordController;
    MMLoadingView *_loadingView;
    unsigned int _uiTmpRecordID;
    MMTimer *m_popBackTimer;
    unsigned int _iFromSendAgain;
    unsigned int m_currentRecordFormat;
    StreamVoiceInputViewController *m_streamVoiceInputViewController;
    UIWindow *m_coverWindow;
    UIView *m_topBarView;
    UIBarButtonItem *m_voiceStreamCacheLeftBtnItem;
    UIBarButtonItem *m_voiceStreamCacheRightBtnItem;
    NSString *m_voiceStreamTitle;
    NSString *m_voiceStreamSavedText;
}

- (void).cxx_destruct;
- (void)CameraControllerDidTakeSightImage:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)CameraControllerDidTakeVideo:(id)arg1;
- (_Bool)CanSendMultiImage;
- (_Bool)CanSendOriginalImage;
- (_Bool)CanSendVideoMsg;
- (void)CancelRecording;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (unsigned int)CheckVoiceBtnState;
- (id)GetContactName;
- (id)GetCurrentViewController;
- (void)HideRecordTips;
- (void)MassSend:(id)arg1;
- (void)OnMassSendFail:(unsigned int)arg1 WithErrorMsg:(id)arg2;
- (void)OnMassSendOK;
- (void)PopBack;
- (void)SendEmojiArtMessageToolView:(id)arg1;
- (void)SendEmoticonMesssageToolView:(id)arg1;
- (void)SendRecording;
- (void)SendTextMessageToolView:(id)arg1;
- (void)SetPeakPower:(float)arg1;
- (void)SetVoiceEnabled:(_Bool)arg1;
- (_Bool)ShouldShowKeyboardAnimation;
- (void)ShowAlert;
- (void)ShowRecording;
- (void)ShowTooLongTips;
- (void)ShowTooShortTips;
- (void)StartRecording;
- (void)StopRecording;
- (void)ToolViewPositionDidChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustSubviewRects;
@property(retain, nonatomic) NSArray *arrContacts; // @synthesize arrContacts=_arrContacts;
- (void)dealloc;
- (void)editStreamVoiceTxtDone;
- (void)editStreamVoiceTxtReturn;
- (id)getAllUsrName;
- (id)getNavigationController;
- (id)getViewController;
- (void)hideToolViewAnimated:(_Bool)arg1;
@property(nonatomic) unsigned int iFromSendAgain; // @synthesize iFromSendAgain=_iFromSendAgain;
- (id)init;
- (void)initAllowRecommendApp;
- (void)initAllowVoiceInput;
- (void)initAllowVoip;
- (void)initAllowWxTalk;
- (void)initLoadingView;
- (void)initReceiverView;
- (void)initTableView;
- (void)initToolView;
- (void)onAddApp;
- (void)onBack:(id)arg1;
- (void)onPositionModeChangeTo:(int)arg1 Animated:(_Bool)arg2;
- (void)onSelectLocation;
- (void)onSendTextMsg:(id)arg1;
- (void)onShareCard;
- (void)onStreamVoiceInputButtonClick;
- (void)onVoipInvite;
- (void)onWXTalk;
- (void)openCameraController;
- (void)openMediaBrowser;
- (void)openMyFavoritesListController;
- (void)openNewMediaBrowser:(id)arg1;
- (void)openServiceAppListController;
- (void)processInsertedImage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) MMInputToolView *toolView; // @synthesize toolView=_inputToolView;
- (void)showStreamVoiceInputMaskView:(_Bool)arg1;
- (void)stopLoadingAndShowError:(id)arg1 withDelay:(double)arg2;
- (void)streamVoiceInputBoardDidHide;
- (void)streamVoiceInputBoardDidShow;
- (void)streamVoiceInputBoardWillHideWithText:(id)arg1;
- (void)streamVoiceInputFullScreenEnter;
- (void)streamVoiceInputFullScreenExit;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)willDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

