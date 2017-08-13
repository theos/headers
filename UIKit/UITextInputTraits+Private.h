#import <UIKit/UITextInputTraits.h>

@interface UITextInputTraits : NSObject <UITextInputTraits>
+ (NSInteger)accessibleAppearanceForAppearance:(UIKeyboardAppearance)appearance;
@property BOOL disablePrediction;
@end
