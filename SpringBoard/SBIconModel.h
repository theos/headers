@class SBApplicationIcon;

@interface SBIconModel : NSObject

- (SBApplicationIcon *)applicationIconForBundleIdentifier:(NSString *)bundleID;

@end