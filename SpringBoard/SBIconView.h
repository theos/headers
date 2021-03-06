#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class SBIcon;

@interface SBIconView : UIView

+ (CGSize)defaultIconSize;

- (NSString *)location;

@property (nonatomic, retain) SBIcon *icon;

@end
