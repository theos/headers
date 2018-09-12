#if TARGET_OS_IPHONE
@interface NSDistributedNotificationCenter : NSNotificationCenter

@property BOOL suspended;

+ (NSDistributedNotificationCenter *)defaultCenter;
- (void)addObserver:(id)notificationObserver selector:(SEL)notificationSelector name:(NSString *)notificationName object:(NSString *)notificationSender;
- (void)postNotificationName:(NSString *)notificationName object:(NSString *)notificationSender userInfo:(NSDictionary *)notificationInfo;
- (void)postNotificationName:(NSString *)notificationName object:(NSString *)notificationSender userInfo:(NSDictionary *)userInfo deliverImmediately:(BOOL)deliverImmediately;

@end
#else
#include_next <Foundation/NSDistributedNotificationCenter.h>
#endif
