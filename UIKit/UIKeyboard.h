#import <UIKit/UIKit.h>

@interface UIKeyboard : UIView

+ (instancetype)activeKeyboard;
+ (instancetype)activeKeyboardForScreen:(UIScreen *)screen;

+ (BOOL)isOnScreen;

- (NSInteger)interfaceOrientation;

- (BOOL)isMinimized;

- (void)setMinimized:(BOOL)minimized;

@end
