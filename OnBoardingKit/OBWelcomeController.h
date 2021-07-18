#import "OBButtonTray.h"
#import "OBBaseWelcomeController.h"

API_AVAILABLE(ios(13.0))
@interface OBWelcomeController : OBBaseWelcomeController <UIScrollViewDelegate>

@property (nonatomic, retain) UIView *viewIfLoaded;
@property (nonatomic, strong) UIColor *backgroundColor;

@property (nonatomic, retain) OBButtonTray *buttonTray;

- (instancetype)initWithTitle:(NSString *)title detailText:(NSString *)detailText icon:(UIImage *)icon;

- (void)addBulletedListItemWithTitle:(NSString *)title description:(NSString *)description image:(UIImage *)image;

@end
