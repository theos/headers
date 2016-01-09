@interface FBSSceneSettings : NSObject

@property (getter=isBackgrounded, nonatomic, readonly) BOOL backgrounded;

- (instancetype)initWithSettings:(FBSSceneSettings *)settings;

@end
