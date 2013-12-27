#define UIWindowLevelNotificationCenter 1056.f

@interface UIWindow (Private)

+ (UIWindow *)keyWindow;
+ (NSArray *)allWindowsIncludingInternalWindows:(BOOL)internalWindows onlyVisibleWindows:(BOOL)onlyVisibleWindows;

- (void)_updateToInterfaceOrientation:(UIInterfaceOrientation)orientation duration:(double)duration force:(BOOL)force;

@property BOOL keepContextInBackground;

@end
