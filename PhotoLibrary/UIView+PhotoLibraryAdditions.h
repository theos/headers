#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface UIView (PhotoLibraryAdditions)

+ (NSTimeInterval)pl_setHiddenAnimationDuration;
- (void)pl_setHidden:(BOOL)hidden animated:(BOOL)animated;

@end
