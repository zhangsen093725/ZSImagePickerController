//
//  ZSDefineFile.h
//  ZSChoosePhoto
//
//  Created by 张森 on 16/8/26.
//  Copyright © 2016年 张森. All rights reserved.
//

#ifndef ZSDefineFile_h
#define ZSDefineFile_h

// photoList
static const CGFloat   minPhotoListWidth = 80;

// AlnumsMaxSelectedNumber
static const NSInteger maxSelectedPhotoCount = 9;
static const NSInteger maxLinePhotoCount = 4;

// AlnumsCell
static const NSInteger minAlnumsImageSpace = 1;

// inspect
static const NSInteger inspectImageSpace = 20;

// zoomScale
static const NSInteger maximumZoomScale = 3;
static const NSInteger minimumZoomScale = 1;

// selectedButton(UIImage *)  
#define kBUTTONIMAGE nil
#define kSELECTEDBUTTONIMAGE nil

static const CGFloat selectedButtonWidth  = 20;
static const CGFloat selectedButtonHeight = 20;

// kCELLHEIGHT、kCELLWINDTH控制Button的坐标 默认在右上角
#define kSELECTEDBUTTONFRAME CGRectMake(kCELLWINDTH - selectedButtonWidth,0,selectedButtonWidth,selectedButtonHeight)

// imageNumberColor (return UIColor *)
#define kIMAGENUMBERBACKGROUNDCOLOR RGBA(30, 180, 0, 1)
#define kIMAGENUMBERTEXTCOLOR [UIColor whiteColor]

// doneButtonColor
#define kDONEBUTTONCOLOR RGBA(30, 180, 0, 1)

// lookButtonCOlor
#define kLOOKBUTTONCOLOR [UIColor blackColor]
#endif /* ZSDefineFile_h */
