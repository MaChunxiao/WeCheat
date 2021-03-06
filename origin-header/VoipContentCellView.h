//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

@class UIImageView, VoipContentViewModel;

@interface VoipContentCellView : CommonMessageCellView
{
    UIImageView *m_unreadImageView;
}

- (void).cxx_destruct;
- (void)layoutContentView;
- (void)onClicked;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)startVideoVoip;
- (void)startVoiceVoip;
- (void)tapVoiceVoipNodeView;
- (void)tapVoipNodeView;
- (void)updateStatus;

// Remaining properties
@property(readonly, nonatomic) VoipContentViewModel *viewModel; // @dynamic viewModel;

@end

