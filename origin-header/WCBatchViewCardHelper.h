//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IWCCardPkgExt-Protocol.h"
#import "WCCardListViewControllerDelegate-Protocol.h"
#import "WCNewCardDetailViewControllerDelegate-Protocol.h"

@class MMUIViewController, NSMutableArray, NSString;
@protocol WCBatchViewCardHelpDelegate;

@interface WCBatchViewCardHelper : MMObject <IWCCardPkgExt, WCNewCardDetailViewControllerDelegate, WCCardListViewControllerDelegate>
{
    int _fromScene;
    NSString *_templateMsgId;
    unsigned long long _appBrandModeType;
    NSMutableArray *_aryCardData;
    MMUIViewController *_currViewController;
    id <WCBatchViewCardHelpDelegate> _delegate;
    MMUIViewController *_nextViewController;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long appBrandModeType; // @synthesize appBrandModeType=_appBrandModeType;
@property(retain, nonatomic) NSMutableArray *aryCardData; // @synthesize aryCardData=_aryCardData;
@property(retain, nonatomic) MMUIViewController *currViewController; // @synthesize currViewController=_currViewController;
- (void)dealloc;
@property(nonatomic) __weak id <WCBatchViewCardHelpDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
- (void)handleCardTpInfoList:(id)arg1 fromScene:(int)arg2 isPush:(_Bool)arg3;
- (void)handleGiftCardTpInfoList:(id)arg1 fromScene:(int)arg2;
- (id)initWithDelegate:(id)arg1;
@property(retain, nonatomic) MMUIViewController *nextViewController; // @synthesize nextViewController=_nextViewController;
- (void)onDetailDidBeCleared;
- (void)onGetCardsItemByTpInfo:(id)arg1 ErrCode:(int)arg2;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onWCCardListDidBeCleared;
- (void)onWCCardListViewControllerCancel:(id)arg1;
- (void)onWCCardListViewControllerDidSelected:(id)arg1 listViewController:(id)arg2;
@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

