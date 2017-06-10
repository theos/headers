@interface UIKBRenderConfig : NSObject

+ (instancetype)darkConfig;
+ (instancetype)defaultConfig;

@property CGFloat keycapOpacity;
@property CGFloat blurRadius;
@property BOOL lightKeyboard;

- (BOOL)whiteText;

@end
