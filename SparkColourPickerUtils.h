#import <UIKit/UIKit.h>

@interface SparkColourPickerUtils : NSObject
+ (NSString*)hexStringFromColour:(UIColor*)colour;
+ (NSString*)rgbStringFromColour:(UIColor*)colour;
+ (UIColor*)inverseColour:(UIColor*)colour;
+ (UIColor*)colour:(UIColor*)colour withBrightness:(float)newBrightness;
+ (BOOL)colourIsBlack:(UIColor*)colour;
+ (BOOL)colourIsWhite:(UIColor*)colour;
+ (UIColor*)colourWithString:(NSString*)colourString;
+ (UIColor *)colourWithString:(NSString *)stringToConvert withFallback:(NSString*)fallback;
+ (UIColor *)colourWithString:(NSString *)stringToConvert withFallbackColour:(UIColor*)fallback;
+ (UIColor*)colourWithRGBString:(NSString*)stringToConvert;
+ (UIColor *)colourWithHexString:(NSString *)stringToConvert;
+ (BOOL)colourIsLight:(UIColor*)colour;
+ (UIColor*)interpolateFrom:(UIColor*)startColour toColour:(UIColor*)endColour withPercentage:(float)percentage;
@end
