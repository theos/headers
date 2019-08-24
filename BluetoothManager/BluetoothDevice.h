#import <Foundation/Foundation.h>

typedef struct BTDeviceImpl *BTDeviceImplRef;

API_AVAILABLE(ios(5.0))
@interface BluetoothDevice : NSObject <NSCopying>

- (instancetype)initWithDevice:(BTDeviceImplRef)device address:(NSString *)address;

- (BTDeviceImplRef)device;
- (void)setDevice:(BTDeviceImplRef)device;

- (NSString *)name;
- (NSString *)address;

- (int)type;
- (int)batteryLevel;
- (unsigned)vendorId;
- (unsigned)productId;

- (BOOL)paired;
- (BOOL)cloudPaired;
- (BOOL)magicPaired;
- (void)unpair;

- (BOOL)connected;
- (void)connect;
- (void)disconnect;

- (NSComparisonResult)compare:(BluetoothDevice *)other;

- (BOOL)setUserName:(NSString *)userName;
- (void)setPIN:(NSString *)pin;

- (NSString *)scoUID;
- (NSUInteger)connectedServicesCount;
- (BOOL)supportsBatteryLevel;
- (BOOL)magicPairedDeviceNameUpdated;
- (BOOL)isAccessory;
- (BOOL)isAppleAudioDevice;

- (void)startVoiceCommand;
- (void)endVoiceCommand;

- (BOOL)inEarDetectEnabled;
- (BOOL)setInEarDetectEnabled:(BOOL)enabled;

@end
