@protocol BBDataProvider;

@interface BBSectionInfo : NSObject

+ (instancetype)defaultSectionInfoForType:(NSUInteger)type;
+ (instancetype)defaultSectionInfoForSection:(id<BBDataProvider>)section;

@property NSUInteger notificationCenterLimit;
@property (nonatomic, retain) NSString *sectionID, *displayName;

@end
