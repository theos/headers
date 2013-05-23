#import "SBHUDView.h"

@interface SBHUDController : NSObject
+ (SBHUDController *)sharedHUDController;
- (void)presentHUDView:(SBHUDView *)hud autoDismissWithDelay:(double)delay;
@end
