@class SBApplication;

@interface SBApplicationController : NSObject

+ (SBApplicationController *)sharedInstance;

- (SBApplication *)applicationWithDisplayIdentifier:(NSString *)bundleIdentifier;
- (SBApplication *)applicationWithBundleIdentifier:(NSString *)bundleIdentifier;
- (SBApplication *)applicationWithPid:(NSInteger)pid;

@property (nonatomic, retain) NSArray *allApplications;

@end
