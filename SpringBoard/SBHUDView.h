#import <UIKit/UIView.h>
#import <UIKit/UIImage.h>

@interface SBHUDView : UIView

+ (CGFloat)progressIndicatorStep;

- (instancetype)initWithHUDViewLevel:(NSInteger)level;

@property (nonatomic, retain) UIImage *image;
@property CGFloat progress;

@end
