#import "_SBAlertController.h"

@interface SBAlertItem : NSObject

- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)requirePasscode;
- (void)dismiss;

+ (void)activateAlertItem:(SBAlertItem *)alertItem;
- (void)deactivateForButton;

@property (nonatomic, retain) UIAlertView *alertSheet;

- (_SBAlertController *)alertController;

@end
