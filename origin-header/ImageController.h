//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "ImageBrowseDelegate-Protocol.h"
#import "ImagePreviewDelegate-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CaptureVideoInfo, MMLoadingView, NSString, UINavigationController, UIViewController;
@protocol ImageControllerDelegate;

@interface ImageController : MMObject <MMSightCameraViewControllerDelegate, WCActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, ImagePreviewDelegate, ImageBrowseDelegate, MMImagePickerManagerDelegate, UIAlertViewDelegate>
{
    id <ImageControllerDelegate> m_delegate;
    CaptureVideoInfo *m_oVideoInfo;
    UINavigationController *m_oVideoPicker;
    MMLoadingView *m_loadingView;
    _Bool m_isJustReturnMMAsset;
}

- (void).cxx_destruct;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)OpenCameraController;
- (void)OpenMediaBrowser;
- (void)Reset;
- (void)SendImageWithURL:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)chatUserNameForSightStatistics;
- (void)dealloc;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(_Bool)arg3 ImageInfo:(id)arg4 fromImagePicker:(id)arg5;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(_Bool)arg3 fromImagePicker:(id)arg4;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 fromImagePicker:(id)arg3;
- (void)didSelectImage:(id)arg1 fromImagePicker:(id)arg2;
- (void)didSelectMMAsset:(id)arg1 finish:(_Bool)arg2 fromImagePicker:(id)arg3;
- (void)downloadFailInImageBrowse;
- (id)getViewController;
- (void)handleVideo:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (id)init;
- (void)initLoadingView;
@property(nonatomic) __weak id <ImageControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset;
@property(retain, nonatomic) CaptureVideoInfo *m_oVideoInfo; // @synthesize m_oVideoInfo;
@property(retain, nonatomic) UIViewController *m_oVideoPicker; // @synthesize m_oVideoPicker;
- (void)onSendCaptrueCancel:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4 editVideoAttr:(id)arg5;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)showImagePicker:(long long)arg1;
- (void)showImagePicker:(long long)arg1 useSightCamera:(_Bool)arg2 sightCameraMode:(unsigned long long)arg3;
- (void)statusBarShowOniOS10;
- (void)willPresentAlertView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

