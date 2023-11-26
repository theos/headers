#import <Foundation/NSIndexPath.h>

@class SBAwayBulletinListItem;

@protocol SBLockScreenNotificationModel

- (SBAwayBulletinListItem *)listItemAtIndexPath:(NSIndexPath *)indexPath;

@end
