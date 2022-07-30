#import <Foundation/Foundation.h>

@interface UIKeyboardCache : NSObject

+ (instancetype)sharedInstance;

- (void)clearNonPersistentCache;

@end
