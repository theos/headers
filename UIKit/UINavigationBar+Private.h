#import <UIKit/UINavigationBar.h>

@interface UINavigationBar (Private)

@property (nonatomic, retain) NSArray *navigationItems;

@property (nonatomic, setter=_setHidesShadow:) BOOL _hidesShadow;

@end
