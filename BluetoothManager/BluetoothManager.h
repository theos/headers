#import "BluetoothDevice.h"

#define BluetoothPairedStatusChangedNotificationName @"BluetoothPairedStatusChangedNotification"

API_AVAILABLE(ios(5.0))
@interface BluetoothManager : NSObject

// must be called before the first invocation of sharedInstance
+ (void)setSharedInstanceQueue:(dispatch_queue_t)queue;

+ (instancetype)sharedInstance;

- (BOOL)enabled;
- (BOOL)setEnabled:(BOOL)enabled;
- (void)setDevicePairingEnabled:(BOOL)enabled;
- (void)setDeviceScanningEnabled:(BOOL)enabled;

- (void)resetDeviceScanning;
- (void)showPowerPrompt;

- (void)connectDevice:(BluetoothDevice *)device;

- (void)cancelPairing;

- (void)setPincode:(NSString *)pincode forDevice:(BluetoothDevice *)device;

- (void)startVoiceCommand:(BluetoothDevice *)device;
- (void)endVoiceCommand:(BluetoothDevice *)device;

- (BOOL)audioConnected;
- (void)setAudioConnected:(BOOL)audioConnected;

- (BOOL)isAnyoneScanning;
- (BOOL)isAnyoneAdvertising;
- (BOOL)devicePairingEnabled;
- (BOOL)deviceScanningEnabled;
- (BOOL)deviceScanningInProgress;
- (BOOL)connected;
- (BOOL)available;

- (BOOL)powered;
- (BOOL)setPowered:(BOOL)powered;

- (BOOL)connectable;
- (void)setConnectable:(BOOL)connectable;

- (BOOL)isDiscoverable;
- (void)setDiscoverable:(BOOL)discoverable;

- (NSArray <BluetoothDevice *> *)pairedDevices;
- (NSArray <BluetoothDevice *> *)connectedDevices;
- (NSArray <BluetoothDevice *> *)connectingDevices;

- (void)disconnectDevice:(BluetoothDevice *)device;
- (void)unpairDevice:(BluetoothDevice *)device;

- (void)postNotification:(NSString *)notification;

- (NSString *)localAddress;

@end
