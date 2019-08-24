#import "UIKBRenderConfig.h"

@interface UIView (PhotoLibraryAdditions)

+ (NSTimeInterval)pl_setHiddenAnimationDuration;
- (void)pl_setHidden:(BOOL)hidden animated:(BOOL)animated;

@end

@interface UIView (CameraKit)

- (void)cam_setHidden:(BOOL)hidden animated:(BOOL)animated;

@end

@interface UIView (Contraints)

- (BOOL)cam_hasConstraintForKey:(NSString *)key NS_AVAILABLE_IOS(8_0);
- (void)cam_addConstraints:(NSArray *)constraints forKey:(NSString *)key NS_AVAILABLE_IOS(8_0);
- (void)cam_removeAllConstraintsForKey:(NSString *)key NS_AVAILABLE_IOS(8_0);
- (NSArray *)cam_constraintsForKey:(NSString *)key NS_AVAILABLE_IOS(8_0);

@end

@interface UIView (Private)

- (UIViewController *)_viewControllerForAncestor;

- (UIKBRenderConfig *)_inheritedRenderConfig NS_AVAILABLE_IOS(7_0);

- (void)layoutBelowIfNeeded;

- (void)_setRenderConfig:(UIKBRenderConfig *)renderConfig NS_AVAILABLE_IOS(7_0);

@end
