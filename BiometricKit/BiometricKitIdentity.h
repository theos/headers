@interface BiometricKitIdentity : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, retain) NSUUID * uuid;
@property (assign, nonatomic) NSUInteger userID;
@property (assign, nonatomic) NSInteger type;
@property (assign, nonatomic) NSInteger attribute;
@property (assign, nonatomic) NSInteger entity;
@property (nonatomic, copy) NSString * name;

@end
