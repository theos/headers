#import "SBLeafIcon.h"

@class SBApplication;

@interface SBApplicationIcon : SBLeafIcon

- (instancetype)initWithApplication:(SBApplication *)application;

- (UIImage *)getIconImage:(MIIconVariant)variant;
- (UIImage *)getUnmaskedIconImage:(MIIconVariant)variant;

@property (nonatomic, retain, readonly) SBApplication *application;

@end
