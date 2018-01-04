#import <MobileIcons/MobileIcons.h>

@class SBApplication;

@interface SBIcon : NSObject

- (BOOL)isApplicationIcon;
- (BOOL)isBeta;

- (NSString *)leafIdentifier;
- (SBApplication *)application;

- (UIImage *)generateIconImage:(NSInteger)type;

- (UIImage *)getIconImage:(MIIconVariant)variant;
- (UIImage *)getUnmaskedIconImage:(MIIconVariant)variant;

- (NSInteger)badgeValue;

- (void)launchFromLocation:(NSInteger)location context:(id)context;

@end
