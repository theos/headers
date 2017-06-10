@interface UIView (PhotoLibraryAdditions)

+ (NSTimeInterval)pl_setHiddenAnimationDuration;
- (void)pl_setHidden:(BOOL)hidden animated:(BOOL)animated;

@end

@interface UIView (CameraKit)

- (void)cam_setHidden:(BOOL)hidden animated:(BOOL)animated; NS_AVAILABLE(7_0)

@end

@interface UIView (CameraUI)

- (void)cam_ensureSubview:(UIView *)view; NS_AVAILABLE(7_0)

@end

@interface UIView (Contraints)

- (BOOL)cam_hasConstraintForKey:(NSString *)key; NS_AVAILABLE(7_0)
- (void)cam_addConstraints:(NSArray *)constraints forKey:(NSString *)key; NS_AVAILABLE(7_0)
- (void)cam_removeAllConstraintsForKey:(NSString *)key; NS_AVAILABLE(7_0)
- (NSArray *)cam_constraintsForKey:(NSString *)key; NS_AVAILABLE(7_0)

@end
