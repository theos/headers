#import <UIKit/UIKit.h>

@interface UIKeyboard : UIView
+ (UIKeyboard *)activeKeyboard;
+ (UIKeyboard *)activeKeyboardForScreen:(UIScreen *)screen;
+ (BOOL)isOnScreen;
- (NSInteger)interfaceOrientation;
- (BOOL)isMinimized;
- (void)setMinimized:(BOOL)minimized;
@end
