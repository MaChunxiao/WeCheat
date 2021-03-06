//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface MMLockMutableDictionary : MMObject
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_dict;
}

+ (id)dictionaryWithMutableDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (int)count;
- (id)fetchDictionary;
- (id)init;
- (id)initWithMutableDictionary:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;

@end

