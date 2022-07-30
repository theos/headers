#import <Foundation/Foundation.h>

@class SBLockScreenViewController, CSCoverSheetViewController;

API_AVAILABLE(ios(7.0)) @interface SBLockScreenManager : NSObject

+ (instancetype)sharedInstance;

- (void)lockUIFromSource:(NSUInteger)source withOptions:(NSDictionary *)options;
- (void)unlockUIFromSource:(NSUInteger)source withOptions:(NSDictionary *)options;

@property (nonatomic, retain) SBLockScreenViewController *lockScreenViewController API_DEPRECATED_WITH_REPLACEMENT("coverSheetViewController", ios(7.0, 13.0));
@property (nonatomic, readonly) CSCoverSheetViewController *coverSheetViewController API_AVAILABLE(ios(13.0));

@property (readonly) BOOL isUILocked;

@end
