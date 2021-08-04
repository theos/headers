#import <Foundation/Foundation.h>

@class FBScene;

@interface FBSceneManager : NSObject

+ (instancetype)sharedInstance;

- (FBScene *)sceneWithIdentifier:(NSString *)identifier;

@end
