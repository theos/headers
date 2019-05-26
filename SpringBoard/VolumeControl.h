@interface VolumeControl : NSObject

+ (instancetype)sharedVolumeControl;

- (void)increaseVolume;
- (void)decreaseVolume;

- (float)volumeStepUp   NS_AVAILABLE_IOS(6_0);
- (float)volumeStepDown NS_AVAILABLE_IOS(6_0);

- (float)volume NS_AVAILABLE_IOS(4_0);
- (float)getMediaVolume NS_AVAILABLE_IOS(6_0);
- (void)setMediaVolume:(float)mediaVolume NS_AVAILABLE_IOS(6_0);

- (BOOL)headphonesPresent NS_AVAILABLE_IOS(7_0);

@end
