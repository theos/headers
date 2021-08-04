#import <Foundation/Foundation.h>

@class SBHUDView;

@interface SBHUDController : NSObject

+ (instancetype)sharedHUDController;

- (void)presentHUDView:(SBHUDView *)hud autoDismissWithDelay:(double)delay;

@end
