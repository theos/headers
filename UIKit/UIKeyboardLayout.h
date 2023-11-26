#import <UIKit/UIView.h>

@class UIKBRenderConfig;

@interface UIKeyboardLayout : UIView

@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property CGFloat passcodeOutlineAlpha;

@end
