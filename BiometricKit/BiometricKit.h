#import "BiometricKitDelegate.h"
#import "BiometricKitIdentity.h"

API_AVAILABLE(ios(7.0))
@interface BiometricKit : NSObject

+ (instancetype)manager;

@property (nonatomic, assign) id<BiometricKitDelegate> delegate;
@property (assign) BOOL inUse;

// research on iOS 10.2 shows `options` supports { "BKFilterIdentity" : BiometricKitIdentity }
- (NSArray <BiometricKitIdentity *> *)identities:(NSDictionary *)options;

- (float)getModulationRatio;

- (BOOL)isTouchIDCapable API_AVAILABLE(ios(10.0));
- (BOOL)isFingerOn API_AVAILABLE(ios(9.0));

- (NSData *)getCalibrationDataInfo API_AVAILABLE(ios(9.0));
- (NSData *)getSensorInfo API_AVAILABLE(ios(9.0));

- (NSUUID *)getIdentitiesDatabaseUUIDForUser:(uid_t)user API_AVAILABLE(ios(10.0));
- (NSData *)getIdentitiesDatabaseHashForUser:(uid_t)user API_AVAILABLE(ios(10.0));

- (NSUUID *)getIdentitiesDatabaseUUID API_DEPRECATED_WITH_REPLACEMENT("getIdentitiesDatabaseUUIDForUser:", ios(9.0, 10.0));
- (NSData *)getIdentitiesDatabaseHash API_DEPRECATED_WITH_REPLACEMENT("getIdentitiesDatabaseHashForUser:", ios(9.0, 10.0));

@end
