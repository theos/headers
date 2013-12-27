@class BBBulletinRequest;
@protocol BBDataProvider;

@interface BBServer : NSObject

- (void)_addDataProvider:(id<BBDataProvider>)dataProvider sortSectionsNow:(BOOL)sortSections;

@end

#ifdef __cplusplus
extern "C" {
#endif
	extern void BBDataProviderAddBulletin(id<BBDataProvider> dataProvider, BBBulletinRequest *bulletinRequest);
	extern void BBDataProviderWithdrawBulletinsWithRecordID(id<BBDataProvider> dataProvider, NSString *recordID);
#ifdef __cplusplus
}
#endif
