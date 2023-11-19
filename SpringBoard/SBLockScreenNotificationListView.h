#import <UIKit/UIView.h>

@protocol SBLockScreenNotificationModel;

@interface SBLockScreenNotificationListView : UIView

@property (nonatomic, retain) id<SBLockScreenNotificationModel> model;

@end
