#import <Foundation/Foundation.h>

@interface FBProcessState : NSObject

@property (nonatomic, getter=isRunning) BOOL running;

@property (nonatomic) int pid;

@end
