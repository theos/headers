#import <UIKit/UIWindow.h>

@interface UIDebuggingInformationOverlay : UIWindow

+ (instancetype)overlay;

+ (void)prepareDebuggingOverlay;

- (void)toggleVisibility;

@end
