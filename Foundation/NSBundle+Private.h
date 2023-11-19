#import <Foundation/NSBundle.h>
#import <CoreFoundation/CoreFoundation.h>

@interface NSBundle (Private)

- (CFBundleRef)_cfBundle;

@end
