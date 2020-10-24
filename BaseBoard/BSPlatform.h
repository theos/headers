#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, BSDeviceClass) {
	BSDeviceClassIPhone,
	BSDeviceClassIPod,
	BSDeviceClassIPad
};

typedef NS_ENUM(NSUInteger, BSHomeButtonType) {
	BSHomeButtonTypeButton = 0,
	BSHomeButtonTypeBorderless = 2
};

@interface BSPlatform : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, readonly) BSDeviceClass deviceClass;
@property (nonatomic, readonly) BOOL hasGasGauge;
@property (nonatomic, readonly) BOOL hasOrbCapability;
@property (nonatomic, readonly) BSHomeButtonType homeButtonType;
@property (getter=isMultiCore, nonatomic, readonly) BOOL multiCore;

@property (nonatomic, readonly, copy) NSString *localizedProductName;
@property (nonatomic, readonly, copy) NSString *productClass;
@property (nonatomic, readonly, copy) NSString *productHardwareModel;
@property (nonatomic, readonly, copy) NSString *productHardwareModelName;
@property (nonatomic, readonly, copy) NSString *productType;
@property (nonatomic, readonly, copy) NSString *uniqueDeviceIdentifier;

@property (nonatomic, readonly, copy) NSString *operatingSystemName;
@property (nonatomic, readonly, copy) NSString *productBuildVersion;
@property (nonatomic, readonly, copy) NSString *productVersion;

@property (getter=isCarrierInstall, nonatomic, readonly) BOOL carrierInstall;
@property (getter=isDeveloperInstall, nonatomic, readonly) BOOL developerInstall;
@property (getter=isInternalInstall, nonatomic, readonly) BOOL internalInstall;

@end
