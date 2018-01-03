@class SBWallpaperPreviewSnapshotCache, SBFStaticWallpaperView;

@interface SBWallpaperController : NSObject {
    SBWallpaperPreviewSnapshotCache *_previewCache;
    SBFStaticWallpaperView *_lockscreenWallpaperView;
    SBFStaticWallpaperView *_homescreenWallpaperView;
    SBFStaticWallpaperView *_sharedWallpaperView;
}

@property (strong, nonatomic) SBFStaticWallpaperView *lockscreenWallpaperView;
@property (strong, nonatomic) SBFStaticWallpaperView *homescreenWallpaperView;
@property (strong, nonatomic) SBFStaticWallpaperView *sharedWallpaperView;

+ (SBWallpaperController *)sharedInstance;

- (void)beginRequiringWithReason:(NSString *)reason;
- (void)endRequiringWithReason:(NSString *)reason;

@end
