#import <UIKit/UIImage.h>

@interface LibTwitkaFly : NSObject

+ (instancetype)sharedTwitkaFly;

- (void)showSheetWithInitialText:(NSString *)initialText andInitialImage:(UIImage *)initialImage;

@end
