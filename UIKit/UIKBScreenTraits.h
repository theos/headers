#import <Foundation/Foundation.h>

@interface UIKBScreenTraits : NSObject
+ (UIKBScreenTraits *)traitsWithScreen:(UIScreen *)screen orientation:(NSInteger)orientation;
@property(retain, nonatomic) id orientationKey; NS_AVAILABLE(7_0, 7_0)
@property(assign, nonatomic) CGFloat keyboardWidth;
@end
