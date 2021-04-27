@class SBApplicationIcon;

API_AVAILABLE(ios(3.0)) @interface SBIconModel : NSObject

- (SBApplicationIcon *)applicationIconForBundleIdentifier:(NSString *)bundleID NS_AVAILABLE_IOS(8_0);
- (SBApplicationIcon *)applicationIconForDisplayIdentifier:(NSString *)displayIdentifier NS_DEPRECATED_IOS(4_0, 8_0);
- (SBApplicationIcon *)expectedIconForDisplayIdentifier:(NSString *)displayIdentifier API_AVAILABLE(ios(6.0));
- (SBApplicationIcon *)applicationIconForDisplayIdentifier:(NSString *)displayIdentifier API_DEPRECATED_WITH_REPLACEMENT("expectedIconForDisplayIdentifier:displayIdentifier", ios(4.0, 7.0));

- (NSArray *)visibleIconIdentifiers;

@property (retain, nonatomic) NSDictionary *leafIconsByIdentifier API_AVAILABLE(ios(6.0));

@end
