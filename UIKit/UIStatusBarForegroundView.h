@class UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarForegroundView : UIView

- (instancetype)initWithFrame:(CGRect)frame foregroundStyle:(UIStatusBarForegroundStyleAttributes *)foregroundStyle usesVerticalLayout:(BOOL)usesVerticalLayout;

@property (nonatomic, retain) UIStatusBarForegroundStyleAttributes *foregroundStyle;

@end
