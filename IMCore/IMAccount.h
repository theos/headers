@class IMHandle, IMServiceImpl;

@interface IMAccount : NSObject

- (IMHandle *)imHandleWithID:(NSString *)id;

@property BOOL _isUsableForSending;

@end

#ifdef __cplusplus
extern "C" {
#endif

extern "C" IMAccount *IMPreferredSendingAccountForAddressesWithFallbackService(NSArray *addresses, IMServiceImpl *service);

#ifdef __cplusplus
}
#endif
