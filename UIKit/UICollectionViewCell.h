#ifdef __IPHONE_6_0
#include_next <UIKit/UICollectionViewCell.h>
#else
#import <UIKit/UIView.h>

@interface UICollectionViewCell : UIView

@end
#endif
