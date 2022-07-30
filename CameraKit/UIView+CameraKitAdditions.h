#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIView (CameraKit)

- (void)cam_setHidden:(BOOL)hidden animated:(BOOL)animated;

- (BOOL)cam_hasConstraintForKey:(NSString *)key;
- (void)cam_addConstraints:(NSArray *)constraints forKey:(NSString *)key;
- (void)cam_removeAllConstraintsForKey:(NSString *)key;
- (NSArray *)cam_constraintsForKey:(NSString *)key;

@end
