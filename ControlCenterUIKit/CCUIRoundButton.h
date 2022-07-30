#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "CCUICAPackageView.h"
#import "CCUICAPackageDescription.h"

API_AVAILABLE(ios(11.0))
@interface CCUIRoundButton : UIControl <UIGestureRecognizerDelegate>

@property (nonatomic, retain) UIColor *highlightColor;

@property (nonatomic, retain) UIView *normalStateBackgroundView;
@property (nonatomic, retain) UIView *selectedStateBackgroundView;

@property (nonatomic, retain) UIImageView *glyphImageView;
@property (nonatomic, retain) UIImageView *selectedGlyphView;

@property (nonatomic, retain) CCUICAPackageView *glyphPackageView;

@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;

@property (nonatomic, retain) UIImage *glyphImage;

@property (nonatomic, copy) NSString *glyphState;

- (CGFloat)_cornerRadius;

- (void)_setCornerRadius:(CGFloat)cornerRadius;
- (void)_updateForStateChange;

- (instancetype)initWithHighlightColor:(UIColor *)highlightColor useLightStyle:(BOOL)useLightStyle;
- (instancetype)initWithGlyphImage:(UIImage *)glyphImage highlightColor:(UIColor *)highlightColor;
- (instancetype)initWithGlyphImage:(UIImage *)glyphImage highlightColor:(UIColor *)highlightColor useLightStyle:(BOOL)useLightStyle;
- (instancetype)initWithGlyphPackageDescription:(CCUICAPackageDescription *)glyphPackageDescription highlightColor:(id)highlightColor;
- (instancetype)initWithGlyphPackageDescription:(CCUICAPackageDescription *)glyphPackageDescription highlightColor:(id)highlightColor useLightStyle:(BOOL)useLightStyle;

@end
