#import <UIKit/UIImage.h>
#import <Foundation/Foundation.h>

/** Not clear if these enums are ABI stable, reversed from iOS 10.2 */

typedef NS_ENUM(NSInteger, BCBatteryDevicePowerSourceState) {
    BCBatteryDevicePowerSourceStateUnknown,
    BCBatteryDevicePowerSourceStateOffline,
    BCBatteryDevicePowerSourceStateACPower,
    BCBatteryDevicePowerSourceStateBattery,
};

typedef NS_ENUM(NSInteger, BCBatteryDeviceVendor) {
    BCBatteryDeviceVendorUnknown,
    BCBatteryDeviceVendorApple,
    BCBatteryDeviceVendorBeats,
};

typedef NS_ENUM(NSUInteger, BCBatteryDeviceAccessoryCategory) {
    BCBatteryDeviceAccessoryCategoryUnknown,
    BCBatteryDeviceAccessoryCategorySpeaker,
    BCBatteryDeviceAccessoryCategoryHeadphone,
    BCBatteryDeviceAccessoryCategoryWatch,
    BCBatteryDeviceAccessoryCategoryBatteryCase,
    BCBatteryDeviceAccessoryCategoryKeyboard,
    BCBatteryDeviceAccessoryCategoryTrackpad,
    BCBatteryDeviceAccessoryCategoryPencil,
};

typedef NS_OPTIONS(NSUInteger, BCBatteryDevicePart) {
    BCBatteryDevicePartNone,
    BCBatteryDevicePartLeft  = 1 << 0,
    BCBatteryDevicePartRight = 1 << 1,
    BCBatteryDevicePartCase  = 1 << 2,
};

typedef NS_ENUM(NSInteger, BCBatteryDeviceTransportType) {
    BCBatteryDeviceTransportTypeUnknown         = 0,
    BCBatteryDeviceTransportTypeInternal        = 1,
    BCBatteryDeviceTransportTypeSerial          = 2,
    BCBatteryDeviceTransportTypeUSB             = 2,
    BCBatteryDeviceTransportTypeAID             = 2,
    BCBatteryDeviceTransportTypeBluetooth       = 3,
    BCBatteryDeviceTransportTypeBluetoothLE     = 3,
    BCBatteryDeviceTransportTypeInductiveInBand = 3,
};

API_AVAILABLE(ios(9.0))
@interface BCBatteryDevice : NSObject <NSCopying, NSCoding> // NSSecureCoding in 11.4

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *matchIdentifier;

@property (nonatomic, readonly) UIImage *glyph;

@property (nonatomic, copy) NSString *groupName API_AVAILABLE(ios(9.3));

@property (nonatomic) BCBatteryDeviceAccessoryCategory accessoryCategory API_AVAILABLE(ios(11.4));
@property (nonatomic, copy) NSString *accessoryIdentifier                API_AVAILABLE(ios(11.4));

@property (nonatomic) BOOL approximatesPercentCharge API_AVAILABLE(ios(10.0));

@property (getter=isBatterySaverModeActive, nonatomic) BOOL batterySaverModeActive API_AVAILABLE(ios(11.4));

@property (nonatomic) NSInteger percentCharge;
@property (getter=isCharging, nonatomic) BOOL charging;
@property (getter=isConnected, nonatomic) BOOL connected;

@property (getter=isPowerSource, nonatomic) BOOL powerSource;
@property (nonatomic) BCBatteryDevicePowerSourceState powerSourceState;

@property (getter=isLowBattery, nonatomic) BOOL lowBattery API_AVAILABLE(ios(9.1));

@property (getter=isFake, nonatomic) BOOL fake;
@property (getter=isInternal, nonatomic) BOOL internal;

@property (nonatomic) BCBatteryDeviceTransportType transportType;
@property (nonatomic, readonly) BCBatteryDeviceVendor vendor;
@property (nonatomic, readonly) NSInteger productIdentifier;

@property (nonatomic) BCBatteryDevicePart parts API_AVAILABLE(ios(9.1));

@end
