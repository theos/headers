#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <MobileIcons/MobileIcons.h>

@class LSApplicationProxy;

FOUNDATION_EXPORT UIImage *_UIImageWithName(NSString *name);

@interface UIImage (Private)

+ (instancetype)kitImageNamed:(NSString *)name;
+ (instancetype)imageNamed:(NSString *)name inBundle:(NSBundle *)bundle;

+ (instancetype)imageWithContentsOfCPBitmapFile:(NSString *)filename flags:(NSInteger)flags; // TODO: make this an enum

+ (instancetype)_applicationIconImageForBundleIdentifier:(NSString *)bundleIdentifier format:(MIIconVariant)format scale:(CGFloat)scale;
+ (instancetype)_iconForResourceProxy:(LSApplicationProxy *)applicationProxy format:(MIIconVariant)format;

- (instancetype)_applicationIconImageForFormat:(MIIconVariant)format precomposed:(BOOL)precomposed scale:(CGFloat)scale;

- (instancetype)_flatImageWithColor:(UIColor *)color;

- (BOOL)writeToCPBitmapFile:(NSString *)filename flags:(NSInteger)flags; // TODO: make this an enum

- (BOOL)_isResizable;

@property CGFloat scale;

@end
