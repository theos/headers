#import <Foundation/NSObject.h>

NS_CLASS_AVAILABLE_IOS(7_0) @interface _UICache : NSObject

- (instancetype)init;

- (void)setObject:(id)object forKey:(id <NSCopying>)key;
- (id)objectForKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (void)removeAllObjects;
- (NSArray *)cacheKeys NS_AVAILABLE_IOS(8_2);

@property (nonatomic, readwrite) BOOL clearsCacheOnLowMemoryWarnings;

@property (nonatomic, readwrite) BOOL clearsCacheOnApplicationBackground;

@end
