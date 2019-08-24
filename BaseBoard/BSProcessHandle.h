@class BSMachPortTaskNameRight;

@interface BSProcessHandle : NSObject

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundlePath;
@property (nonatomic, copy) NSString *jobLabel;
@property (nonatomic, readonly) pid_t pid;
@property (nonatomic, retain, readonly) BSMachPortTaskNameRight *taskNameRight;
@property (nonatomic, readonly) NSInteger type; // TODO
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
