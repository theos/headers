#import <Foundation/Foundation.h>

@interface FBWorkspaceEvent : NSObject

+ (instancetype)eventWithName:(NSString *)name handler:(/*^block*/id)handler;

- (void)execute;

@end
