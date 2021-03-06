//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface CardTicketItem : MMObject <PBCoding, NSCopying>
{
    NSString *fromUserName;
    unsigned int fromScene;
    unsigned int cardType;
    NSString *cardTypeName;
    NSString *cardId;
    NSString *color;
    NSString *brandName;
    NSString *cardExt;
    unsigned int cardShareFrom;
    _Bool isRecommend;
    NSString *recommendCardId;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(nonatomic) unsigned int cardShareFrom; // @synthesize cardShareFrom;
@property(nonatomic) unsigned int cardType; // @synthesize cardType;
@property(retain, nonatomic) NSString *cardTypeName; // @synthesize cardTypeName;
@property(retain, nonatomic) NSString *color; // @synthesize color;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) _Bool isRecommend; // @synthesize isRecommend;
@property(retain, nonatomic) NSString *recommendCardId; // @synthesize recommendCardId;
- (id)toXML;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

