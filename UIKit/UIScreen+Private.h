#import <UIKit/UIKit.h>

@interface UIScreen (Private)

- (CGRect)_interfaceOrientedBounds;
- (CGRect)_interfaceOrientedMainSceneBounds;
- (CGRect)_referenceBounds;
- (CGRect)_realDisplayBounds;
- (CGRect)applicationFrame;
- (NSInteger)_interfaceOrientation;
- (UIEdgeInsets)_sceneSafeAreaInsets NS_AVAILABLE_IOS(11_0);

@end
