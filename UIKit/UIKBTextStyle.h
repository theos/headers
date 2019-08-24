#import <UIKit/UIKit.h>

@interface UIKBTextStyle : NSObject

+ (instancetype)styleWithFontName:(NSString *)fontName withFontSize:(CGFloat)fontSize;
+ (instancetype)styleWithTextColor:(NSString *)textColor;

@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSString *etchColor;

@property (assign) CGFloat fontSize;

@property (assign) CGPoint textOffset;

@end
