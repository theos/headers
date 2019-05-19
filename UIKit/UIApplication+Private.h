@class UIStatusBar;

typedef enum {
	UIBackgroundStyleDefault,
	UIBackgroundStyleTransparent,
	UIBackgroundStyleLightBlur,
	UIBackgroundStyleDarkBlur,
	UIBackgroundStyleDarkTranslucent
} UIBackgroundStyle;

@interface UIApplication (Private)

@property (nonatomic, retain) UIStatusBar *statusBar;
@property (assign) float backlightLevel;

+ (BOOL)registerAsSystemApp;
+ (BOOL)shouldMakeUIForDefaultPNG;
- (BOOL)isSuspended;
- (BOOL)_isSpringBoard;
- (UIInterfaceOrientation)activeInterfaceOrientation;
- (NSString *)displayIdentifier;
- (NSInteger)_frontMostAppOrientation;
- (void)_setBackgroundStyle:(UIBackgroundStyle)backgroundStyle;

@end
