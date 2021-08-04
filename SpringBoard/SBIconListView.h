#import <SpringBoardHome/SBHIconGridSize.h>
#import <SpringBoardHome/SBHIconGridSizeClass.h>
#import <CoreGraphics/CoreGraphics.h>

API_AVAILABLE(ios(4.0))
@interface SBIconListView : UIView

@property(readonly, nonatomic) NSUInteger maximumIconCount API_AVAILABLE(ios(13.0));
@property(readonly, nonatomic) NSUInteger maxIcons API_DEPRECATED_WITH_REPLACEMENT("maximumIconCount", ios(4.0, 13.0));
@property(readonly, nonatomic) NSUInteger iconColumnsForCurrentOrientation;
@property(readonly, nonatomic) NSUInteger iconRowsForCurrentOrientation;

- (void)setAlphaForAllIcons:(CGFloat)alpha;

- (SBHIconGridSize)iconGridSizeForClass:(SBHIconGridSizeClass)iconGridSizeClass API_AVAILABLE(ios(13.0));

@end
