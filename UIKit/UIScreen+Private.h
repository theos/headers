#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface UIScreen (Private)

- (CGRect)_interfaceOrientedBounds;
- (CGRect)_interfaceOrientedMainSceneBounds;
- (CGRect)_referenceBounds;
- (CGRect)_realDisplayBounds;
- (CGRect)applicationFrame;
- (NSInteger)_interfaceOrientation;

- (UIEdgeInsets)_sceneSafeAreaInsets API_AVAILABLE(ios(11.0));

@end
