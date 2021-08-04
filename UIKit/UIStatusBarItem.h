#import <Foundation/Foundation.h>

// this enum was reversed out of iOS 10.2, not clear if it's ABI stable
typedef enum {
    UIStatusBarItemTypeTime,           // this Time has a centerOrder of 1
    UIStatusBarItemTypeQuietModeQuietMode,
    UIStatusBarItemTypeAirplaneModeAirplane,
    UIStatusBarItemTypeSignalStrength,
    UIStatusBarItemTypeService,
    UIStatusBarItemTypePersonName,
    UIStatusBarItemTypeDataNetwork,
    UIStatusBarItemTypeDeprecatedTime, // this Time has a centerOrder of 0
    UIStatusBarItemTypeBattery,
    UIStatusBarItemTypeBatteryPercent,
    UIStatusBarItemTypeNotCharging,
    UIStatusBarItemTypeBluetoothBattery,
    UIStatusBarItemTypeBluetooth,
    UIStatusBarItemTypeIndicatorTTY,
    UIStatusBarItemTypeIndicatorAlarm,
    UIStatusBarItemTypeIndicatorPlus,
    UIStatusBarItemTypeIndicator,
    UIStatusBarItemTypeLocation,
    UIStatusBarItemTypeIndicatorRotationLock,
    UIStatusBarItemTypeDoubleHeightDoubleHeight,
    UIStatusBarItemTypeIndicatorAirPlay,
    UIStatusBarItemTypeIndicatorSiri,
    UIStatusBarItemTypeIndicatorCarPlay,
    UIStatusBarItemTypeIndicatorStudent,
    UIStatusBarItemTypeIndicatorVPN,
    UIStatusBarItemTypeIndicatorCallForward,
    UIStatusBarItemTypeActivity,
    UIStatusBarItemTypeThermalColor,
    UIStatusBarItemTypeRadar,
    UIStatusBarItemTypeElectronicTollCollection,
    UIStatusBarItemTypeReturnToLastApp,
    UIStatusBarItemTypeLock,
    UIStatusBarItemTypeLiquidDetection,
    UIStatusBarItemTypeIndicatorBTHeadphones,
    UIStatusBarItemTypeHome,
    UIStatusBarItemTypeReturnToCall,
    UIStatusBarItemTypeNavigation,
    UIStatusBarItemTypeMapsCompass,
    UIStatusBarItemTypeTethering,
    UIStatusBarItemTypeBreadcrumb,
    UIStatusBarItemTypeOpenInSafari
} UIStatusBarItemType;

@interface UIStatusBarItem : NSObject

@property (nonatomic, readonly) NSString *indicatorName;
@property (nonatomic, readonly) UIStatusBarItemType type;
@property (nonatomic, readonly) Class viewClass; // a subclass of UIStatusBarItemView

@property (nonatomic, readonly) int priority;
@property (nonatomic, readonly) int leftOrder;
@property (nonatomic, readonly) int rightOrder;

+ (BOOL)typeIsValid:(UIStatusBarItemType)type;

+ (instancetype)itemWithType:(UIStatusBarItemType)type idiom:(UIUserInterfaceIdiom)idiom;

- (instancetype)initWithType:(UIStatusBarItemType)type;

@end
