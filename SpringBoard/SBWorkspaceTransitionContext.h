@interface SBWorkspaceTransitionContext : NSObject

@property (nonatomic, copy, readonly) NSSet *entities;
@property (assign, nonatomic) BOOL animationDisabled; 

@end
