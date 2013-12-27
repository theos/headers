#import "SBAppSliderScrollingViewDelegate.h"

@class SBAppSliderScrollingViewController;

@interface SBAppSliderController : UIViewController <SBAppSliderScrollingViewDelegate>

- (NSString *)_displayIDAtIndex:(NSUInteger)index;

@property (nonatomic, retain) UIScrollView *contentScrollView;
@property (nonatomic, retain) NSMutableArray *applicationList;
@property (nonatomic, retain) SBAppSliderScrollingViewController *pageController;

@end
