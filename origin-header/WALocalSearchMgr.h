//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WALocalSearchMgr : NSObject
{
    NSMutableArray *_arrWeApp;
    NSMutableArray *_arrMainResult;
    NSMutableDictionary *_dicMainSearchTip;
    NSMutableArray *_arrDetailResult;
    NSMutableDictionary *_dicDetailSearchTip;
    NSMutableDictionary *_dicChinesePinYin;
    _Bool _bSceneForFTS;
    NSString *_newestQueryText;
    NSString *_newestQueryTextForDetail;
    NSString *_lastQueryText;
    NSString *_lastQueryTextForDetail;
}

- (void).cxx_destruct;
- (void)asyncCommonSearch:(id)arg1;
- (void)asyncSearch:(id)arg1;
- (void)asyncSearchForDetail:(id)arg1;
@property(nonatomic) _Bool bSceneForFTS; // @synthesize bSceneForFTS=_bSceneForFTS;
- (void)cancelSearch;
- (void)cancelSearchForDetail;
- (void)doInitWorker;
- (void)doSearch:(id)arg1;
- (void)doSearchForDetail:(id)arg1;
- (id)getArrDetailSearchResult;
- (id)getArrMainSearchResult;
- (id)getDetailMatchTipForKey:(id)arg1;
- (id)getDetailSearchMatchTip;
- (id)getMainSearchMatchTip;
- (id)getMatchTipForKey:(id)arg1;
- (_Bool)hasSearchDoneForDetailPage:(id)arg1;
- (_Bool)hasSearchDoneForHomePage:(id)arg1;
- (_Bool)hasSearchResultForHomePage:(id)arg1;
- (void)initSource;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
@property(retain, nonatomic) NSString *lastQueryTextForDetail; // @synthesize lastQueryTextForDetail=_lastQueryTextForDetail;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(retain, nonatomic) NSString *newestQueryTextForDetail; // @synthesize newestQueryTextForDetail=_newestQueryTextForDetail;
- (void)refreshSource:(id)arg1;

@end

