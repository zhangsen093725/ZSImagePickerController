//
//  ZSImagePickerController.h
//  ZSChoosePhoto
//
//  Created by 张森 on 16/8/17.
//  Copyright © 2016年 张森. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ZSImagePickerController;

@protocol ZSImagePickerControllerDelegate <NSObject>

@optional
- (void)zs_imagePickerController:(nullable ZSImagePickerController *)picker beyondMaxSelectedPhotoCount:(NSInteger)count;
- (void)zs_imagePickerController:(nullable ZSImagePickerController *)picker didFinishPickingMediaWithInfo:(nullable NSDictionary<NSString *,NSArray *> *)info;
- (void)zs_imagePickerControllerDidCancel:(nullable ZSImagePickerController *)picker;
- (void)zs_imagePickerController:(nullable ZSImagePickerController *)picker didFinishPickingImage:(nullable NSDictionary<NSString *,id> *)info;
@end

@interface ZSImagePickerController : UIImagePickerController
@property (nonatomic ,assign) BOOL isNeedCustom;
@property (nullable,nonatomic,weak) id <UINavigationControllerDelegate, ZSImagePickerControllerDelegate> zs_delegate;
@end
