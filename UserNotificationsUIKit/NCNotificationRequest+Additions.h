#import <UserNotificationsKit/NCNotificationRequest.h>

@class BBBulletin;

@interface NCNotificationRequest (Additions)

@property (nonatomic, readonly) BBBulletin *bulletin;

@end
