#import <UIKit/UIKit.h>

API_AVAILABLE(ios(13.0))
@interface OBTrayButton : UIButton

+ (instancetype)buttonWithType:(NSInteger)type;

+ (CGFloat)standardHeight;

@end
