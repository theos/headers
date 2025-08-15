#import "DNDState.h"

API_AVAILABLE(ios(12.0))
@interface DNDStateService : NSObject

+ (instancetype)serviceForClientIdentifier:(NSString *)identifier;

- (DNDState *)queryCurrentStateWithError:(NSError *)error;

@end
