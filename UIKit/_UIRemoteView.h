#import <UIKit/_UILayerHostView.h>
#import <UIKit/_UIHostedWindowHostingHandle.h>

API_AVAILABLE(ios(6.0))
@interface _UIRemoteView : _UILayerHostView

@property (retain, nonatomic) _UIHostedWindowHostingHandle *hostedWindowHostingHandle API_AVAILABLE(ios(7.0));
@property (copy, nonatomic) void(^tintColorDidChangeHandler)(void) API_AVAILABLE(ios(7.0));

+ (instancetype)viewWithHostedWindowHostingHandle:(_UIHostedWindowHostingHandle *)hostingHandle API_AVAILABLE(ios(7.0));
+ (instancetype)viewWithRemoteContextID:(unsigned int)contextID;

- (void)applyTransformUndoingRemoteRootLayerTransform:(CGAffineTransform)transform frame:(CGRect)frame;

@end
