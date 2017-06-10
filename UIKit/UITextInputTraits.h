@interface UITextInputTraits : NSObject

+ (BOOL)keyboardTypeRequiresASCIICapable:(UIKeyboardType)keyboardType;

@property(nonatomic, getter = isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) UIKeyboardAppearance keyboardAppearance;
@property(nonatomic) UIKeyboardType keyboardType;
@property(nonatomic) UITextAutocorrectionType autocorrectionType;
@property(nonatomic) BOOL disablePrediction;

@end
