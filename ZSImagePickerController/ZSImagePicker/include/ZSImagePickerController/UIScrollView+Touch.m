//
//  UIScrollView+Touch.m
//  UploadImage
//
//  Created by 张森 on 15/12/29.
//  Copyright © 2015年 张森. All rights reserved.
//

#import "UIScrollView+Touch.h"

@implementation UIScrollView (Touch)
- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    [[self nextResponder]touchesEnded:touches withEvent:event];
    [super touchesEnded:touches withEvent:event];
}
@end
