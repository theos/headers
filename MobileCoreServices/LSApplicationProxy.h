#import "LSBundleProxy.h"
#import "LSPlugInKitProxy.h"

@interface LSApplicationProxy : LSBundleProxy

+ (instancetype)applicationProxyForIdentifier:(NSString *)identifier;

@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSString *sourceAppIdentifier; // e.g. App Store, TestFlight
@property (nonatomic, readonly) NSString *itemName;
@property (nonatomic, readonly) NSString *sdkVersion;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic, readonly) NSString *vendorName;
@property (nonatomic, readonly) NSDate *registeredDate;

@property (nonatomic, readonly) NSArray <LSPlugInKitProxy *> *plugInKitPlugins;
@property (nonatomic, readonly) NSArray <NSNumber *> *deviceFamily;
@property (nonatomic, readonly) NSArray <NSString *> *activityTypes;

@property (nonatomic, readonly) BOOL isAdHocCodeSigned;
@property (nonatomic, readonly) BOOL isAppUpdate;
@property (nonatomic, readonly) BOOL isBetaApp;
@property (nonatomic, readonly) BOOL isInstalled;
@property (nonatomic, readonly) BOOL isLaunchProhibited;
@property (nonatomic, readonly) BOOL isNewsstandApp;
@property (nonatomic, readonly) BOOL isPlaceholder;
@property (nonatomic, readonly) BOOL isPurchasedReDownload;
@property (nonatomic, readonly) BOOL isRestricted;
@property (nonatomic, readonly) BOOL isStickerProvider;
@property (nonatomic, readonly) BOOL isWatchKitApp;

@end
