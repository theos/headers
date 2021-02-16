#import <UIKit/UIKBTree.h>

@interface TIKeyboardLayoutFactory : NSObject {
    void *_layoutsLibraryHandle;
}

+ (instancetype)sharedKeyboardFactory;
+ (NSString *)layoutsFileName;

@property(readonly, nonatomic) void *layoutsLibraryHandle;
@property(retain) NSMutableDictionary *internalCache;

- (UIKBTree *)keyboardWithName:(NSString *)name inCache:(NSMutableDictionary *)cache;

@end
