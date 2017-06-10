#import "UIKBTree.h"

@interface UIKBKeyView : UIView {
    UIKBTree *m_key;
}
@property CGRect drawFrame;
@property NSInteger state;
@property(retain, nonatomic) UIKBTree *key;
@property(retain, nonatomic) UIKBTree *keyplane;

@end
