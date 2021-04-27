#import <Foundation/Foundation.h>
#import <QuartzCore/CABase.h>

API_AVAILABLE(ios(2.0))
@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSCoding>

@property (readonly) NSString *type;
@property (copy) NSString *name;
@property (getter=isEnabled) BOOL enabled;
@property BOOL cachesInputImage API_AVAILABLE(ios(3.0));

+ (NSArray <NSString *> *)filterTypes;
+ (CAFilter *)filterWithType:(NSString *)type;
+ (CAFilter *)filterWithName:(NSString *)name; // alias for filterWithType:

- (instancetype)initWithType:(NSString *)type;
- (instancetype)initWithName:(NSString *)name; // alias for initWithType:

- (BOOL)enabled; // alias for isEnabled
- (void)setDefaults;

@end

// only some of the below strings are used for
// filter types.
// it's best to use +[CAFilter filterTypes] to
// determine the available filters.
// creating and applying a filter that is not
// available, or does not exist, should have
// no effect (per testing on iOS 14: the filter
// is created and has no effect on the layer).

CA_EXTERN NSString *const kCAFilterASG;
CA_EXTERN NSString *const kCAFilterASG77;
CA_EXTERN NSString *const kCAFilterAlphaThreshold;
CA_EXTERN NSString *const kCAFilterAverageColor;
CA_EXTERN NSString *const kCAFilterBias;
CA_EXTERN NSString *const kCAFilterBox;
CA_EXTERN NSString *const kCAFilterClear;
CA_EXTERN NSString *const kCAFilterColorAdd;
CA_EXTERN NSString *const kCAFilterColorBlendMode;
CA_EXTERN NSString *const kCAFilterColorBrightness;
CA_EXTERN NSString *const kCAFilterColorBurnBlendMode;
CA_EXTERN NSString *const kCAFilterColorContrast;
CA_EXTERN NSString *const kCAFilterColorDodgeBlendMode;
CA_EXTERN NSString *const kCAFilterColorHueRotate;
CA_EXTERN NSString *const kCAFilterColorInvert;
CA_EXTERN NSString *const kCAFilterColorMatrix;
CA_EXTERN NSString *const kCAFilterColorMonochrome;
CA_EXTERN NSString *const kCAFilterColorSaturate;
CA_EXTERN NSString *const kCAFilterColorSubtract;
CA_EXTERN NSString *const kCAFilterCompressLuminance;
CA_EXTERN NSString *const kCAFilterCopy;
CA_EXTERN NSString *const kCAFilterCubic;
CA_EXTERN NSString *const kCAFilterCurves;
CA_EXTERN NSString *const kCAFilterDarkenBlendMode;
CA_EXTERN NSString *const kCAFilterDarkenSourceOver;
CA_EXTERN NSString *const kCAFilterDest;
CA_EXTERN NSString *const kCAFilterDestAtop;
CA_EXTERN NSString *const kCAFilterDestIn;
CA_EXTERN NSString *const kCAFilterDestOut;
CA_EXTERN NSString *const kCAFilterDestOver;
CA_EXTERN NSString *const kCAFilterFog;
CA_EXTERN NSString *const kCAFilterDifferenceBlendMode;
CA_EXTERN NSString *const kCAFilterDistanceField;
CA_EXTERN NSString *const kCAFilterDivideBlendMode;
CA_EXTERN NSString *const kCAFilterEDRGain;
CA_EXTERN NSString *const kCAFilterExclusionBlendMode;
CA_EXTERN NSString *const kCAFilterGaussianBlur;
CA_EXTERN NSString *const kCAFilterHardLightBlendMode;
CA_EXTERN NSString *const kCAFilterHomeAffordanceBase;
CA_EXTERN NSString *const kCAFilterHueBlendMode;
CA_EXTERN NSString *const kCAFilterInputAddWhite;
CA_EXTERN NSString *const kCAFilterInputAlphaValues;
CA_EXTERN NSString *const kCAFilterInputAmount;
CA_EXTERN NSString *const kCAFilterInputAngle;
CA_EXTERN NSString *const kCAFilterInputAspectRatio;
CA_EXTERN NSString *const kCAFilterInputBackColor0;
CA_EXTERN NSString *const kCAFilterInputBackColor1;
CA_EXTERN NSString *const kCAFilterInputBackEnabled;
CA_EXTERN NSString *const kCAFilterInputBias;
CA_EXTERN NSString *const kCAFilterInputBlueValues;
CA_EXTERN NSString *const kCAFilterInputBounds;
CA_EXTERN NSString *const kCAFilterInputColor;
CA_EXTERN NSString *const kCAFilterInputColor0;
CA_EXTERN NSString *const kCAFilterInputColor1;
CA_EXTERN NSString *const kCAFilterInputColorMap;
CA_EXTERN NSString *const kCAFilterInputColorMatrix;
CA_EXTERN NSString *const kCAFilterInputDither;
CA_EXTERN NSString *const kCAFilterInputEndAngle;
CA_EXTERN NSString *const kCAFilterInputFrontColor;
CA_EXTERN NSString *const kCAFilterInputFrontEnabled;
CA_EXTERN NSString *const kCAFilterInputGreenValues;
CA_EXTERN NSString *const kCAFilterInputHSVSpace;
CA_EXTERN NSString *const kCAFilterInputHardEdges;
CA_EXTERN NSString *const kCAFilterInputIntermediateBitDepth;
CA_EXTERN NSString *const kCAFilterInputLinear;
CA_EXTERN NSString *const kCAFilterInputNormalizeEdges;
CA_EXTERN NSString *const kCAFilterInputOverlayOpacity;
CA_EXTERN NSString *const kCAFilterInputQuality;
CA_EXTERN NSString *const kCAFilterInputRadius;
CA_EXTERN NSString *const kCAFilterInputRedValues;
CA_EXTERN NSString *const kCAFilterInputReversed;
CA_EXTERN NSString *const kCAFilterInputScale;
CA_EXTERN NSString *const kCAFilterInputShadowBounds;
CA_EXTERN NSString *const kCAFilterInputShadowColor;
CA_EXTERN NSString *const kCAFilterInputStartAngle;
CA_EXTERN NSString *const kCAFilterInputTime;
CA_EXTERN NSString *const kCAFilterInputValues;
CA_EXTERN NSString *const kCAFilterLanczos;
CA_EXTERN NSString *const kCAFilterLighting;
CA_EXTERN NSString *const kCAFilterLanczosResize;
CA_EXTERN NSString *const kCAFilterLightenBlendMode;
CA_EXTERN NSString *const kCAFilterLightenSourceOver;
CA_EXTERN NSString *const kCAFilterLinear;
CA_EXTERN NSString *const kCAFilterLinearBurnBlendMode;
CA_EXTERN NSString *const kCAFilterLinearDodgeBlendMode;
CA_EXTERN NSString *const kCAFilterLinearLightBlendMode;
CA_EXTERN NSString *const kCAFilterLinearlySampledLinear;
CA_EXTERN NSString *const kCAFilterLuminanceCurveMap;
CA_EXTERN NSString *const kCAFilterLuminanceMap;
CA_EXTERN NSString *const kCAFilterLuminanceToAlpha;
CA_EXTERN NSString *const kCAFilterLuminosityBlendMode;
CA_EXTERN NSString *const kCAFilterMaximum;
CA_EXTERN NSString *const kCAFilterMeteor;
CA_EXTERN NSString *const kCAFilterMinimum;
CA_EXTERN NSString *const kCAFilterMultiply;
CA_EXTERN NSString *const kCAFilterMultiplyBlendMode;
CA_EXTERN NSString *const kCAFilterMultiplyColor;
CA_EXTERN NSString *const kCAFilterMultiplyGradient;
CA_EXTERN NSString *const kCAFilterNearest;
CA_EXTERN NSString *const kCAFilterNormalBlendMode;
CA_EXTERN NSString *const kCAFilterOpacityPair;
CA_EXTERN NSString *const kCAFilterOverlayBlendMode;
CA_EXTERN NSString *const kCAFilterPageCurl;
CA_EXTERN NSString *const kCAFilterPinLightBlendMode;
CA_EXTERN NSString *const kCAFilterPlusD;
CA_EXTERN NSString *const kCAFilterPlusL;
CA_EXTERN NSString *const kCAFilterSDRNormalize;
CA_EXTERN NSString *const kCAFilterSaturationBlendMode;
CA_EXTERN NSString *const kCAFilterScreenBlendMode;
CA_EXTERN NSString *const kCAFilterSoftLightBlendMode;
CA_EXTERN NSString *const kCAFilterSourceAtop;
CA_EXTERN NSString *const kCAFilterSourceIn;
CA_EXTERN NSString *const kCAFilterSourceOut;
CA_EXTERN NSString *const kCAFilterSourceOver;
CA_EXTERN NSString *const kCAFilterSubtractBlendMode;
CA_EXTERN NSString *const kCAFilterSubtractD;
CA_EXTERN NSString *const kCAFilterSubtractS;
CA_EXTERN NSString *const kCAFilterTrilinear;
CA_EXTERN NSString *const kCAFilterVariableBlur;
CA_EXTERN NSString *const kCAFilterVibrantColorMatrix;
CA_EXTERN NSString *const kCAFilterVibrantColorMatrixSourceOver;
CA_EXTERN NSString *const kCAFilterVibrantDark;
CA_EXTERN NSString *const kCAFilterVibrantLight;
CA_EXTERN NSString *const kCAFilterXor;
