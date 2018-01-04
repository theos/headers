#import "BBSectionInfoSettings.h"

@protocol BBDataProvider;

@interface BBSectionInfo : NSObject

+ (instancetype)defaultSectionInfoForType:(NSUInteger)type;
+ (instancetype)defaultSectionInfoForSection:(id <BBDataProvider>)section;

@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic, retain) NSString *subsectionID;
@property (nonatomic, retain) NSString *displayName;

@property (nonatomic, retain) BBSectionInfoSettings *sectionInfoSettings;

@property (nonatomic) BBSectionInfoPushSettings pushSettings;

@property NSUInteger notificationCenterLimit;

@end
