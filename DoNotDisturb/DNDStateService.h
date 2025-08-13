#import "DNDState.h"

@interface DNDStateService : NSObject

- (DNDState *)queryCurrentStateWithError:(NSError *)error;

@end
