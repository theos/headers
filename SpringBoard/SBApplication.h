typedef NS_ENUM(NSUInteger, SBApplicationActivationSetting) {
	SBApplicationActivationSettingAppLink = 19
};

static NSString *const kSBAppTagsHidden = @"hidden";

@class FBScene;

@interface SBApplication : NSObject

@property (nonatomic, retain, readonly) NSString *bundleIdentifier NS_AVAILABLE_IOS(8_0); // Technically available in iOS 5 as well (https://github.com/MP0w/iOS-Headers/blob/master/iOS5.0/SpringBoard/SBApplication.h#L143) and even iOS 4, but you probably don't want to use that (see: Camera/Photos).
@property (nonatomic, retain, readonly) NSString *displayName;
@property (nonatomic, retain, readonly) NSString *displayIdentifier NS_DEPRECATED_IOS(4_0, 8_0);

@property (nonatomic, retain, readonly) NSString *sandboxPath;
@property (nonatomic, retain, readonly) NSString *bundleContainerPath;
@property (nonatomic, retain, readonly) NSString *path;

@property (nonatomic, retain, setter=_setTags:) NSArray *tags;

@property (readonly, nonatomic) pid_t pid;

- (NSNumber *)badgeNumberOrString;

- (BOOL)isRunning;
- (FBScene *)mainScene;

- (void)clearDeactivationSettings;

- (id)objectForActivationSetting:(SBApplicationActivationSetting)activationSetting;
- (NSInteger)flagForActivationSetting:(SBApplicationActivationSetting)activationSetting;
- (BOOL)boolForActivationSetting:(SBApplicationActivationSetting)activationSetting;
- (void)setObject:(id)object forActivationSetting:(SBApplicationActivationSetting)activationSetting;
- (void)setFlag:(NSInteger)flag forActivationSetting:(SBApplicationActivationSetting)activationSetting;
- (void)setBool:(BOOL)value forActivationSetting:(SBApplicationActivationSetting)activationSetting;

@end
