#import <MobileIcons/MobileIcons.h>
#import <UIKit/UIKit.h>
#import "SBIconImageInfo.h"

@class SBApplication;

@interface SBIcon : NSObject

@property (copy, nonatomic, readonly) NSString *displayName;

- (BOOL)isDownloadingIcon;
- (BOOL)isFolderIcon;

- (NSString *)applicationBundleID;

- (BOOL)isApplicationIcon;
- (BOOL)isWidgetIcon API_AVAILABLE(ios(14.0));
- (BOOL)isBeta;

- (NSString *)leafIdentifier;
- (SBApplication *)application;

@property (nonatomic, assign) BOOL isFolderIcon;

- (UIImage *)generateIconImage:(NSInteger)type API_DEPRECATED_WITH_REPLACEMENT("generateIconImageWithInfo:", ios(3.0, 13.0));
- (UIImage *)generateIconImageWithInfo:(SBIconImageInfo)iconImageInfo API_AVAILABLE(ios(13.0));

- (UIImage *)getIconImage:(MIIconVariant)variant;
- (UIImage *)getUnmaskedIconImage:(MIIconVariant)variant;

- (NSInteger)badgeValue;

- (void)launchFromLocation:(NSInteger)location context:(id)context;

@end
