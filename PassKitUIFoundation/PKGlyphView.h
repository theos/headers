#import <PassKitUI/PKGlyphViewDelegate.h>

@interface PKGlyphView : UIView

- (PKGlyphView *)initWithStyle:(NSInteger)style;

@property (nonatomic, copy) UIColor *primaryColor;
@property (nonatomic, copy) UIColor *secondaryColor;
@property (assign, nonatomic) BOOL fadeOnRecognized;
@property (nonatomic, retain) UIImage *customImage;
@property (nonatomic, readonly) NSInteger state;
@property (assign, nonatomic) id<PKGlyphViewDelegate> delegate;

- (void)setState:(NSInteger)state animated:(BOOL)animated completionHandler:(id)completion;

@end
