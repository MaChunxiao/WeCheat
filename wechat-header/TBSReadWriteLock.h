//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TBSReadWriteLock : NSObject
{
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } rwlock;
}

- (int)TBS_ReaderLock;
- (int)TBS_Unlock;
- (int)TBS_WriterLock;
- (void)dealloc;
- (id)init;

@end
