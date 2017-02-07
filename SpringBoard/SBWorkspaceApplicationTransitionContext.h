#import "SBWorkspaceTransitionContext.h"

typedef NS_ENUM(NSInteger, SBLayoutRole) {
	SBLayoutRoleUnknown,
	SBLayoutRoleMainApp,
	SBLayoutRoleSideApp
};

@class SBWorkspaceApplication;

@interface SBWorkspaceApplicationTransitionContext : SBWorkspaceTransitionContext

- (SBWorkspaceApplication *)previousApplicationForLayoutRole:(SBLayoutRole)layoutRole;

@end
