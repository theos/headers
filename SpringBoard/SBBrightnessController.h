#import <Foundation/NSObject.h>

@interface SBBrightnessController : NSObject

+ (SBBrightnessController *)sharedBrightnessController;

- (void)adjustBacklightLevel:(BOOL)upOrDown;

@end
