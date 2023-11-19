#import <Foundation/NSObject.h>
#import <Foundation/NSObjCRuntime.h>
#import <Foundation/NSData.h>

@interface BBSectionIconVariant : NSObject

+ (instancetype)variantWithFormat:(NSUInteger)format imageData:(NSData *)data;

@end
