#import "_UIBackdropView.h"

@interface _UIBackdropViewSettings : NSObject

+ (instancetype)settingsForPrivateStyle:(NSInteger)style graphicsQuality:(NSInteger)graphicsQuality;
+ (instancetype)settingsForPrivateStyle:(NSInteger)style;
+ (instancetype)settingsForStyle:(NSInteger)style graphicsQuality:(NSInteger)graphicsQuality;
+ (instancetype)settingsForStyle:(NSInteger)style;

+ (UIColor *)darkeningTintColor;

- (instancetype)initWithDefaultValues;
- (instancetype)initWithDefaultValuesForGraphicsQuality:(NSInteger)graphicsQuality;

@property (assign) _UIBackdropViewSettings *parentSettings;
@property (retain) _UIBackdropViewSettings *colorSettings;

@property (assign) _UIBackdropView *backdrop;

@property CGFloat colorTintAlpha;
@property CGFloat grayscaleTintLevel;
@property CGFloat grayscaleTintAlpha;
@property CGFloat averageBrightness;
@property CGFloat averageHue;
@property CGFloat averageSaturation;
@property CGFloat contrast;
@property CGFloat previousAverageBrightness;
@property CGFloat previousAverageHue;
@property CGFloat previousAverageSaturation;
@property CGFloat previousContrast;
@property CGFloat blurRadius;
@property CGFloat colorBurnTintAlpha;
@property CGFloat colorBurnTintLevel;
@property CGFloat colorTintMaskAlpha;
@property CGFloat darkeningTintAlpha;
@property CGFloat darkeningTintBrightness;
@property CGFloat darkeningTintHue;
@property CGFloat darkeningTintSaturation;
@property CGFloat filterMaskAlpha;
@property CGFloat grayscaleTintMaskAlpha;
@property CGFloat saturationDeltaFactor;
@property CGFloat scale;

@property BOOL appliesTintAndBlurSettings;
@property BOOL blursWithHardEdges;
@property BOOL usesBackdropEffectView;
@property BOOL usesColorBurnTintView;
@property BOOL usesColorTintView;
@property BOOL usesContentView;
@property BOOL usesDarkeningTintView;
@property BOOL usesGrayscaleTintView;
@property BOOL darkenWithSourceOver;
@property BOOL explicitlySetGraphicsQuality;
@property BOOL lightenGrayscaleWithSourceOver;
@property BOOL requiresColorStatistics;

@property (getter=isBackdropVisible) BOOL backdropVisible;
@property (getter=isSelected) BOOL selected;
@property BOOL designMode;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isHighlighted) BOOL highlighted;

@property (copy) NSString *blurQuality;

@property (retain) UIImage *colorTintMaskImage;
@property (retain) UIImage *colorBurnTintMaskImage;
@property (retain) UIImage *darkeningTintMaskImage;
@property (retain) UIImage *filterMaskImage;
@property (retain) UIImage *grayscaleTintMaskImage;

@property (nonatomic, retain) UIColor *colorTint;
@property (readonly) UIColor *color;
@property (retain) UIColor *combinedTintColor;
@property (retain) UIColor *legibleColor;

@property NSTimeInterval statisticsInterval;

@property NSInteger graphicsQuality;
@property NSInteger blurHardEdges;
@property NSInteger renderingHint;
@property NSInteger stackingLevel;
@property NSInteger style;
@property NSInteger suppressSettingsDidChange;

- (void)setDefaultValues;

@end
