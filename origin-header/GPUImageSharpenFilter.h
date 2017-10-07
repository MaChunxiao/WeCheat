//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageSharpenFilter : GPUImageFilter
{
    int sharpnessUniform;
    int imageWidthFactorUniform;
    int imageHeightFactorUniform;
    double _sharpness;
}

- (id)init;
@property(nonatomic) double sharpness; // @synthesize sharpness=_sharpness;
- (void)setupFilterForSize:(struct CGSize)arg1;

@end
