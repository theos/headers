#include <sys/cdefs.h>

@class FBSDisplay;

@interface FBSystemGestureManager : NSObject <UIGestureRecognizerDelegate>

+ (instancetype)sharedInstance;

- (void)addGestureRecognizer:(UIGestureRecognizer *)recognizer toDisplay:(FBSDisplay *)display;

@end

__BEGIN_DECLS

// Minor but SB uses these functions to get location / translation / velocity
CGPoint FBSystemGestureLocationInView(UIGestureRecognizer *recognizer, UIView *view);
CGPoint FBSystemGestureVelocityInView(UIGestureRecognizer *recognizer, UIView *view);
CGPoint FBSystemGestureTranslationInView(UIGestureRecognizer *recognizer, UIView *view);

__END_DECLS
