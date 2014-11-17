@interface SBApplication : NSObject

@property (nonatomic, retain, readonly) NSString *bundleIdentifier;
@property (nonatomic, retain, readonly) NSString *displayName;
@property (nonatomic, retain, readonly) NSString *displayIdentifier; // removed in 8.0

@property (nonatomic, retain, readonly) NSString *sandboxPath;
@property (nonatomic, retain, readonly) NSString *bundleContainerPath;
@property (nonatomic, retain, readonly) NSString *path;

@end
