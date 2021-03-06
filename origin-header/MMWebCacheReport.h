//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMWebCacheReport : NSObject
{
}

+ (void)reportBrandPreDownload;
+ (void)reportBrandPreDownloadUrl:(id)arg1;
+ (void)reportCacheJsApiRequestForAsync;
+ (void)reportCacheJsApiRequestForSync;
+ (void)reportCacheTooLargeDataOnceTime;
+ (void)reportFailToAsyncCache;
+ (void)reportFailToDownloadRes;
+ (void)reportFailToLoadCachePage;
+ (void)reportFailToLoadPublicLibPage;
+ (void)reportFailToSaveRes;
+ (void)reportFailToSyncCache;
+ (void)reportFoundInDBButNotInDisk;
+ (void)reportHitCacheAsyncPage;
+ (void)reportHitCachePageForUrl:(id)arg1;
+ (void)reportHitCacheSyncPage;
+ (void)reportHitDiskUsageLimitForAppId:(id)arg1 size:(long long)arg2;
+ (void)reportLoadCacheCrc32Fail;
+ (void)reportLoadPageTime:(double)arg1 url:(id)arg2;
+ (void)reportPublicResRequestUrl:(id)arg1 resUrl:(id)arg2 isHit:(_Bool)arg3;

@end

