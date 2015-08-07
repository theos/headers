typedef NS_ENUM(NSUInteger, UIStatusBarItemViewTextStyle) {
	UIStatusBarItemViewTextStyleRegular,
	UIStatusBarItemViewTextStyleBold
};

@interface UIStatusBarItemView : UIView

- (UIImage *)imageWithShadowNamed:(NSString *)imageName;
- (UIImage *)imageWithText:(NSString *)text;

@end
