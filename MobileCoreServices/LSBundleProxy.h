#import "LSResourceProxy.h"

@interface LSBundleProxy : LSResourceProxy
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSURL *bundleURL;
@end
