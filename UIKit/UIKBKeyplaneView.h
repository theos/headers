#import "UIKBTree.h"

@interface UIKBKeyplaneView : UIView

- (UIView *)viewForKey:(UIKBTree *)key;
- (NSInteger)stateForKey:(UIKBTree *)key;
- (NSString *)cacheIdentifierForKey:(UIKBTree *)key withState:(NSInteger)state;

@end
