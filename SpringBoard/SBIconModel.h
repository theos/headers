#import <Foundation/Foundation.h>

@class SBApplicationIcon;

API_AVAILABLE(ios(3.0)) @interface SBIconModel : NSObject

- (SBApplicationIcon *)applicationIconForBundleIdentifier:(NSString *)bundleID API_AVAILABLE(ios(8.0));
- (SBApplicationIcon *)applicationIconForDisplayIdentifier:(NSString *)displayIdentifier API_DEPRECATED_WITH_REPLACEMENT("expectedIconForDisplayIdentifier:displayIdentifier", ios(4.0, 7.0));
- (SBApplicationIcon *)expectedIconForDisplayIdentifier:(NSString *)displayIdentifier API_AVAILABLE(ios(6.0));

- (NSArray *)visibleIconIdentifiers;

@property (retain, nonatomic) NSDictionary *leafIconsByIdentifier API_AVAILABLE(ios(6.0));

@end
