#import <Foundation/Foundation.h>

@protocol FSSwitchSettingsViewController <NSObject> // Must be a UIViewController subclass
@optional
- (instancetype)initWithSwitchIdentifier:(NSString *)switchIdentifier;
@end
