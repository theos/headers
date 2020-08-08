#import "UIKBShape.h"

@interface UIKBRenderGeometry : NSObject

@property CGRect paddedFrame;
@property CGRect displayFrame;
@property CGRect symbolFrame;
@property CGRect frame;

- (UIKBShape *)similarShape;

@end
