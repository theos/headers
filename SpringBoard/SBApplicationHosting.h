#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class SBApplication;

@protocol SBApplicationHosting <NSObject>
@required

- (SBApplication *)hostedApp;
- (BOOL)isHostingAnApp;
- (BOOL)canHostAnApp;
- (void)hostedAppWillRotateToInterfaceOrientation:(UIInterfaceOrientation)orientation;

@end