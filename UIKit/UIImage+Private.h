#import <IOSurface/IOSurface.h>

@interface UIImage (Private)

+ (UIImage *)kitImageNamed:(NSString *)name;

- (instancetype)_initWithIOSurface:(IOSurfaceRef)surface scale:(CGFloat)scale orientation:(UIImageOrientation)orientation;

@end
