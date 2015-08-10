#import "UIStatusBarForegroundView.h"

typedef NS_ENUM(NSInteger, UIStatusBarPosition) {
	UIStatusBarPositionLeft,
	UIStatusBarPositionRight,
	UIStatusBarPositionCenter
};

@interface UIStatusBar : UIView {
	UIStatusBarForegroundView *_foregroundView;
}

+ (UIStatusBarStyle)defaultStatusBarStyle;
+ (CGFloat)heightForStyle:(UIStatusBarStyle)statusBarStyle orientation:(UIInterfaceOrientation)orientation;

@end
