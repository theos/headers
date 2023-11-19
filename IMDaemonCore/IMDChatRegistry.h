#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>

@class IMDChat;

@interface IMDChatRegistry : NSObject

+ (instancetype)sharedInstance;

- (NSArray <IMDChat *> *)chats;

@end
