#import "UIInputViewSet.h"

@interface UIPeripheralHostView : UIView

+ (instancetype)sharedInstance;

@property (nonatomic) BOOL automaticAppearanceEnabled;

- (void)_setReloadInputViewsForcedIsAllowed:(BOOL)allowed;

- (BOOL)automaticAppearanceReallyEnabled;
- (UIInputViewSet *)inputViews;

@end
