#import "UIKBRenderConfig.h"

@interface UIView (PhotoLibraryAdditions)

+ (NSTimeInterval)pl_setHiddenAnimationDuration;
- (void)pl_setHidden:(BOOL)hidden animated:(BOOL)animated;

@end

@interface UIView (CameraKit)

- (void)cam_setHidden:(BOOL)hidden animated:(BOOL)animated;

@end

@interface UIView (Contraints)

// iOS 8+
- (BOOL)cam_hasConstraintForKey:(NSString *)key;
- (void)cam_addConstraints:(NSArray *)constraints forKey:(NSString *)key;
- (void)cam_removeAllConstraintsForKey:(NSString *)key;
- (NSArray *)cam_constraintsForKey:(NSString *)key;

@end

@interface UIView (Private)
- (UIKBRenderConfig *)_inheritedRenderConfig; // iOS 7+
- (void)_setRenderConfig:(UIKBRenderConfig *)renderConfig; // iOS 7+
@end
