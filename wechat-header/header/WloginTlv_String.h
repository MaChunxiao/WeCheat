//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_String : WloginTlv
{
    NSString *sString;
}

- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
@property(copy) NSString *sString; // @synthesize sString;

@end
