#import "_UILegibilitySettings.h"

@interface _UILegibilityView : UIView

@property (retain) _UILegibilitySettings *settings;
@property (retain) UIImage *image;
@property (retain) UIImage *shadowImage;

- (id)initWithSettings:(_UILegibilitySettings *)settings strength:(CGFloat)strength image:(UIImage *)image shadowImage:(UIImage *)showImage options:(NSInteger)options;
- (void)setSettings:(_UILegibilitySettings *)settings image:(UIImage *)image shadowImage:(UIImage *)shadowImage;
- (void)updateForChangedSettings:(_UILegibilitySettings *)settings;

@end
