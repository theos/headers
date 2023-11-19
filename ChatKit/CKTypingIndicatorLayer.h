#import <QuartzCore/CALayer.h>

@interface CKTypingIndicatorLayer : CALayer

- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimation;

@end
