#import "FBSceneClient.h"
#import "FBSceneClientProvider.h"

@class FBSSceneSettings, FBSMutableSceneSettings, FBSSceneTransitionContext;

@interface FBScene : NSObject

@property (readonly, retain, nonatomic) FBSSceneSettings *settings;

@property (readonly, retain, nonatomic) FBSMutableSceneSettings *mutableSettings;

@property (nonatomic, readonly, retain) id<FBSceneClient> client;

@property (nonatomic, readonly, retain) id<FBSceneClientProvider> clientProvider;

@property (nonatomic, readonly, copy) NSString *identifier;

- (void)_applyMutableSettings:(FBSMutableSceneSettings *)mutableSettings withTransitionContext:(FBSSceneTransitionContext *)transitionContext completion:(id)completionBlock;

@end
