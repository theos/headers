typedef struct {
    char timeString[64];
} SBStatusBarData;

@interface SBStatusBarDataManager : NSObject
+ (id)sharedDataManager;
- (void)_updateTimeString;
- (void)_dataChanged;
@end
