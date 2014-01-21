@interface SBApplication : NSObject

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *sandboxPath;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *displayIdentifier;

@end
