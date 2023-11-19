#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>

@interface SBNotificationCenterWidgetController : NSObject

+ (NSString *)containingBundleIdentifierForWidgetWithBundleIdentifer:(NSString *)identifier;

@end
