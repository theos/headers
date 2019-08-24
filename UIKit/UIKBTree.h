#import "UIKBRenderGeometry.h"
#import "UIKBShape.h"

@interface UIKBTree : NSObject

@property NSUInteger interactionType;
@property NSInteger variantType;
@property NSInteger visualStyle;
@property NSInteger displayType;
@property NSUInteger rendering;

@property NSInteger highlightedVariantIndex;
@property NSInteger displayTypeHint;
@property NSInteger type;
@property NSInteger state;

@property CGRect frame;
@property CGRect paddedFrame;
@property CGRect displayFrame;

@property BOOL ghost;
@property BOOL visible;

@property (retain, nonatomic) NSString *variantPopupBias;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *displayString;
@property (retain, nonatomic) NSString *overrideDisplayString;
@property (retain, nonatomic) NSString *representedString;

@property (retain, nonatomic) NSMutableDictionary *properties;

@property (retain, nonatomic) NSMutableArray *subtrees;

@property (retain, nonatomic) UIKBRenderGeometry *geometry;

@property (retain, nonatomic) UIKBShape *shape;


+ (UIKBTree *)treeOfType:(NSInteger)type;

- (id)initWithType:(NSInteger)type;

- (BOOL)_renderAsStringKey;
- (BOOL)renderAsStringKey;
- (BOOL)isSplit;

- (UIKBTree *)subtreeWithName:(NSString *)name;

- (CGRect)_keyplaneFrame;

@end
