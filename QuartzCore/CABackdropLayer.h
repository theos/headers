@interface CABackdropLayer : CALayer

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

@property double statisticsInterval;
@property(copy) NSString *statisticsType;
@property(copy) NSArray *groupFilters;
@property float marginWidth;
@property struct CGRect backdropRect;
@property float scale;
@property(copy) NSString *groupName;
@property(getter = isEnabled) BOOL enabled;

- (NSUInteger)_renderLayerPropertyAnimationFlags:(NSUInteger)arg1;
- (BOOL)_renderLayerDefinesProperty:(NSUInteger)arg1;
- (CALayer *)_copyRenderLayer:(CATransaction *)arg1 layerFlags:(NSUInteger)arg2 commitFlags:(NSUInteger *)arg3;
- (id)statisticsValues;

- (void)didChangeValueForKey:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;

@end
