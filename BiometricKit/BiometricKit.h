#import "BiometricKitDelegate.h"

@interface BiometricKit : NSObject

+ (BiometricKit *)manager;

@property (assign, nonatomic) id<BiometricKitDelegate> delegate;

- (NSArray *)identities:(id)object;

- (BOOL)isTouchIDCapable;

@end
