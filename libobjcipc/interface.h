typedef NS_ENUM(NSUInteger, BKSProcessAssertionReason)
{
    kProcessAssertionReasonAudio = 1,
    kProcessAssertionReasonLocation,
    kProcessAssertionReasonExternalAccessory,
    kProcessAssertionReasonFinishTask,
    kProcessAssertionReasonBluetooth,
    kProcessAssertionReasonNetworkAuthentication,
    kProcessAssertionReasonBackgroundUI,
    kProcessAssertionReasonInterAppAudioStreaming,
    kProcessAssertionReasonViewServices
};

typedef NS_OPTIONS(NSUInteger, ProcessAssertionFlags)
{
    ProcessAssertionFlagNone = 0,
    ProcessAssertionFlagPreventSuspend         = 1 << 0,
    ProcessAssertionFlagPreventThrottleDownCPU = 1 << 1,
    ProcessAssertionFlagAllowIdleSleep         = 1 << 2,
    ProcessAssertionFlagWantsForegroundResourcePriority  = 1 << 3
};

typedef enum
{
	NSNotificationSuspensionBehaviorDrop = 1,
	NSNotificationSuspensionBehaviorCoalesce = 2,
	NSNotificationSuspensionBehaviorHold = 3,
	NSNotificationSuspensionBehaviorDeliverImmediately = 4
} NSNotificationSuspensionBehavior;

@interface SBApplication : NSObject

- (BOOL)suspendingUnsupported;
- (BOOL)isRunning;

@end

@interface SBApplicationController : NSObject

+ (instancetype)sharedInstance;
- (SBApplication *)applicationWithDisplayIdentifier:(NSString *)identifier;

@end

@interface SpringBoard : UIApplication

- (BOOL)launchApplicationWithIdentifier:(NSString *)identifier suspended:(BOOL)suspended;

@end

@interface BKSProcessAssertion : NSObject

@property(readonly, assign, nonatomic) BOOL valid;

- (id)initWithBundleIdentifier:(NSString *)bundleIdentifier flags:(unsigned)flags reason:(unsigned)reason name:(NSString *)name withHandler:(id)handler;
- (void)invalidate;

@end

@interface NSDistributedNotificationCenter : NSNotificationCenter

+ (instancetype)defaultCenter;

- (void)addObserver:(id)notificationObserver selector:(SEL)notificationSelector name:(NSString *)notificationName object:(NSString *)notificationSender suspensionBehavior:(NSNotificationSuspensionBehavior)suspendedDeliveryBehavior;

- (void)removeObserver:(id)notificationObserver name:(NSString *)notificationName object:(NSString *)notificationSender;

- (void)postNotificationName:(NSString *)notificationName object:(NSString *)notificationSender userInfo:(NSDictionary *)userInfo deliverImmediately:(BOOL)deliverImmediately;

@end