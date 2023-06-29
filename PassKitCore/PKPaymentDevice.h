#import <Foundation/Foundation.h>

API_AVAILABLE(ios(8.0))
@interface PKPaymentDevice : NSObject
// Client details contains (OS version, device type ...).
// Used for authinticating the device to allow or deny Apple Pay use.
+ (NSString*)clientInfoHTTPHeader;
@end