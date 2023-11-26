#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>
#import <CoreGraphics/CoreGraphics.h>

@interface UIKBGradient : NSObject

+ (instancetype)gradientWithFlatColor:(NSString *)color;

- (CGGradientRef)CGGradient;

@end
