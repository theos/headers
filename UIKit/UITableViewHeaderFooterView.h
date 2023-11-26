#ifdef __IPHONE_6_0
#include_next <UIKit/UITableViewHeaderFooterView.h>
#else
#import <UIKit/UITableViewCell.h>

@interface UITableViewHeaderFooterView : UITableViewCell

@end
#endif
