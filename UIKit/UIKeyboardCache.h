@interface UIKeyboardCache : NSObject

+ (instancetype)sharedInstance;

- (void)clearNonPersistentCache;

@end
