#import "BluetoothDevice.h"

API_AVAILABLE(ios(8.0))
@interface RemoteDeviceManager : NSObject

- (void)disconnectDevice:(BluetoothDevice *)device;
#if __has_include(<xpc/xpc.h>)
- (void)sendMessage:(const char *)message args:(xpc_object_t)args;
#endif

@end
