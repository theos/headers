#import <Foundation/Foundation.h>

@interface NSString (Private)

+ (NSString *)stringWithUnichar:(unsigned int)aChar;
+ (NSString *)_stringWithUnichar:(unsigned int)aChar;

@end
