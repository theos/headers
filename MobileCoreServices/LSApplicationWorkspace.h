#import "LSApplicationProxy.h"

@interface LSApplicationWorkspace : NSObject

+ (instancetype)defaultWorkspace;

- (void)openApplicationWithBundleID:(NSString *)bundleID;

- (NSArray<LSApplicationProxy *> *)allApplications;
- (NSArray<LSApplicationProxy *> *)allInstalledApplications;
- (NSArray<LSApplicationProxy *> *)directionsApplications;
- (NSArray<LSApplicationProxy *> *)unrestrictedApplications;

- (NSArray<NSString *> *)removedSystemApplications;

- (NSArray *)applicationsAvailableForHandlingURLScheme:(NSString *)urlScheme;
- (NSArray *)applicationsAvailableForOpeningURL:(NSURL *)url;
- (NSArray *)applicationsAvailableForOpeningURL:(NSURL *)url legacySPI:(BOOL)legacySPI;

- (NSURL *)URLOverrideForURL:(NSURL *)url;

- (BOOL)registerApplication:(NSURL *)url;
- (BOOL)registerPlugin:(NSURL *)url;

- (BOOL)unregisterApplication:(NSURL *)url;
- (BOOL)unregisterPlugin:(NSURL *)url;

- (BOOL)openURL:(NSURL *)url;

- (NSArray *)pluginsWithIdentifiers:(NSArray *)identifiers protocols:(NSArray *)protocols version:(id)version;

@end
