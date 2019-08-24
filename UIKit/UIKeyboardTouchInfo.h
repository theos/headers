#import "UIKBTree.h"

@interface UIKeyboardTouchInfo : NSObject

@property (retain, nonatomic) UITouch *touch;
@property (retain, nonatomic) UIKBTree *key;
@property (retain, nonatomic) UIKBTree *keyplane;
@property (retain, nonatomic) UIKBTree *slidOffKey;
@property (assign, nonatomic) CGPoint initialPoint;
@property (assign, nonatomic) CGPoint initialDragPoint;
@property NSInteger stage;
@property BOOL dragged;
@property BOOL maySuppressUpAction;

@end
