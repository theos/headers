@class SBApplication;

@interface SBIcon : NSObject

- (BOOL)isApplicationIcon;
- (BOOL)isBeta;

- (NSString *)leafIdentifier;
- (SBApplication *)application;

- (UIImage *)generateIconImage:(NSInteger)type;

- (NSInteger)badgeValue;

- (void)launchFromLocation:(NSInteger)location context:(id)context;

@end
