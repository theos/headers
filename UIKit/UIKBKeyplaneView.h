#import "UIKBTree.h"

@interface UIKBKeyplaneView : UIView

- (NSInteger)stateForKey:(UIKBTree *)key;

- (UIView *)viewForKey:(UIKBTree *)key;

- (NSString *)cacheIdentifierForKey:(UIKBTree *)key withState:(NSInteger)state;

@end
