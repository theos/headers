typedef struct {
    char timeString[64];
} StatusBarData;

@interface SBStatusBarDataManager : NSObject
+(id)sharedDataManager;
-(void)_updateTimeString;
-(void)_dataChanged;
@end
