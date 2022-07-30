#import <UIKit/UITextInputTraits.h>
#import <Foundation/Foundation.h>

@interface UITextInputTraits : NSObject <UITextInputTraits>

+ (NSInteger)accessibleAppearanceForAppearance:(UIKeyboardAppearance)appearance;

@property BOOL disablePrediction;

@end
