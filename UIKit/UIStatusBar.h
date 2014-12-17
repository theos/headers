#import "UIStatusBarForegroundView.h"

@interface UIStatusBar : UIView {
	UIStatusBarForegroundView *_foregroundView;
}

+ (UIStatusBarStyle)defaultStatusBarStyle;
+ (CGFloat)heightForStyle:(UIStatusBarStyle)statusBarStyle orientation:(UIInterfaceOrientation)orientation;

@end
