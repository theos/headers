@interface SBControlCenterController : NSObject

+ (instancetype)sharedInstance;

- (void)presentAnimated:(BOOL)animated completion:(void(^)())completion;
- (void)dismissAnimated:(BOOL)animated completion:(void(^)())completion;

@property (assign, getter=isUILocked, nonatomic) BOOL UILocked;

- (BOOL)_shouldShowGrabberOnFirstSwipe;

@end
