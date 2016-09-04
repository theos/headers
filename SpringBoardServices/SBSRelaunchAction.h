#import <BaseBoard/BSAction.h>

typedef NS_ENUM(NSUInteger, SBSRelaunchActionOptions) {
	// TODO: fill out enum
	SBSRelaunchActionOptionsIdk
};

@interface SBSRelaunchAction : BSAction

@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly, retain) NSURL *targetURL;
@property (nonatomic, readonly) SBSRelaunchActionOptions options;

+ (instancetype)actionWithReason:(NSString *)reason options:(SBSRelaunchActionOptions)options targetURL:(NSURL *)targetURL;

- (instancetype)initWithReason:(NSString *)reason options:(SBSRelaunchActionOptions)options targetURL:(NSURL *)targetURL;

@end
