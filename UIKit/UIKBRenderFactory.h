#import <Foundation/Foundation.h>

@interface UIKBRenderFactory : NSObject
+ (BOOL)_enabled;
- (UIKBRenderConfig *)renderConfig;
@end
