//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSDictionary;

@interface EmotionPageSharedItem : MMObject
{
    NSDictionary *_params;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryToXml:(id)arg1;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (_Bool)fromXMLStr:(id)arg1;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (id)toXML;
- (id)xmlToDictionary:(struct XmlReaderNode_t *)arg1;

@end

