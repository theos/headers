#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface UITextInputController : NSObject

- (NSRange)selectedRange;
- (NSRange)_selectedRange;

- (UITextRange *)selectedTextRange;
- (UITextPosition *)beginningOfDocument;

- (NSInteger)offsetFromPosition:(UITextPosition *)fromPosition toPosition:(UITextPosition *)toPosition;

@end
