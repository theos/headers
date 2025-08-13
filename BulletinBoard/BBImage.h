#import <Foundation/Foundation.h>

@interface BBImage : NSObject

+ (instancetype)imageWithName:(NSString *)imageName inBundlePath:(NSString *)bundlePath;

@end
