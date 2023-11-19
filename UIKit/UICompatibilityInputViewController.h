#import "UIKeyboardInputMode.h"
#import <UIKit/UIInputViewController.h>

@interface UICompatibilityInputViewController : UIInputViewController

@property (retain, nonatomic) UIKeyboardInputMode *inputMode;

- (UIViewController *)inputController;

@end
