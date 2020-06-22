#import <CoreGraphics/CoreGraphics.h>

@interface UIKBGradient : NSObject

+ (instancetype)gradientWithFlatColor:(NSString *)color;

- (CGGradientRef)CGGradient;

@end
