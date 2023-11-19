#import <UIKit/UIViewController.h>

@class SBBulletinObserverViewController;

@interface SBNotificationCenterViewController : UIViewController

- (SBBulletinObserverViewController *)_allModeViewControllerCreateIfNecessary:(BOOL)createIfNecessary;

@end
