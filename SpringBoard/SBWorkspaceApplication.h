#import "SBWorkspaceEntity.h"

@class SBApplication;

@interface SBWorkspaceApplication : SBWorkspaceEntity

@property (nonatomic, retain) SBApplication *application;
@property (nonatomic, retain, readonly) NSString *bundleIdentifier;

@end
