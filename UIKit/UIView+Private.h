@interface UIView (Private)

- (UIViewController *)_viewControllerForAncestor;

- (void)layoutBelowIfNeeded;
- (void)setNeedsLayout;

@end
