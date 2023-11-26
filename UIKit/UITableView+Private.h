#import <UIKit/UITableView.h>
#import <UIKit/UIView.h>

@interface UITableView (Private)

@property (setter=_setMarginWidth:) CGFloat _marginWidth;

@property (nonatomic, retain) UIView *wrapperView;

@end
