NS_CLASS_AVAILABLE_IOS(4_0) @interface SBIconListView : UIView

@property(readonly, nonatomic) NSUInteger maximumIconCount API_AVAILABLE(ios(13.0));
@property(readonly, nonatomic) NSUInteger maxIcons NS_DEPRECATED_IOS(4_0, 13_0);
@property(readonly, nonatomic) NSUInteger iconColumnsForCurrentOrientation;
@property(readonly, nonatomic) NSUInteger iconRowsForCurrentOrientation;

- (void)setAlphaForAllIcons:(CGFloat)alpha;

@end
