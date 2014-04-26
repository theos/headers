@interface BBAction : NSObject

+ (instancetype)actionWithLaunchBundleID:(NSString *)bundleID callblock:(id)block;
+ (instancetype)actionWithLaunchURL:(NSURL *)url callblock:(id)block;

@end
