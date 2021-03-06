#import <UIKit/UIKit.h>

@class SBIcon;

@interface SBIconView : UIView

+ (CGSize)defaultIconSize;

@property (nonatomic, retain) SBIcon *icon;

@end
