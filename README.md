# ZSImagePickerController
相册、照片选择器（多选、单选）

最近学习了一下iOS 静态库的集成，正好在造轮子。
在ZSDefineFile.h文件里面提供了一些参数，方便自定义样式

# photoList  相册列表的宽度

static const CGFloat   minPhotoListWidth = 80;

# AlnumsMaxSelectedNumber  最多可以选择的照片数量

static const NSInteger maxSelectedPhotoCount = 9;

# 每一行可现实的缩略图数量

static const NSInteger maxLinePhotoCount = 4;

# AlnumsCell 缩略图之间的间隙

static const NSInteger minAlnumsImageSpace = 1;

# inspect  预览图之间的间隙

static const NSInteger inspectImageSpace = 20;

# zoomScale 图片放大和缩小的倍数

static const NSInteger maximumZoomScale = 3;
static const NSInteger minimumZoomScale = 1;

# selectedButton(UIImage *)  选择照片时选中和未选中时的样式，类型为UIImage ＊ 
 kBUTTONIMAGE nil
 kSELECTEDBUTTONIMAGE nil

# 选择照片按钮的大小
static const CGFloat selectedButtonWidth  = 20;
static const CGFloat selectedButtonHeight = 20;

# kCELLHEIGHT、kCELLWINDTH  控制选择按钮的坐标 默认在右上角
 kSELECTEDBUTTONFRAME CGRectMake(kCELLWINDTH - selectedButtonWidth,0,selectedButtonWidth,selectedButtonHeight)
 
# imageNumberColor (return UIColor *) 选中的数量标签的背景颜色和文字颜色
 kIMAGENUMBERBACKGROUNDCOLOR RGBA(30, 180, 0, 1)
 kIMAGENUMBERTEXTCOLOR [UIColor whiteColor]

# doneButtonColor 完成按钮的文字颜色
 kDONEBUTTONCOLOR RGBA(30, 180, 0, 1)

# lookButtonCOlor 预览按钮的文字颜色
 kLOOKBUTTONCOLOR [UIColor blackColor]
 
## ZSImagePickerController.h文件中提供了delegate方法和一个参数
 
 初始化和显示ZSImagePickerController控制器的方法
 ZSImagePickerController *imagePicker = [[ZSImagePickerController alloc]init];
 imagePicker.isNeedCustom = YES;
 imagePicker.zs_delegate = self;
 [self presentViewController:imagePicker animated:YES completion:nil];

参数isNeedCustom默认为NO，为原生的iOS相册选择器。
当设置为YES的时候，需要遵循的协议是zs_delegate，以方便调用自定义多选相册的代理方法。
- (void)zs_imagePickerController:(nullable ZSImagePickerController *)picker didFinishPickingImage:(nullable NSDictionary<NSString *,id> *)info;
点击完成后将选中的相片的PHAsset对象返回
- (void)zs_imagePickerController:(nullable ZSImagePickerController *)picker beyondMaxSelectedPhotoCount:(NSInteger)count;
当选择的相片数量超过最大限制的时候返回
