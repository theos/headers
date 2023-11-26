#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizer.h>

@protocol SBSystemGestureRecognizerDelegate <UIGestureRecognizerDelegate>

@required

- (UIView *)viewForSystemGestureRecognizer:(UIGestureRecognizer *)recognizer;

@end
