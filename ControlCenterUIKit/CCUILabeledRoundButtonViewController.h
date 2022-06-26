#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "CCUILabeledRoundButton.h"
#import "CCUICAPackageDescription.h"

API_AVAILABLE(ios(11.0))
@interface CCUILabeledRoundButtonViewController : UIViewController

@property (assign, nonatomic) BOOL useLightStyle;
@property (assign, nonatomic) BOOL labelsVisible;
@property (assign, nonatomic) BOOL toggleStateOnTap;
@property (assign, getter=isEnabled, nonatomic) BOOL enabled;
@property (assign, getter=isInoperative, nonatomic) BOOL inoperative;

@property (nonatomic, retain) UIColor *highlightColor;

@property (nonatomic, retain) UIControl *button;

@property (nonatomic, retain) UIImage *glyphImage;

@property (nonatomic, retain) CCUILabeledRoundButton *buttonContainer;

@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;

@property (nonatomic, copy) NSString *glyphState;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;

- (instancetype)initWithGlyphImage:(UIImage *)glyphImage highlightColor:(UIColor *)highlightColor;
- (instancetype)initWithGlyphImage:(UIImage *)glyphImage highlightColor:(UIColor *)highlightColor useLightStyle:(BOOL)useLightStyle;
- (instancetype)initWithGlyphPackageDescription:(CCUICAPackageDescription *)glyphPackageDescription highlightColor:(UIColor *)highlightColor;
- (instancetype)initWithGlyphPackageDescription:(CCUICAPackageDescription *)glyphPackageDescription highlightColor:(UIColor *)highlightColor useLightStyle:(BOOL)useLightStyle;

@end

