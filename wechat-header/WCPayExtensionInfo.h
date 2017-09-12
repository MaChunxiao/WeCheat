//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface WCPayExtensionInfo : MMObject <NSCopying>
{
    unsigned int _m_uiFee;
    NSString *_m_nsPayExtTemplateId;
    NSString *_m_nsOutTradeNo;
    NSString *_m_nsFeeType;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (id)getTextFrom:(struct XmlReaderNode_t *)arg1 atNodeName:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *m_nsFeeType; // @synthesize m_nsFeeType=_m_nsFeeType;
@property(retain, nonatomic) NSString *m_nsOutTradeNo; // @synthesize m_nsOutTradeNo=_m_nsOutTradeNo;
@property(retain, nonatomic) NSString *m_nsPayExtTemplateId; // @synthesize m_nsPayExtTemplateId=_m_nsPayExtTemplateId;
@property(nonatomic) unsigned int m_uiFee; // @synthesize m_uiFee=_m_uiFee;
- (id)toXML;

@end
