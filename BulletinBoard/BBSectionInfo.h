@interface BBSectionInfo : NSObject

+ (instancetype)defaultSectionInfoForType:(unsigned)type;

@property unsigned notificationCenterLimit;
@property (nonatomic, retain) NSString *sectionID;

@end
