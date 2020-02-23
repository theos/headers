#import <QuartzCore/CALayer.h>

@interface CALayerHost : CALayer

@property unsigned int contextId;
@property BOOL inheritsSecurity;

@end
