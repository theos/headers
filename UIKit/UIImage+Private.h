#import <IOSurface/IOSurface.h>

@interface UIImage (Private)

+ (UIImage *)kitImageNamed:(NSString *)name;
+ (UIImage *)imageNamed:(NSString *)name inBundle:(NSBundle *)bundle;

- (instancetype)_initWithIOSurface:(IOSurfaceRef)surface scale:(CGFloat)scale orientation:(UIImageOrientation)orientation;

@end
