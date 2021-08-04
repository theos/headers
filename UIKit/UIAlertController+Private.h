#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface UIAlertController (Private)

+ (instancetype)_alertControllerWithTitle:(NSString *)title message:(NSString *)message;

- (void)_addActionWithTitle:(NSString *)title style:(UIAlertActionStyle)style handler:(void (^)(UIAlertAction *))handler;
- (void)_addActionWithTitle:(NSString *)title image:(UIImage *)image style:(UIAlertActionStyle)style handler:(void (^)(UIAlertAction *))handler;
- (void)_dismissAnimated:(BOOL)animated triggeringAction:(UIAlertAction *)action;

@end
