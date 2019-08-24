#import "PRMonogram.h"

API_AVAILABLE(ios(10.0))
@interface PRMonogramView : UIView <UITextFieldDelegate>

@property (nonatomic, retain) PRMonogram *monogram;

@property (assign, getter=isCircular, nonatomic) BOOL circular;
@property (assign, getter=isSelected, nonatomic) BOOL selected;

@property (assign, nonatomic) BOOL bordered;
@property (assign, nonatomic) BOOL highlighted;
@property (assign, nonatomic) BOOL allowsEditing;

- (void)textFieldResignFirstResponder;

@end
