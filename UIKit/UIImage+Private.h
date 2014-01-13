#import <IOSurface/IOSurface.h>

#ifdef __cplusplus
extern "C" {
#endif
UIImage *_UIImageWithName(NSString *name);
#ifdef __cplusplus
}
#endif

@interface UIImage (Private)

+ (UIImage *)kitImageNamed:(NSString *)name;
+ (UIImage *)imageNamed:(NSString *)name inBundle:(NSBundle *)bundle;

- (instancetype)_initWithIOSurface:(IOSurfaceRef)surface scale:(CGFloat)scale orientation:(UIImageOrientation)orientation;

@property CGFloat scale;

@end
