//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString;

@interface CreateChatRoomReq : BaseReq
{
    NSString *groupId;
    NSString *chatRoomName;
    NSString *extMsg;
    NSString *chatRoomNickName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName;
@property(retain, nonatomic) NSString *chatRoomNickName; // @synthesize chatRoomNickName;
@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId;

@end
