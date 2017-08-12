#import "UIKBRenderConfig.h"

@interface UIPeripheralHost : NSObject

+ (instancetype)sharedInstance;

@property(nonatomic) BOOL automaticAppearanceEnabled;

- (UIView *)transformedContainerView;
- (UIViewController *)containerRootController;
- (UIKBRenderConfig *)_renderConfigForCurrentResponder;

- (void)updateRenderConfigForCurrentResponder;

@end
