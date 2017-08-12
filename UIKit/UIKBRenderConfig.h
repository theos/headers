#import "UIKeyboardInputMode.h"

@interface UIKBRenderConfig : NSObject

+ (instancetype)darkConfig;
+ (instancetype)defaultConfig;
+ (instancetype)defaultEmojiConfig; // iOS 8.3+

+ (instancetype)configForAppearance:(NSInteger)appearance; // iOS < 8.3
+ (instancetype)configForAppearance:(NSInteger)appearance inputMode:(UIKeyboardInputMode *)inputMode;  // iOS 8.3+

@property(assign) CGFloat keycapOpacity;
@property(assign) BOOL whiteText;
@property(assign) BOOL lightKeyboard;

- (NSInteger)backdropStyle;

@end
