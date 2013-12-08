@class SBWallpaperView;

@interface SBUIController : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, retain) SBWallpaperView *wallpaperView;

@end
