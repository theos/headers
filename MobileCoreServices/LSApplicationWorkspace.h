#import "LSBundleProxy.h"

@interface LSApplicationWorkspace : NSObject

+ (instancetype)defaultWorkspace;

- (NSArray *)applicationsAvailableForHandlingURLScheme:(NSString *)urlScheme;
- (NSURL *)URLOverrideForURL:(NSURL *)url;

- (void)enumerateBundlesOfType:(NSInteger)type block:(void (^)(LSBundleProxy *))block;

@end
