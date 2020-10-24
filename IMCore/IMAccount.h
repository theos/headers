#import <Foundation/Foundation.h>

@class IMHandle, IMServiceImpl;

@interface IMAccount : NSObject

- (IMHandle *)imHandleWithID:(NSString *)id;

@property BOOL _isUsableForSending;

@end

FOUNDATION_EXPORT IMAccount *IMPreferredSendingAccountForAddressesWithFallbackService(NSArray *addresses, IMServiceImpl *service);
