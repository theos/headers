#import "SBAwayView.h"

@interface SBAwayController : NSObject
+ (instancetype)sharedAwayController;

@property (nonatomic, retain) SBAwayView *awayView;
@end
