@class _UIBackdropViewSettings;

@interface _UIBackdropView : UIView

- (instancetype)initWithFrame:(CGRect)frame autosizesToFitSuperview:(BOOL)autosizes settings:(_UIBackdropViewSettings *)settings;

@property (nonatomic, retain) _UIBackdropViewSettings *outputSettings;

@end
