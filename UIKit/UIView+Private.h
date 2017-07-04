@interface UIView (PhotoLibraryAdditions)

+ (NSTimeInterval)pl_setHiddenAnimationDuration;
- (void)pl_setHidden:(BOOL)hidden animated:(BOOL)animated;

@end

@interface UIView (CameraKit)

- (void)cam_setHidden:(BOOL)hidden animated:(BOOL)animated;

@end

@interface UIView (CameraUI)

- (void)cam_ensureSubview:(UIView *)view;

@end

@interface UIView (Contraints)

- (BOOL)cam_hasConstraintForKey:(NSString *)key;
- (void)cam_addConstraints:(NSArray *)constraints forKey:(NSString *)key;
- (void)cam_removeAllConstraintsForKey:(NSString *)key;
- (NSArray *)cam_constraintsForKey:(NSString *)key;

@end
