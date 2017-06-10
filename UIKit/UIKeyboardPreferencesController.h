@interface UIKeyboardPreferencesController : NSObject
+ (instancetype)sharedPreferencesController;

- (BOOL)boolForKey:(NSInteger)key;
- (id)valueForKey:(NSInteger)key;

- (void)setValue:(id)value forKey:(NSInteger)key;
@end
