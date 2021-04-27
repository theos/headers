#import "SBLeafIcon.h"
#import "SBIconImageInfo.h"

@class SBApplication;

API_AVAILABLE(ios(3.0)) @interface SBApplicationIcon : SBLeafIcon

- (instancetype)initWithApplication:(SBApplication *)application;
- (UIImage *)generateIconImage:(int)type API_DEPRECATED_WITH_REPLACEMENT("generateIconImageWithInfo", ios(4.0, 13.0));
- (UIImage *)generateIconImageWithInfo:(SBIconImageInfo)imageInfo API_AVAILABLE(ios(13.0));

@end
