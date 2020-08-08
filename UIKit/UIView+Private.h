@class UIKBRenderConfig;

@interface UIView (Private)

- (UIViewController *)_viewControllerForAncestor;

- (void)layoutBelowIfNeeded;

- (UIKBRenderConfig *)_inheritedRenderConfig; // iOS 7+
- (void)_setRenderConfig:(UIKBRenderConfig *)renderConfig; // iOS 7+

@end
