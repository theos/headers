#import "SBApplication.h"

@interface SBApplicationController : NSObject
+(SBApplicationController *)sharedInstance;
-(SBApplication *)applicationWithDisplayIdentifier:(NSString *)bundleIdentifier;
@end
