//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportJSApiActionItem : WAReportBaseItem
{
    int _result;
    int _permissionValue;
    int _errorcode;
    NSString *_funcName;
    NSString *_keyParam;
    unsigned long long _costtime;
    NSString *_errMsg;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long costtime; // @synthesize costtime=_costtime;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) int errorcode; // @synthesize errorcode=_errorcode;
@property(retain, nonatomic) NSString *funcName; // @synthesize funcName=_funcName;
@property(retain, nonatomic) NSString *keyParam; // @synthesize keyParam=_keyParam;
@property(nonatomic) int permissionValue; // @synthesize permissionValue=_permissionValue;
- (id)reportString;
@property(nonatomic) int result; // @synthesize result=_result;

@end

