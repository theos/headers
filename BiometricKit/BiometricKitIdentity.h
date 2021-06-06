#import <Foundation/Foundation.h>

API_AVAILABLE(ios(7.0))
@interface BiometricKitIdentity : NSObject <NSSecureCoding, NSCopying>

+ (instancetype)biometricKitIdentity;

@property (nonatomic, retain) NSUUID *uuid;

@property (nonatomic, assign) uid_t userID API_AVAILABLE(ios(10.0));
@property (nonatomic, assign) int type;
@property (nonatomic, assign) int attribute;
@property (nonatomic, assign) int entity;

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSDate *creationTime;

@property (assign, nonatomic) NSInteger matchCount API_AVAILABLE(ios(8.0));
@property (assign, nonatomic) NSInteger updateCount;

@end
