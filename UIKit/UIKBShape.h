#import "UIKBGeometry.h"

@interface UIKBShape : NSObject

@property(retain, nonatomic) UIKBGeometry *geometry;
@property CGRect paddedFrame;
@property CGRect symbolFrame;
@property CGRect frame;

- (CGRect)originalFrame;

@end
