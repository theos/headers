#import <Foundation/Foundation.h>

static NSString *const kPMLPMSourceSpringBoardAlert = @"SpringBoard";
static NSString *const kPMLPMSourceReenableBulletin = @"Reenable";
static NSString *const kPMLPMSourceControlCenter = @"ControlCenter";
static NSString *const kPMLPMSourceSettings = @"Settings";
static NSString *const kPMLPMSourceSiri = @"Siri";
static NSString *const kPMLPMSourceLostMode = @"LostMode";
static NSString *const kPMLPMSourceSystemDisable = @"SystemDisable";


API_AVAILABLE(ios(15.0))
@interface _PLLowPowerMode : NSObject
+ (instancetype)sharedInstance;
- (NSInteger)getPowerMode;
- (void)setPowerMode:(NSInteger)powerMode fromSource:(NSString *)source;
- (void)setPowerMode:(NSInteger)powerMode fromSource:(NSString *)source withCompletion:(void (^)(BOOL success, NSError *error))completion;
@end