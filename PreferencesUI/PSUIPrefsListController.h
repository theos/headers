#import <Preferences/PSListController.h>
#import "DevicePINControllerDelegate.h"

@interface PSUIPrefsListController : PSListController <DevicePINControllerDelegate>

- (PSSpecifier *)_sidebarSpecifierForCategoryController;

-(void)showPINSheet:(id)arg1;

@end