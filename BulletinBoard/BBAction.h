typedef void (^BBActionCallblock)();

@interface BBAction : NSObject

+ (instancetype)action;
+ (instancetype)actionWithLaunchBundleID:(NSString *)bundleID callblock:(BBActionCallblock)callblock;
+ (instancetype)actionWithLaunchURL:(NSURL *)url callblock:(BBActionCallblock)callblock;
+ (instancetype)actionWithCallblock:(BBActionCallblock)callblock;

@property (nonatomic, retain) NSString *bundleID;

@end
