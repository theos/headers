#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>

@class FZMessage;

@interface IMDMessageStore : NSObject

+ (instancetype)sharedInstance;

- (FZMessage *)messageWithGUID:(NSString *)guid;

@end
