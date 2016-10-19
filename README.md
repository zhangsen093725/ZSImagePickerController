# ZSImagePickerController
相册、照片选择器（多选、单选）

// photoList  相册列表的宽度
static const CGFloat   minPhotoListWidth = 80;

// AlnumsMaxSelectedNumber  最多可以选择的照片数量
static const NSInteger maxSelectedPhotoCount = 9;

// 每一行可现实的缩略图数量
static const NSInteger maxLinePhotoCount = 4;

// AlnumsCell 缩略图之间的间隙
static const NSInteger minAlnumsImageSpace = 1;

// inspect  预览图之间的间隙
static const NSInteger inspectImageSpace = 20;

// zoomScale 图片放大和缩小的倍数
static const NSInteger maximumZoomScale = 3;
static const NSInteger minimumZoomScale = 1;

// selectedButton(UIImage *)  选择照片时选中和未选中时的样式，类型为UIImage ＊ 
#define kBUTTONIMAGE nil
#define kSELECTEDBUTTONIMAGE nil

// 选择照片按钮的大小
static const CGFloat selectedButtonWidth  = 20;
static const CGFloat selectedButtonHeight = 20;

// kCELLHEIGHT、kCELLWINDTH  控制选择按钮的坐标 默认在右上角
#define kSELECTEDBUTTONFRAME CGRectMake(kCELLWINDTH - selectedButtonWidth,0,selectedButtonWidth,selectedButtonHeight)

// imageNumberColor (return UIColor *) 选中的数量d标签的背景颜色和文字x颜色
#define kIMAGENUMBERBACKGROUNDCOLOR RGBA(30, 180, 0, 1)
#define kIMAGENUMBERTEXTCOLOR [UIColor whiteColor]

// doneButtonColor 完成按钮的文字颜色
#define kDONEBUTTONCOLOR RGBA(30, 180, 0, 1)

// lookButtonCOlor 预览按钮的文字颜色
#define kLOOKBUTTONCOLOR [UIColor blackColor]
