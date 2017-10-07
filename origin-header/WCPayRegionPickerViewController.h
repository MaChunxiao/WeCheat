//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "LocationRetrieveDelegate-Protocol.h"
#import "MMRegionSeachResultsViewControllerDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LocationRetriever, MMRegionCodeMgr, MMRegionSeachResultsViewController, MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UISearchController, UIViewController;
@protocol WCPayRegionPickerViewControllerDelegate;

@interface WCPayRegionPickerViewController : WCPayBaseViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, MMRegionSeachResultsViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, LocationRetrieveDelegate, PBMessageObserverDelegate>
{
    MMTableView *m_tableView;
    NSMutableDictionary *m_dataDict;
    NSMutableArray *m_dataAry;
    _Bool m_isInitRegionCode;
    NSString *m_selectedRegionCode;
    MMRegionCodeMgr *m_regionCodeMgr;
    NSArray *arrCurRegionCodes;
    LocationRetriever *_locationRetriever;
    int m_iLocationRetrieveResult;
    NSMutableArray *m_arrServerReturnCode;
    _Bool m_bInCurrent;
    _Bool _isTopLevel;
    _Bool _openSearch;
    _Bool _chinaFirst;
    UIViewController *topController;
    id <WCPayRegionPickerViewControllerDelegate> _delegate;
    NSArray *_allRegions;
    UISearchController *_searchController;
    MMRegionSeachResultsViewController *_resultsController;
    NSArray *_foreignCountries;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnDataChange;
- (void)OnReturn;
@property(retain, nonatomic) NSArray *allRegions; // @synthesize allRegions=_allRegions;
@property(retain, nonatomic) NSArray *arrCurRegionCodes; // @synthesize arrCurRegionCodes;
@property(nonatomic) _Bool chinaFirst; // @synthesize chinaFirst=_chinaFirst;
- (void)dealloc;
@property(nonatomic) __weak id <WCPayRegionPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)didSelectRegion:(id)arg1;
@property(retain, nonatomic) NSArray *foreignCountries; // @synthesize foreignCountries=_foreignCountries;
- (id)getResultsWithRegion:(id)arg1;
- (void)initRegion;
- (void)initTableView;
- (id)initWithArray:(id)arg1;
- (_Bool)isForeignCountriesEntranceCell:(id)arg1;
- (_Bool)isLocationRetrieving;
- (_Bool)isLocationSection:(long long)arg1;
@property(nonatomic) _Bool isTopLevel; // @synthesize isTopLevel=_isTopLevel;
- (id)makeForeginEntrance:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
@property(nonatomic) _Bool openSearch; // @synthesize openSearch=_openSearch;
- (void)resultVC:(id)arg1 didSelectedRegion:(id)arg2;
@property(retain, nonatomic) MMRegionSeachResultsViewController *resultsController; // @synthesize resultsController=_resultsController;
- (void)scrollToRegion:(id)arg1;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
- (void)selectForeignCountriesEntranceCell;
@property(retain, nonatomic) NSString *selectedRegionCode; // @synthesize selectedRegionCode=m_selectedRegionCode;
@property(nonatomic) __weak UIViewController *topController; // @synthesize topController;
- (void)setupSearch;
- (void)setupView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
