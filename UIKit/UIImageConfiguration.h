#import <UIKit/UIKit.h>

@interface UIImageConfiguration : NSObject

@property (nonatomic, readonly) UITraitCollection *traitCollection;

- (instancetype)_initWithTraitCollection:(UITraitCollection *)traitCollection;

@end