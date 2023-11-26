#import <UIKit/UIViewController.h>
#import <UIKit/UIView.h>

@class NCNotificationRequest;
@protocol NCNotificationStaticContentProviding;

@interface NCNotificationViewController : UIViewController

@property (nonatomic, retain) NCNotificationRequest *notificationRequest;
@property (nonatomic, retain) id <NCNotificationStaticContentProviding> staticContentProvider;

- (UIView *)_lookViewIfLoaded;

@end
