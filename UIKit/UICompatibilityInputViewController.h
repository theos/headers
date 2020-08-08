#import "UIKeyboardInputMode.h"

@interface UICompatibilityInputViewController : UIInputViewController

@property (retain, nonatomic) UIKeyboardInputMode *inputMode;

- (UIViewController *)inputController;

@end
