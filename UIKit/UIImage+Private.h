//#import <IOSurface/IOSurface.h>
#import <SpringBoard/SBApplicationIcon.h>
#include <sys/cdefs.h>

__BEGIN_DECLS

UIImage *_UIImageWithName(NSString *name);

__END_DECLS

@interface UIImage (Private)

+ (UIImage *)kitImageNamed:(NSString *)name;
+ (UIImage *)imageNamed:(NSString *)name inBundle:(NSBundle *)bundle;

+ (UIImage *)_applicationIconImageForBundleIdentifier:(NSString *)bundleIdentifier format:(SBApplicationIconFormat)format scale:(CGFloat)scale;

// - (instancetype)_initWithIOSurface:(IOSurfaceRef)surface scale:(CGFloat)scale orientation:(UIImageOrientation)orientation;

- (UIImage *)_applicationIconImageForFormat:(SBApplicationIconFormat)format precomposed:(BOOL)precomposed scale:(CGFloat)scale;

@property CGFloat scale;

@end
