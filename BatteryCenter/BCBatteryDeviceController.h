#import "BCBatteryDevice.h"

API_AVAILABLE(ios(9.0))
@interface BCBatteryDeviceController : NSObject

@property (nonatomic, readonly) NSArray <BCBatteryDevice *> *connectedDevices;
@property (nonatomic, readonly) NSString *connectedDevicesDidChangeNotificationName;

+ (instancetype)sharedInstance;

- (void)removeDeviceChangeHandlerWithIdentifier:(NSString *)identifier;

@end
