#import <Foundation/Foundation.h>

API_DEPRECATED_WITH_REPLACEMENT("SBVolumeControl", ios(2.0, 13.0))
@interface VolumeControl : NSObject

+ (instancetype)sharedVolumeControl;

- (void)increaseVolume;
- (void)decreaseVolume;

- (float)volumeStepUp   API_AVAILABLE(ios(6.0));
- (float)volumeStepDown API_AVAILABLE(ios(6.0));

- (float)volume API_AVAILABLE(ios(4.0));
- (float)getMediaVolume API_AVAILABLE(ios(6.0));
- (void)setMediaVolume:(float)mediaVolume API_AVAILABLE(ios(6.0));

- (BOOL)headphonesPresent API_AVAILABLE(ios(7.0));

@end
