#import <Foundation/NSObjCRuntime.h>
#import <Foundation/NSObject.h>

@interface SBOrientationLockManager : NSObject

+ (instancetype)sharedInstance;

- (BOOL)isUserLocked;
- (BOOL)lockOverrideEnabled;

- (NSInteger)effectiveLockedOrientation;
- (NSInteger)userLockOrientation;

@end
