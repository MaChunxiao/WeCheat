//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBJceObjectV2.h"

@class NSString;

@interface QBCommonFileReq : QBJceObjectV2
{
    NSString *jcev2_p_0_r_sGUID;
    NSString *jcev2_p_1_r_sQUA2;
    NSString *jcev2_p_2_o_sModuleName;
    NSString *jcev2_p_3_o_sContentMd5;
}

+ (void)initialize;
+ (id)jceType;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_3_o_sContentMd5; // @synthesize jcev2_p_3_o_sContentMd5;
@property(retain, nonatomic, getter=sGUID, setter=setSGUID:) NSString *jcev2_p_0_r_sGUID; // @synthesize jcev2_p_0_r_sGUID;
@property(retain, nonatomic, getter=sModuleName, setter=setSModuleName:) NSString *jcev2_p_2_o_sModuleName; // @synthesize jcev2_p_2_o_sModuleName;
@property(retain, nonatomic, getter=sQUA2, setter=setSQUA2:) NSString *jcev2_p_1_r_sQUA2; // @synthesize jcev2_p_1_r_sQUA2;

@end

