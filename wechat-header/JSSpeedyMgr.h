//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"

@class NSRecursiveLock, NSString;

@interface JSSpeedyMgr : MMService <MMService>
{
    NSString *_url;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
- (id)getCurMainDocUrl;
- (id)init;
- (void)notifyOnMainThreadFinished;
- (void)setCurMainDocUrl:(id)arg1;
- (void)webviewDownloadFinished;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
