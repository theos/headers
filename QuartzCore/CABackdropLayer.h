#import <QuartzCore/CALayer.h>

@interface CABackdropLayer : CALayer

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)cls;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)key;

@property (copy) NSString *statisticsType;
@property (copy) NSString *groupName;

@property (copy) NSArray *groupFilters;

@property (assign) NSTimeInterval statisticsInterval;
@property (assign) CGFloat marginWidth;
@property (assign) CGFloat scale;

@property (assign) CGRect backdropRect;

@property (getter=isEnabled) BOOL enabled;

- (NSUInteger)_renderLayerPropertyAnimationFlags:(NSUInteger)animationFlags;

- (BOOL)_renderLayerDefinesProperty:(NSUInteger)property;

- (CALayer *)_copyRenderLayer:(CATransaction *)transaction layerFlags:(NSUInteger)layerFlags commitFlags:(NSUInteger *)commitFlags;

- (id)statisticsValues;

- (void)didChangeValueForKey:(id)key;
- (void)layerDidBecomeVisible:(bool)shouldCommitTransaction;

@end
