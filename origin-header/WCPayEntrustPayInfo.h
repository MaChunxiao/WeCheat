//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayEntrustPayInfo : NSObject
{
    _Bool _isAutoDeduct;
    _Bool _isSelectPayWay;
    NSString *_contractTitle;
    NSArray *_showInfo;
    NSString *_contractUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contractTitle; // @synthesize contractTitle=_contractTitle;
@property(retain, nonatomic) NSString *contractUrl; // @synthesize contractUrl=_contractUrl;
@property(nonatomic) _Bool isAutoDeduct; // @synthesize isAutoDeduct=_isAutoDeduct;
@property(nonatomic) _Bool isSelectPayWay; // @synthesize isSelectPayWay=_isSelectPayWay;
@property(retain, nonatomic) NSArray *showInfo; // @synthesize showInfo=_showInfo;

@end

