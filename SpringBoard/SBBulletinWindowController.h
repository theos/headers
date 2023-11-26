#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>

@interface SBBulletinWindowController : NSObject

+ (instancetype)sharedInstance;

- (void)setBusy:(BOOL)busy forReason:(NSString *)reason;

@end