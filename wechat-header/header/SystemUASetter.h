//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SystemUASetter : NSObject
{
    NSString *_systemDefaultUA;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)getDefaultUserAgentWithWeixinVersion;
- (id)getMMUserAgent;
- (id)getSystemDefaultUA;
- (void)updateDefaultUserAgent;

@end
