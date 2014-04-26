@class _UIBackdropViewSettings;

@interface _UIBackdropView : UIView

- (instancetype)initWithFrame:(CGRect)frame autosizesToFitSuperview:(BOOL)autosizes settings:(_UIBackdropViewSettings *)settings;
- (void)transitionToSettings:(_UIBackdropViewSettings *)settings;

@end
