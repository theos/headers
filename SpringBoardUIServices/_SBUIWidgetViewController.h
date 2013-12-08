@interface _SBUIWidgetViewController : UIViewController

@property (readonly, assign, nonatomic) CGSize preferredViewSize;

- (void)invalidatePreferredViewSize;
- (void)requestLaunchOfURL:(NSURL *)url;
- (void)requestPresentationOfViewController:(UIViewController *)viewController presentationStyle:(UIModalPresentationStyle)style context:(void *)context completion:(void (^)(void))completion;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;

@end
