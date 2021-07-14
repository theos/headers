#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface UIAlertAction (Private)

+ (instancetype)_actionWithTitle:(NSString *)title image:(UIImage *)image style:(UIAlertActionStyle)style handler:(void (^)(UIAlertAction *action))handler shouldDismissHandler:(id)shouldDismissHandler;
+ (instancetype)_actionWithTitle:(NSString *)title descriptiveText:(NSString *)descriptiveText image:(UIImage *)image style:(UIAlertActionStyle)style handler:(void (^)(UIAlertAction *action))handler shouldDismissHandler:(id)shouldDismissHandler;
+ (instancetype)_actionWithContentViewController:(UIViewController *)contentViewController style:(UIAlertActionStyle)style handler:(void (^)(UIAlertAction *action))handler;
+ (instancetype)_actionWithContentViewController:(UIViewController *)contentViewController style:(UIAlertActionStyle)style;

@property (nonatomic) UIAlertActionStyle style;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) void (^handler)(UIAlertAction *action);
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain, getter=_contentViewController, setter=_setContentViewController:) UIViewController *contentViewController;
@property (nonatomic, copy, setter=_setDescriptiveText:) NSString *_descriptiveText;
@property (nonatomic, copy, getter=_keyCommandInput, setter=_setKeyCommandInput:) NSString *keyCommandInput;
@property (nonatomic, getter=_keyCommandModifierFlags, setter=_setKeyCommandModifierFlags:) UIKeyModifierFlags keyCommandModifierFlags;

@property (nonatomic, retain, setter=_setTitleTextColor:) UIColor *_titleTextColor;
@property (nonatomic, retain, setter=_setImageTintColor:) UIColor *_imageTintColor;
@property (nonatomic, setter=_setTitleTextAlignment:) NSTextAlignment _titleTextAlignment;
@property (nonatomic, getter=_isChecked, setter=_setChecked:) BOOL _checked;


@end
