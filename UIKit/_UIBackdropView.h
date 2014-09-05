@class _UIBackdropViewSettings, _UIBackdropEffectView;

@interface _UIBackdropView : UIView

- (instancetype)initWithFrame:(CGRect)frame autosizesToFitSuperview:(BOOL)autosizes settings:(_UIBackdropViewSettings *)settings;

- (void)transitionToSettings:(_UIBackdropViewSettings *)settings;
- (void)transitionToStyle:(NSUInteger)style; // don't know what the enum values are yet
- (void)transitionToPrivateStyle:(NSUInteger)privateStyle; // currently calls the above method

@property (nonatomic, retain) _UIBackdropEffectView *backdropEffectView;

@end
