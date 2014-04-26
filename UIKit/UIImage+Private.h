#import <IOSurface/IOSurface.h>
#include <sys/cdefs.h>

__BEGIN_DECLS

UIImage *_UIImageWithName(NSString *name);

__END_DECLS

@interface UIImage (Private)

+ (UIImage *)kitImageNamed:(NSString *)name;
+ (UIImage *)imageNamed:(NSString *)name inBundle:(NSBundle *)bundle;

- (instancetype)_initWithIOSurface:(IOSurfaceRef)surface scale:(CGFloat)scale orientation:(UIImageOrientation)orientation;

@property CGFloat scale;

@end
