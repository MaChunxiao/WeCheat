//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@protocol WCCanvasDynamicDataLoaderDelegate;

@interface WCCanvasDynamicDataLoader : MMObject <PBMessageObserverDelegate>
{
    id <WCCanvasDynamicDataLoaderDelegate> _delegate;
}

+ (_Bool)cacheDynamicXML:(id)arg1 forCanvasId:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <WCCanvasDynamicDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCachedXMLForCanvasId:(unsigned long long)arg1;
- (void)handleAdCanvasInfoResponse:(id)arg1;
- (void)handleGameCanvasInfoResponse:(id)arg1;
- (id)init;
- (void)loadDynamicXMLForCanvasId:(unsigned long long)arg1;
- (void)loadGameCanvasDynamicDataForApp:(id)arg1 shareType:(id)arg2 userInfo:(id)arg3;

@end

