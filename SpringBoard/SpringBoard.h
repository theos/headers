@interface SpringBoard : UIApplication

- (void)applicationOpenURL:(NSURL *)url publicURLsOnly:(BOOL)publicOnly;
- (void)relaunchSpringBoard;
- (void)_relaunchSpringBoardNow;
- (void)undim;

@property (nonatomic, retain) UIWindow *window;
@property (readonly) BOOL isLocked;
@property (readonly) BOOL _isDim;

@end
