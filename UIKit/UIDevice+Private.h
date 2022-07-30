#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIDevice (Private)

@property (nonatomic, readonly) BOOL _supportsForceTouch API_AVAILABLE(ios(8.0));

+ (NSString *)modelSpecificLocalizedStringKeyForKey:(NSString *)key;

- (NSInteger)_graphicsQuality API_AVAILABLE(ios(7.0));

@end
