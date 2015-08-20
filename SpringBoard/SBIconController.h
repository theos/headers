@class SBIconModel;

@interface SBIconController : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, retain) SBIconModel *model;

@end
