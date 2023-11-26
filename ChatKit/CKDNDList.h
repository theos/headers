#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>
#import <Foundation/NSString.h>

@interface CKDNDList : NSObject

+ (instancetype)sharedList;

- (BOOL)isMutedChatIdentifier:(NSString *)identifier;
- (NSDate *)unmuteDateForIdentifier:(NSString *)identifier;

@end
