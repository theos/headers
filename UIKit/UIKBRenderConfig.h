#import "UIKeyboardInputMode.h"

@interface UIKBRenderConfig : NSObject

+ (instancetype)darkConfig;
+ (instancetype)defaultConfig;
+ (instancetype)defaultEmojiConfig API_AVAILABLE(ios(8.3));

+ (instancetype)configForAppearance:(NSInteger)appearance API_DEPRECATED("Removed in iOS 9", ios(7.0, 8.3));
+ (instancetype)configForAppearance:(NSInteger)appearance inputMode:(UIKeyboardInputMode *)inputMode API_AVAILABLE(ios(8.3));

@property (assign) CGFloat keycapOpacity;

@property (assign) BOOL whiteText;
@property (assign) BOOL lightKeyboard;

- (NSInteger)backdropStyle;

@end
