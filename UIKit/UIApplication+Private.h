#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

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

- (NSInteger)_frontMostAppOrientation;

- (NSString *)displayIdentifier;

- (void)_setBackgroundStyle:(UIBackgroundStyle)backgroundStyle;

@end
