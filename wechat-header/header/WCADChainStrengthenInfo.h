//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCADChainStrengthenInfo : NSObject
{
    int wordingType;
    NSString *directWording;
    NSString *replaceWording;
    NSString *wordingLink;
    NSMutableArray *arrUserName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrUserName; // @synthesize arrUserName;
@property(retain, nonatomic) NSString *directWording; // @synthesize directWording;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValidForShow;
@property(retain, nonatomic) NSString *replaceWording; // @synthesize replaceWording;
@property(retain, nonatomic) NSString *wordingLink; // @synthesize wordingLink;
@property(nonatomic) int wordingType; // @synthesize wordingType;

@end
