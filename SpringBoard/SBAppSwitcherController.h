#import "SBAppSwitcherScrollingViewDelegate.h"
#import <UIKit/UIViewController.h>

@class SBAppSwitcherPageViewController;

@interface SBAppSwitcherController : UIViewController <SBAppSwitcherScrollingViewDelegate>

@property (nonatomic, retain) SBAppSwitcherPageViewController *pageController;

@end
