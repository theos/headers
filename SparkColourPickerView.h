#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol SparkColourPickerViewDelegate <NSObject>
- (void)colourPicker:(id)picker didUpdateColour:(UIColor*)colour;
@end

@interface SparkColourPickerView : UIView
// forceUIMode is used to force to dark or light mode (-1: Default, 1: Dark, 2: Light)
- (instancetype)initWithFrame:(CGRect)frame forceUIMode:(int)uiMode;
- (instancetype)initWithFrame:(CGRect)frame forceUIMode:(int)uiMode andViewSizeFactor:(float)viewSizeFactor;

// These two properties can be set before showing the view to set the initial colour. The unmodified colour is without alpha.
@property (nonatomic, retain) UIColor* currentColour;
@property (nonatomic, retain) UIColor* currentColourUnmodified;
@property (nonatomic, assign) float currentColourAlpha;
@property (nonatomic, assign) float currentColourBrightness;

// The title to display at the top, leave NULL for nothing.
@property (nonatomic, retain) NSString* keyName;

// Delegate to call the 'didUpdateColour' method on
@property (nonatomic, retain) id<SparkColourPickerViewDelegate> delegate;

// This is used for showing alerts.
@property (nonatomic, retain) UIViewController* rootViewController;
@end
NS_ASSUME_NONNULL_END
