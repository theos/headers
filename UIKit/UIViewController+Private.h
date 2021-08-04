#import <UIKit/UIKit.h>

@interface UIViewController (Private)

+ (instancetype)viewControllerForView:(UIView *)view;

@property (nonatomic, retain) UIScrollView *contentScrollView;
@property (readwrite) UIInterfaceOrientation interfaceOrientation;

- (UIViewController *)parentOrPresentingViewController;

@end
