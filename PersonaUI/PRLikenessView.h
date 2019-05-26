#import <PersonaKit/PRLikeness.h>

API_AVAILABLE(ios(10.0))
@interface PRLikenessView : UIView

@property (assign, getter=isCircular, nonatomic) BOOL circular;
@property (assign, nonatomic) BOOL highlighted;
@property (assign, nonatomic) BOOL shouldDecode;
@property (nonatomic, retain) PRLikeness *likeness;

- (instancetype)initWithLikeness:(PRLikeness *)likeness;

- (void)setNeedsRedraw;

@end
