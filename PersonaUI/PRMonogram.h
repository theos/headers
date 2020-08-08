#import <UIKit/UIKit.h>

API_AVAILABLE(ios(10.0))
@interface PRMonogram : NSObject

@property (nonatomic, copy) NSString *text;
@property (assign, nonatomic) NSUInteger fontIndex;
@property (nonatomic, retain) UIColor *color;

+ (instancetype)monogram;
+ (instancetype)monogramWithData:(NSData *)data;

+ (NSArray <UIColor *> *)monogramColors;

/**** font info ****/
+ (NSUInteger)countOfFonts;
+ (UIFont *)fontForIndex:(NSUInteger)index plateDiameter:(CGFloat)diameter;
+ (CGFloat)kerningForFontIndex:(NSUInteger)index fontSize:(CGFloat)size;

+ (CAGradientLayer *)plateOverlayLayer;
+ (void)updatePlateOverlayLayer:(CAGradientLayer *)overlayLayer API_AVAILABLE(ios(11.4));

+ (UIColor *)plateFlatColor;
+ (UIColor *)plateGradientStartColor API_AVAILABLE(ios(11.4));
+ (UIColor *)plateGradientEndColor API_AVAILABLE(ios(11.4));

+ (UIColor *)plateSelectedActiveColor API_AVAILABLE(ios(11.4));
+ (UIColor *)plateSelectedActiveTextColor API_AVAILABLE(ios(11.4));
+ (UIColor *)plateSelectedInactiveColor API_AVAILABLE(ios(11.4));

- (void)setFontIndexToUnsupportedValue;

- (NSData *)dataRepresentation;

// options not yet implemented, pass nil
- (UIImage *)snapshotWithSize:(CGSize)size scale:(CGFloat)scale options:(id)options;
- (UIImage *)snapshotWithOptions:(id)options;

- (NSDictionary <NSString *, id> *)stringAttributesForDiameter:(CGFloat)diameter API_AVAILABLE(ios(11.4));

@end
