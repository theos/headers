#import "UIKeyboardInputMode.h"

@interface UIKBRenderConfig : NSObject

+ (instancetype)darkConfig;
+ (instancetype)defaultConfig;
+ (instancetype)defaultEmojiConfig NS_AVAILABLE_IOS(8_3);

+ (instancetype)configForAppearance:(NSInteger)appearance NS_DEPRECATED_IOS(7_0, 8_3);
+ (instancetype)configForAppearance:(NSInteger)appearance inputMode:(UIKeyboardInputMode *)inputMode NS_AVAILABLE_IOS(8_3);

@property (assign) CGFloat keycapOpacity;

@property (assign) BOOL whiteText;
@property (assign) BOOL lightKeyboard;

- (NSInteger)backdropStyle;

@end
