#import <UIKit/UIKit.h>

@interface UIKBGradient : NSObject

+ (instancetype)gradientWithFlatColor:(NSString *)color;

- (CGGradientRef)CGGradient;

@end
