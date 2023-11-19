#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>
#import <Foundation/NSString.h>
#import <Foundation/NSRunLoop.h>

@interface PCPersistentTimer : NSObject

- (instancetype)initWithFireDate:(NSDate *)fireDate serviceIdentifier:(NSString *)serviceIdentifier target:(id)target selector:(SEL)selector userInfo:(id)userInfo;

- (void)scheduleInRunLoop:(NSRunLoop *)runLoop;

@end
