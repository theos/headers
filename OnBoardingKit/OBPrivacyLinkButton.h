#import <UIKit/UIKit.h>

API_AVAILABLE(ios(13.0))
@interface OBPrivacyLinkButton : UIButton

- (instancetype)initWithCaption:(NSString *)caption buttonText:(NSString *)buttonText image:(UIImage *)image imageSize:(CGSize)imageSize useLargeIcon:(BOOL)useLargeIcon API_DEPRECATED("Use the method with displayLanguage parameter instead", ios(13.0, 15.7));
- (instancetype)initWithCaption:(NSString *)caption buttonText:(NSString *)buttonText image:(UIImage *)image imageSize:(CGSize)imageSize useLargeIcon:(BOOL)useLargeIcon displayLanguage:(NSString *)displayLanguage API_AVAILABLE(ios(16.0));

@end
