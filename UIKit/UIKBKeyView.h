#import "UIKBTree.h"
#import "UIKBRenderConfig.h"

@interface UIKBKeyView : UIView {
    UIKBTree *m_key;
}
@property CGRect drawFrame;
@property CGRect variantFrame;

@property NSInteger state;

@property (retain, nonatomic) UIKBTree *key;
@property (retain, nonatomic) UIKBTree *keyplane;

@property (retain, nonatomic) UIKBRenderConfig *renderConfig;

- (void)prepareForDisplay;

@end
