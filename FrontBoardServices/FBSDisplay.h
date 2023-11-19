#import <Foundation/NSObject.h>
#import <Foundation/NSObjCRuntime.h>
#import <CoreGraphics/CoreGraphics.h>

@interface FBSDisplay : NSObject

@property (nonatomic, readonly) NSUInteger displayID;
@property (nonatomic, readonly) CGFloat orientation;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) CGRect referenceBounds;

- (BOOL)isMainDisplay;
- (BOOL)isCarDisplay;

@end
