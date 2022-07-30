#import <UIKit/UIKit.h>

@class FBSDisplay;

@interface FBSystemGestureManager : NSObject <UIGestureRecognizerDelegate>

+ (instancetype)sharedInstance;

- (void)addGestureRecognizer:(UIGestureRecognizer *)recognizer toDisplay:(FBSDisplay *)display;

@end

// Minor but SB uses these functions to get location / translation / velocity
FOUNDATION_EXPORT CGPoint FBSystemGestureLocationInView(UIGestureRecognizer *recognizer, UIView *view);
FOUNDATION_EXPORT CGPoint FBSystemGestureVelocityInView(UIGestureRecognizer *recognizer, UIView *view);
FOUNDATION_EXPORT CGPoint FBSystemGestureTranslationInView(UIGestureRecognizer *recognizer, UIView *view);
