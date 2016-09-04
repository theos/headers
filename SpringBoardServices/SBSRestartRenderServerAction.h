#import <BaseBoard/BSAction.h>

@class NSURL;

@interface SBSRestartRenderServerAction : BSAction

@property (nonatomic,readonly) NSURL *targetURL;

+ (instancetype)restartActionWithTargetRelaunchURL:(NSURL *)arg1 ;
- (NSURL *)targetURL;
@end