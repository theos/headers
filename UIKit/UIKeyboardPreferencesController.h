#import <Foundation/NSObject.h>
#import <Foundation/NSObjCRuntime.h>
#import <CoreGraphics/CoreGraphics.h>

@interface UIKeyboardPreferencesController : NSObject
+ (instancetype)sharedPreferencesController;

- (BOOL)boolForKey:(NSInteger)key;
- (id)valueForKey:(NSInteger)key;
- (CGFloat)rivenSizeFactor:(CGFloat)factor;

- (void)setValue:(id)value forKey:(NSInteger)key;

@end
