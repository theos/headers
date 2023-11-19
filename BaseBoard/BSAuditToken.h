#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>

@interface BSAuditToken : NSObject <NSCopying>

@property (nonatomic, copy, readonly) NSString *bundleID;
@property (nonatomic, readonly) pid_t pid;

@end
