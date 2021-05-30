#import "CCUICAPackageDescription.h"
#import "CCUIContentModule-Protocol.h"

API_AVAILABLE(ios(11.0))
@interface CCUIToggleModule : NSObject <CCUIContentModule>

@property (assign, getter=isSelected, nonatomic) BOOL selected;

/*
 * If you're using an image as you icon gylph, Icon glyphs should have
 * a height of 48px for @2x and 72 for @3x, the width can be anything.
 */
@property (nonatomic, copy, readonly) UIImage *iconGlyph;
@property (nonatomic, copy, readonly) UIImage *selectedIconGlyph;

@property (nonatomic, copy, readonly) UIColor *selectedColor;

@property (nonatomic, copy, readonly) CCUICAPackageDescription *glyphPackageDescription;

@property (nonatomic, readonly) UIViewController <CCUIContentModuleContentViewController> *contentViewController;
@property (nonatomic, readonly) UIViewController *backgroundViewController;

- (void)refreshState; // Force a refresh of the switch state

- (NSString *)glyphState;

- (CCUICAPackageDescription *)glyphPackage;

@end
