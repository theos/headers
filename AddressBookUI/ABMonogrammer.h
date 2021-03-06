#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, ABMonogrammerStyle) {
	ABMonogrammerStyleLightGray,
	ABMonogrammerStyleWhite,
	ABMonogrammerStyleDarkGraySemitransparent,
	ABMonogrammerStyleLightGraySemitransparent,
};

/* Removed in iOS 11
 * superclass changed to CNMonogrammer in iOS 9,
 *   and almost all functionality was moved there as well
 */
API_DEPRECATED_WITH_REPLACEMENT("CNMonogrammer", ios(7.0, 11.0))
@interface ABMonogrammer : NSObject

- (instancetype)initWithStyle:(ABMonogrammerStyle)style diameter:(CGFloat)diameter;

- (UIImage *)_copyMonogramWithKnockoutMask;

- (void)monogramsAsFlatImages;

@end
