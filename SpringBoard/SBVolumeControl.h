#import <Foundation/Foundation.h>

API_AVAILABLE(ios(13.0))
@interface SBVolumeControl : NSObject

@property (nonatomic, readonly) NSString *lastDisplayedCategory;

+ (instancetype)sharedInstance;

- (void)increaseVolume;
- (void)decreaseVolume;

- (float)volumeStepUp;
- (float)volumeStepDown;

- (float)euVolumeLimit;
- (BOOL)isEUVolumeLimitEnforced;

- (void)hideVolumeHUDIfVisible;

@end
