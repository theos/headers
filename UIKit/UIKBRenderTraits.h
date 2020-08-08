#import "UIKBRenderGeometry.h"
#import "UIKBGradient.h"
#import "UIKBTextStyle.h"

@interface UIKBRenderTraits : NSObject

+ (instancetype)emptyTraits;

@property (retain, nonatomic) UIKBRenderGeometry *geometry;

@property (retain, nonatomic) UIKBGradient *backgroundGradient;
@property (retain, nonatomic) UIKBGradient *layeredBackgroundGradient;

@property (retain, nonatomic) UIKBTextStyle *symbolStyle;

@property (retain, nonatomic) NSArray *variantGeometries;

@property (assign) NSInteger blendForm;

- (void)removeAllRenderEffects;

@end
