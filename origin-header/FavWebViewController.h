//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWebViewController.h"

@class FavoritesItem;

@interface FavWebViewController : MMWebViewController
{
    FavoritesItem *m_favItem;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)initWithFavDataWrap:(id)arg1;
- (id)initWithFavoritesItem:(id)arg1;
- (void)onWebViewDelete;
- (void)onWebViewEditTag;
- (void)viewDidLoad;

@end

