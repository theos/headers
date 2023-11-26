#import "UIKBRenderConfig.h"
#import <UIKit/UIKit.h>

@interface UIPeripheralHost : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic) BOOL automaticAppearanceEnabled;

- (UIView *)transformedContainerView;
- (UIViewController *)containerRootController;
- (UIResponder <UITextInputTraits> *)responder;
- (UIKBRenderConfig *)_renderConfigForCurrentResponder;

- (void)updateRenderConfigForCurrentResponder;

@end
