#import <Foundation/Foundation.h>

@interface BBSectionIconVariant : NSObject

+ (instancetype)variantWithFormat:(NSUInteger)format imageData:(NSData *)data;
+ (instancetype)variantWithFormat:(NSInteger)format imageName:(NSString *)imageName inBundle:(NSBundle *)bundle;

@end
