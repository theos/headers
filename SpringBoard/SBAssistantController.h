#import <Foundation/NSObject.h>
#import <Foundation/NSObjCRuntime.h>

@interface SBAssistantController : NSObject

+ (instancetype)sharedInstance;

- (BOOL)handleSiriButtonDownEventFromSource:(NSInteger)source activationEvent:(NSInteger)event;
- (void)handleSiriButtonUpEventFromSource:(NSInteger)source;

@end
