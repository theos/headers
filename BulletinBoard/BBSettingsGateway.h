@class BBSectionInfo;

typedef void (^BBSettingsGatewayGetSectionInfoCompletion)(BBSectionInfo *sectionInfo);

@interface BBSettingsGateway : NSObject

- (void)getSectionInfoForSectionID:(NSString *)bundleID withCompletion:(BBSettingsGatewayGetSectionInfoCompletion)completion;

@end
