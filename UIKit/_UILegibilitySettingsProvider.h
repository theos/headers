#import "_UILegibilitySettings.h"

@interface _UILegibilitySettingsProvider : NSObject

- (_UILegibilitySettings *)settings;

@end

@interface _UILegibilitySettingsProvider (PhotoLibraryAdditions)

- (void)pl_primeForUseWithCameraOverlays;

@end
