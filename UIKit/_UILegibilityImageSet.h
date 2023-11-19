#import <UIKit/UIImage.h>

@interface _UILegibilityImageSet : NSObject

+ (instancetype)imageFromImage:(UIImage *)image withShadowImage:(UIImage *)shadowImage;

@property (nonatomic, retain) UIImage *image;

@end
