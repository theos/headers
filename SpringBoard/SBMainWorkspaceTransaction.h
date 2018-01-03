#import "SBWorkspaceTransaction.h"

@class SBMainWorkspaceTransitionRequest;

@interface SBMainWorkspaceTransaction : SBWorkspaceTransaction

@property (nonatomic, readonly) SBMainWorkspaceTransitionRequest *transitionRequest;

- (instancetype)initWithTransitionRequest:(SBMainWorkspaceTransitionRequest *)request;

@end
