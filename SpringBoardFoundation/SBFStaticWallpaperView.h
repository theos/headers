#import "SBFWallpaperView.h"

@interface SBFStaticWallpaperView : SBFWallpaperView

@property (setter=_setDisplayedImage:, getter=_displayedImage, nonatomic, retain) UIImage *displayedImage;

- (UIImage *)snapshotImage;
- (UIImage *)wallpaperImage;

@end
