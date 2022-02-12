#import <Foundation/NSObject.h>

API_AVAILABLE(ios(7.0))
@interface _UICache : NSObject

- (void)setObject:(id)object forKey:(id <NSCopying>)key;
- (id)objectForKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (void)removeAllObjects;
- (NSArray *)cacheKeys API_AVAILABLE(ios(8.2));

@property (nonatomic, assign, readwrite) BOOL clearsCacheOnLowMemoryWarnings;

@property (nonatomic, assign, readwrite) BOOL clearsCacheOnApplicationBackground;

@end