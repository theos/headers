#import "UIKeyboardInputMode.h"

@interface UIKeyboardInputModeController : NSObject

+ (UIKeyboardInputModeController *)sharedInputModeController;

@property (atomic, strong, readwrite) NSArray *normalizedInputModes;
@property ( retain, nonatomic) UIKeyboardInputMode *lastUsedInputMode;
@property (retain, nonatomic) UIKeyboardInputMode *currentInputMode;

- (NSArray *)activeInputModes;
- (NSArray *)allowedExtensions;

- (UIKeyboardInputMode *)currentInputModeInPreference;
- (UIKeyboardInputMode *)inputModeWithIdentifier:(NSString *)identifier;

- (void)switchToCurrentSystemInputMode;
- (void)updateCurrentInputMode:(UIKeyboardInputMode *)inputMode;
- (void)updateLastUsedInputMode:(UIKeyboardInputMode *)inputMode;
- (void)setCurrentInputModeInPreference:(UIKeyboardInputMode *)inputMode;

@end
