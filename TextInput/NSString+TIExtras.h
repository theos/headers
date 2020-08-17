#import <Foundation/Foundation.h>

@interface NSString (TIExtras)
  
+ (NSString *)stringWithUnichar:(unsigned int)aChar;

- (unsigned int)_firstLongCharacter;

- (BOOL)_containsEmoji;

@end
