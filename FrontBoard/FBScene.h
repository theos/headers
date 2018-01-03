#import "FBSceneClient.h"
#import "FBSceneClientProvider.h"

@class FBSSceneSettings, FBSMutableSceneSettings, FBSSceneTransitionContext, FBProcess, FBWindowContextHostManager;

@interface FBScene : NSObject

@property (nonatomic, readonly, retain) FBProcess *clientProcess;

@property (readonly, retain, nonatomic) FBSSceneSettings *settings;

@property (readonly, retain, nonatomic) FBSMutableSceneSettings *mutableSettings;

@property (nonatomic, readonly, retain) id<FBSceneClient> client;

@property (nonatomic, readonly, retain) id<FBSceneClientProvider> clientProvider;

@property (nonatomic, readonly, copy) NSString *identifier;

@property (nonatomic, retain, readonly) FBWindowContextHostManager *contextHostManager;

- (void)_applyMutableSettings:(FBSMutableSceneSettings *)mutableSettings withTransitionContext:(FBSSceneTransitionContext *)transitionContext completion:(id)completionBlock;

@end
