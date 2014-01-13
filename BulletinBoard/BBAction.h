@interface BBAction : NSObject

+ (instancetype)actionWithLaunchBundleID:(NSString *)bundleID callblock:(id)block;

@end
