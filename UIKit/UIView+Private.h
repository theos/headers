#import <UIKit/UIKit.h>

@class UIKBRenderConfig;

@interface UIView (Private)

- (UIViewController *)_viewControllerForAncestor;

- (void)layoutBelowIfNeeded;

- (UIKBRenderConfig *)_inheritedRenderConfig API_AVAILABLE(ios(7.0));
- (void)_setRenderConfig:(UIKBRenderConfig *)renderConfig API_AVAILABLE(ios(7.0));

@end
