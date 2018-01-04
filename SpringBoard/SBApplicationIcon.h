#import <MobileIcons/MobileIcons.h>

@class SBApplication;

@interface SBApplicationIcon : NSObject

- (instancetype)initWithApplication:(SBApplication *)application;

- (UIImage *)getIconImage:(MIIconVariant)variant;
- (UIImage *)getUnmaskedIconImage:(MIIconVariant)variant;

@property (nonatomic, retain, readonly) SBApplication *application;

@end
