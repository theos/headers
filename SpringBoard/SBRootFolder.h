#import "SBFolder.h"

@class SBIcon;

@interface SBRootFolder : SBFolder

- (NSIndexPath *)indexPathForIcon:(SBIcon *)icon;

@end
