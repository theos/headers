#import "MIGlobalConfiguration.h"

API_AVAILABLE(ios(13.0))
@interface MIDaemonConfiguration : MIGlobalConfiguration

@property (nonatomic, readonly) BOOL skipDeviceFamilyCheck;
@property (nonatomic, readonly) BOOL skipThinningCheck;
@property (nonatomic, readonly) BOOL allowPatchWithoutSinf;

@end