@class SBApplication;

@interface SBApplicationController : NSObject

+ (SBApplicationController *)sharedInstance;

- (SBApplication *)applicationWithDisplayIdentifier:(NSString *)bundleIdentifier;
- (SBApplication *)applicationWithBundleIdentifier:(NSString *)bundleIdentifier;

@end
