#import <Preferences/PSListController.h>
#import <PreferencesUI/DevicePINControllerDelegate.h>

@interface PSUIPrefsListController : PSListController <DevicePINControllerDelegate>

- (PSSpecifier *)_sidebarSpecifierForCategoryController;

-(void)showPINSheet:(id)arg1;

@end