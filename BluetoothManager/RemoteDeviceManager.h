#import "BluetoothDevice.h"

API_AVAILABLE(ios(8.0))
@interface RemoteDeviceManager : NSObject

- (void)disconnectDevice:(BluetoothDevice *)device;
- (void)sendMessage:(const char *)message args:(xpc_object_t)args;

@end
