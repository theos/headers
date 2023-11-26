#import <CoreGraphics/CoreGraphics.h>

@protocol VeloxFolderViewProtocol

+ (int)folderHeight;

- (instancetype)initWithFrame:(CGRect)frame;

@optional
- (void)unregisterFromStuff;

@end
