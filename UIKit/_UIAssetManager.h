#import <UIKit/UIKit.h>

API_AVAILABLE(ios(7.0))
@interface _UIAssetManager : NSObject

@property (assign, nonatomic) CGFloat preferredScale;
@property (nonatomic, retain) UITraitCollection *preferredTraitCollection;
@property (nonatomic, readonly) NSString *carFileName;
@property (nonatomic, readonly) NSBundle *bundle;

+ (instancetype)assetManagerForBundle:(NSBundle *)bundle;

- (instancetype)initWithName:(NSString *)name inBundle:(NSBundle *)bundle idiom:(UIUserInterfaceIdiom)idiom;

- (UIImage *)imageNamed:(NSString *)name;
- (UIImage *)imageNamed:(NSString *)name configuration:(UIImageConfiguration *)configuration API_AVAILABLE(ios(13.0));
- (UIImage *)imageNamed:(NSString *)name idiom:(UIUserInterfaceIdiom)idiom;
- (UIImage *)imageNamed:(NSString *)name idiom:(UIUserInterfaceIdiom)idiom subtype:(NSUInteger)subtype;
- (UIImage *)imageNamed:(NSString *)name scale:(CGFloat)scale idiom:(UIUserInterfaceIdiom)idiom subtype:(NSUInteger)subtype;

@end