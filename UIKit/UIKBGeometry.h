#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

typedef struct UIKBGeometryUnit {
    CGFloat amount;
    int unit;
} UIKBGeometryUnit;

@interface UIKBGeometry : NSObject

@property (assign) UIKBGeometryUnit x;
@property (assign) UIKBGeometryUnit y;
@property (assign) UIKBGeometryUnit w;
@property (assign) UIKBGeometryUnit h;
@property (assign) CGRect frame;
@property (assign) CGRect paddedFrame;

@end
