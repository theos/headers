@class SBLockScreenNotificationListController;

@interface SBLockScreenManager : NSObject

+ (instancetype)sharedInstance;

- (void)lockUIFromSource:(NSUInteger)source withOptions:(id)options;

@property (nonatomic, retain) SBLockScreenNotificationListController *lockScreenViewController;

@end
