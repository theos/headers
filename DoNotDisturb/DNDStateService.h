#import "DNDState.h"

@interface DNDStateService : NSObject

+ (instancetype)serviceForClientIdentifier:(NSString *)identifier;

- (DNDState *)queryCurrentStateWithError:(NSError *)error;

@end
