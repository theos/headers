#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>

@class IMFileTransfer;

@interface IMDFileTransferCenter : NSObject

- (IMFileTransfer *)transferForGUID:(NSString *)guid;

@end
