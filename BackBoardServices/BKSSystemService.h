#import <Foundation/Foundation.h>

API_AVAILABLE(ios(7.0))
@interface BKSSystemService : NSObject

- (pid_t)pidForApplication:(NSString *)application;

@end
