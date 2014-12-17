const UIWindowLevel UIWindowLevelNotificationCenter = 1056.f;
const UIWindowLevel UIWindowLevelStatusBarLockScreen = 1052.f;
const UIWindowLevel UIWindowLevelAlertReal = 1996.f;

@interface UIWindow (Private)

+ (UIWindow *)keyWindow;
+ (NSArray *)allWindowsIncludingInternalWindows:(BOOL)internalWindows onlyVisibleWindows:(BOOL)onlyVisibleWindows;

- (void)_updateToInterfaceOrientation:(UIInterfaceOrientation)orientation duration:(double)duration force:(BOOL)force;

@property BOOL keepContextInBackground;
@property (nonatomic, retain, readonly) UIResponder *firstResponder;

@end
