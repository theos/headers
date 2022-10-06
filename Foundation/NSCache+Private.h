#import <Foundation/Foundation.h>

@interface NSCache (Private)

- (BOOL)evictsObjectsWhenApplicationEntersBackground API_AVAILABLE(ios(6.0));

- (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)evict API_AVAILABLE(ios(6.0));

@end
