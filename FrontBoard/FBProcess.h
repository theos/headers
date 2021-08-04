#import <Foundation/Foundation.h>

@interface FBProcess : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

@property (nonatomic, readonly) NSInteger pid;

@end
