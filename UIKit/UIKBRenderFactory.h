#import "UIKBRenderConfig.h"

@interface UIKBRenderFactory : NSObject

+ (BOOL)_enabled;

+ (NSInteger)_graphicsQuality;

- (UIKBRenderConfig *)renderConfig;

- (NSString *)deleteKeyImageName;
- (NSString *)deleteOnKeyImageName NS_AVAILABLE_IOS(9_0);

@end
