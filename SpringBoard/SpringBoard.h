@interface SpringBoard : UIApplication
- (void)applicationOpenURL:(NSURL *)url publicURLsOnly:(BOOL)publicOnly;
- (void)_relaunchSpringBoardNow;

@property (nonatomic, retain) UIWindow *window;
@end
