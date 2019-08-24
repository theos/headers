#import "UIKeyboardTaskExecutionContext.h"

@interface UIKeyboardTaskQueue : NSObject

@property (retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext;

- (void)addTask:(id)task;

@end
