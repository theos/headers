#import "UIKeyboardTaskExecutionContext.h"

@interface UIKeyboardTaskQueue : NSObject

@property (retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext;

- (void)addTask:(void (^)(void))task;

@end
