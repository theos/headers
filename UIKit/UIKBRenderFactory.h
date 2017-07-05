#import <Foundation/Foundation.h>

@interface UIKBRenderFactory : NSObject
+ (BOOL)_enabled;
+ (NSInteger)_graphicsQuality;
- (UIKBRenderConfig *)renderConfig;
@end
