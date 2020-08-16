#import <Foundation/Foundation.h>

@interface NSString (TIExtras)

- (unsigned int)_firstLongCharacter;

- (BOOL)_containsEmoji;

@end
