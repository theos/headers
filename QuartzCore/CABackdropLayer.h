@interface CABackdropLayer : CALayer

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

@property (copy) NSString *statisticsType;
@property (copy) NSString *groupName;

@property (copy) NSArray *groupFilters;

@property double statisticsInterval;
@property float marginWidth;
@property float scale;

@property struct CGRect backdropRect;

@property (getter = isEnabled) BOOL enabled;

- (NSUInteger)_renderLayerPropertyAnimationFlags:(NSUInteger)arg1;

- (BOOL)_renderLayerDefinesProperty:(NSUInteger)arg1;

- (CALayer *)_copyRenderLayer:(CATransaction *)arg1 layerFlags:(NSUInteger)arg2 commitFlags:(NSUInteger *)arg3;

- (id)statisticsValues;

- (void)didChangeValueForKey:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;

@end
