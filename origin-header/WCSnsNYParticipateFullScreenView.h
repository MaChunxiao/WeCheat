//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UILabel;
@protocol WCSnsNYParticipateFullScreenViewDelegate;

@interface WCSnsNYParticipateFullScreenView : MMUIView
{
    id <WCSnsNYParticipateFullScreenViewDelegate> _delegate;
    UILabel *_titleTipLabel;
    UILabel *_descTipLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCSnsNYParticipateFullScreenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)getBottomToButtonMargin;
- (double)getButtonLeftMargin;
- (double)getImageToTitleMargin;
- (double)getTitleToDescMargin;
- (double)getTopToImageMargin;
- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)onNotParticipateBtnClick:(id)arg1;
- (void)onParticipateBtnClick:(id)arg1;
- (void)showAnimation;

@end
