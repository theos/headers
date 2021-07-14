#import "UIKBRenderConfig.h"

@interface UIKBRenderFactory : NSObject

+ (BOOL)_enabled;

+ (NSInteger)_graphicsQuality;

- (UIKBRenderConfig *)renderConfig;

- (NSString *)deleteKeyImageName;
- (NSString *)deleteOnKeyImageName API_AVAILABLE(ios(9.0));

@end
