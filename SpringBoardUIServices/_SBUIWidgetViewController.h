#import "_SBUIWidgetHost.h"

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost>

@property (copy) NSString *widgetIdentifier;
@property (readonly, assign, nonatomic) CGSize preferredViewSize; // override this to set a height
@property (readonly, assign, nonatomic) id<_SBUIWidgetHost> widgetHost;

- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;

- (void)invalidatePreferredViewSize;

- (void)requestLaunchOfURL:(NSURL *)url;
- (void)requestPresentationOfViewController:(UIViewController *)viewController presentationStyle:(UIModalPresentationStyle)presentationStyle context:(void *)context completion:(void(^)(void))completion; // this method appears to be unimplemented in 7.0

@end
