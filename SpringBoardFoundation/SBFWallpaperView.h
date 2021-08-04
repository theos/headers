#import <UIKit/UIKit.h>

@interface SBFWallpaperView : UIView

@property (nonatomic, readonly) UIImage *wallpaperImage;

- (void)setGeneratesBlurredImages:(BOOL)value;
- (void)_startGeneratingBlurredImages;
- (void)prepareToAppear;

@end
