//
//  ViewController.m
//  ZSImagePickerController
//
//  Created by lmx on 16/10/18.
//  Copyright © 2016年 zhangsen. All rights reserved.
//

#import "ViewController.h"
#import "ZSImagePickerController.h"

@interface ViewController ()<ZSImagePickerControllerDelegate,UINavigationControllerDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UIButton *button = [UIButton buttonWithType:UIButtonTypeSystem];
    [button setTitle:@"自定义相册" forState:UIControlStateNormal];
    [button addTarget:self action:@selector(click:) forControlEvents:UIControlEventTouchUpInside];
    button.frame = CGRectMake(100, 200, 150, 60);
    [self.view addSubview:button];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)click:(UIButton *)sender{
    ZSImagePickerController *imagePicker = [[ZSImagePickerController alloc]init];
    imagePicker.isNeedCustom = YES;
    imagePicker.zs_delegate = self;
    [self presentViewController:imagePicker animated:YES completion:nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)zs_imagePickerController:(nullable ZSImagePickerController *)picker beyondMaxSelectedPhotoCount:(NSInteger)count{
    NSLog(@"%zd",count);
}

- (void)zs_imagePickerController:(nullable ZSImagePickerController *)picker didFinishPickingMediaWithInfo:(nullable NSDictionary<NSString *,NSArray *> *)info{
    NSLog(@"%@",info);
}

- (void)zs_imagePickerControllerDidCancel:(nullable ZSImagePickerController *)picker{
    NSLog(@"Cancel");
}

- (void)zs_imagePickerController:(nullable ZSImagePickerController *)picker didFinishPickingImage:(nullable NSDictionary<NSString *,id> *)info{
    NSLog(@"%@",info);
}
@end
