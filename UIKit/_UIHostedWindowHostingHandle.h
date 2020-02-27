#import <Foundation/Foundation.h>

API_AVAILABLE(ios(7.0))
@interface _UIHostedWindowHostingHandle : NSObject <NSSecureCoding>

@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, nonatomic) CGAffineTransform rootLayerTransform;
@property (readonly, nonatomic) CGRect rootLayerFrame;

+ (instancetype)hostedWindowHostingHandleWithContextID:(unsigned int)contextID rootLayerTransform:(CGAffineTransform)rootLayerTransform rootLayerFrame:(CGRect)rootLayerFrame;

@end
