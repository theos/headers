#import <Foundation/Foundation.h>

API_AVAILABLE(ios(14.0))
@interface DNDToggleManager : NSObject

+ (instancetype)managerForClientIdentifier:(NSString *)identifier;

- (BOOL)_toggleDNDOffReturningError:(NSError *)error;
- (BOOL)_toggleDNDOnReturningError:(NSError *)error;

@end
