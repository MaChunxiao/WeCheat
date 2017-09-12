//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WXTalkPresentMgr : MMService <MMService, IMsgExt>
{
    NSMutableDictionary *_infoList;
    _Bool _isInfoListLoaded;
}

- (void).cxx_destruct;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)dealloc;
- (id)getRoomInfoFromMessageWrap:(id)arg1;
- (id)getRoomMembersByUsername:(id)arg1;
- (void)handleWXTalkRoomInfoMessage:(id)arg1 withMessageWrap:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *infoList; // @synthesize infoList=_infoList;
- (id)init;
- (_Bool)isTalkRoomEmpty:(id)arg1;
- (_Bool)isTrackMode:(id)arg1;
- (_Bool)loadWXTalkRoomInfoList;
- (void)saveWXTalkRoomInfoList;
- (_Bool)writeToFile:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
