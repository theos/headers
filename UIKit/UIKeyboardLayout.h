#import <CoreGraphics/CoreGraphics.h>

@class UIKBRenderConfig;

@interface UIKeyboardLayout : UIView

@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property CGFloat passcodeOutlineAlpha;

@end
