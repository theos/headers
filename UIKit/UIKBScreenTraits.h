#import <UIKit/UIScreen.h>

@interface UIKBScreenTraits : NSObject

+ (instancetype)traitsWithScreen:(UIScreen *)screen orientation:(NSInteger)orientation;

@property (retain, nonatomic) id orientationKey;

@property (assign, nonatomic) CGFloat keyboardWidth;

@end
