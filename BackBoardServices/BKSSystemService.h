#import <Foundation/Foundation.h>

@interface BKSSystemService : NSObject

- (pid_t)pidForApplication:(NSString *)application;

@end
