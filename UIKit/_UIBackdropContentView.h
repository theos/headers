#import "_UIBackdropView.h"

@interface _UIBackdropContentView : UIView

- (void)recursivelyRemoveBackdropMaskViewsForView:(UIView *)view;
- (void)backdropView:(_UIBackdropView *)backdropView recursivelyUpdateMaskViewsForView:(UIView *)view;

@end
