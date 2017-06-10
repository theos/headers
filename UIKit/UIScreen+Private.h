#import <UIKit/UIKit.h>

@interface UIScreen (Addition)
- (CGRect)_interfaceOrientedBounds;
- (CGRect)_interfaceOrientedMainSceneBounds;
- (CGRect)_referenceBounds;
- (CGRect)_realDisplayBounds;
- (CGRect)applicationFrame;
- (NSInteger)_interfaceOrientation;
@end
