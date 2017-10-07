//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class MMProgressViewExLayer, NSString, UIColor;

@interface MMProgressViewEx : UIView <CAAnimationDelegate>
{
    double total;
    double current;
    UIColor *frontColor;
    UIColor *backColor;
    double stepDuration;
    _Bool hideOnCompleteProcess;
    MMProgressViewExLayer *m_layer;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(retain, nonatomic) UIColor *backColor; // @synthesize backColor;
@property(nonatomic) double current; // @synthesize current;
- (void)doAnimation;
- (void)doAnimation_v2;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIColor *frontColor; // @synthesize frontColor;
@property(nonatomic) _Bool hideOnCompleteProcess; // @synthesize hideOnCompleteProcess;
- (void)hideSelf;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) double stepDuration; // @synthesize stepDuration;
@property(nonatomic) double total; // @synthesize total;
- (void)startLoading;
- (void)startLoadingWithImage:(id)arg1;
- (void)stopLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
