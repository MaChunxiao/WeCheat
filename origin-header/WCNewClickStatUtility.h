//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface WCNewClickStatUtility : MMObject
{
}

+ (unsigned int)UinHash:(unsigned int)arg1;
+ (unsigned int)calCostTimeFrom:(struct timeval)arg1;
+ (id)getAppStatisticDataFilePath;
+ (unsigned int)getNewContexID:(unsigned int)arg1;
+ (id)getPageStatDataCheckFilePath;
+ (id)getPageStatisticDataFilePath;
+ (id)getReportConfigFilePath;
+ (id)getReportDataDir;
+ (id)getUsrReportDataDir;
+ (id)getWidgetRecordDataDir;
+ (id)getWidgetRecordDataFileByPageID:(id)arg1 andTimeStamp:(unsigned int)arg2;
+ (id)shortenPageID:(id)arg1;
+ (void)unCompressSrcDataWithLen:(id)arg1 dest:(id)arg2 length:(long long)arg3;

@end

