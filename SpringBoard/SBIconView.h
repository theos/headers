#import <UIKit/UIView.h>

@class SBIcon;

@interface SBIconView : UIView

+ (CGSize)defaultIconSize;

- (NSString *)location;

@property (nonatomic, retain) SBIcon *icon;

@end
