@class BBSectionInfo;

@protocol BBDataProvider <NSObject>

@required
- (NSArray *)bulletinsFilteredBy:(unsigned)by count:(unsigned)count lastCleared:(NSDate *)cleared;
- (NSString *)sectionIdentifier;
- (NSArray *)sortDescriptors;

@optional
- (BBSectionInfo *)defaultSectionInfo;
- (NSString *)sectionDisplayName;
- (NSArray *)sortDescriptors;

@end
