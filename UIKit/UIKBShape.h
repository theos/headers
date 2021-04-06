#import "UIKBGeometry.h"

@interface UIKBShape : NSObject

@property (retain, nonatomic) UIKBGeometry *geometry;
@property CGRect paddedFrame;
@property CGRect symbolFrame;
@property CGRect frame;

- (instancetype)initWithGeometry:(UIKBGeometry *)geometry frame:(CGRect)frame paddedFrame:(CGRect)paddedFrame;

- (CGRect)originalFrame;

@end
