#import "OBTrayButton.h"

API_AVAILABLE(ios(13.0))
@interface OBButtonTray : UIView

- (void)addButton:(OBTrayButton *)button;
- (void)addCaptionText:(NSString *)captionText;

@end
