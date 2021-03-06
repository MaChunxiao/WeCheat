//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonPlayer.h"

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, NSString;

@interface SimpleCommonPlayer : CommonPlayer <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_m_audioPlayer;
}

- (void).cxx_destruct;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (double)duration;
- (_Bool)isPlaying;
@property(retain, nonatomic) AVAudioPlayer *m_audioPlayer; // @synthesize m_audioPlayer=_m_audioPlayer;
- (void)pause;
- (void)resume;
- (void)start;
- (void)stop;
- (void)updateData:(id)arg1;
- (void)updatePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

