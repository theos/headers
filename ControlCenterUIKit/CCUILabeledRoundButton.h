#import <UIKit/UKit.h>
#import <Foundation/Foundation.h>
#import <CoreHaptics/CoreGraphics.h>
#import "CCUICAPackageDescription.h"
#import "CCUIRoundButton.h"

API_AVAILABLE(ios(11.0))
@interface CCUILabeledRoundButton : UIView

@property (nonatomic, retain) CCUIRoundButton *buttonView;

@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;

@property (nonatomic, retain) UIColor *highlightColor;

@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *subtitleLabel;

@property (nonatomic, retain) UIImage *glyphImage;

@property (nonatomic, copy) NSString *glyphState;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;

@property (assign, nonatomic) BOOL labelsVisible;

- (instancetype)initWithHighlightColor:(UIColor *)highlightColor useLightStyle:(BOOL)useLightStyle;
- (instancetype)initWithGlyphImage:(UIImage *)glyphImage highlightColor:(UIColor *)highlightColor;
- (instancetype)initWithGlyphImage:(UIImage *)glyphImage highlightColor:(UIColor *)highlightColor useLightStyle:(BOOL)useLightStyle;
- (instancetype)initWithGlyphPackageDescription:(CCUICAPackageDescription *)glyphPackageDescription highlightColor:(UIColor *)highlightColor;
- (instancetype)initWithGlyphPackageDescription:(CCUICAPackageDescription *)glyphPackageDescription highlightColor:(id)highlightColor useLightStyle:(BOOL)useLightStyle;

@end
