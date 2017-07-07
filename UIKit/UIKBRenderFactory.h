#import "UIKBRenderConfig.h"

@interface UIKBRenderFactory : NSObject
+ (BOOL)_enabled;
+ (NSInteger)_graphicsQuality;
- (UIKBRenderConfig *)renderConfig;
- (NSString *)deleteKeyImageName;
- (NSString *)deleteOnKeyImageName; // iOS 9.0+
@end
