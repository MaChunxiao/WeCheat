//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface ActionUser : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_desc;
    NSString *_username;
    NSString *_nickname;
    NSString *_strBeforeFollow;
    NSString *_strAfterFollow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *strAfterFollow; // @synthesize strAfterFollow=_strAfterFollow;
@property(retain, nonatomic) NSString *strBeforeFollow; // @synthesize strBeforeFollow=_strBeforeFollow;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toXml;

@end

