#import "UIKBRenderGeometry.h"
#import "UIKBGradient.h"

@interface UIKBRenderTraits : NSObject

@property(retain, nonatomic) UIKBRenderGeometry *geometry;
@property(retain, nonatomic) UIKBGradient *layeredBackgroundGradient;
@property(retain, nonatomic) NSArray *variantGeometries;
@property(assign) NSInteger blendForm;

@end
