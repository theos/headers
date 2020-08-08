#include <sys/cdefs.h>

@class BBBulletinRequest;
@protocol BBDataProvider;

@interface BBServer : NSObject

- (void)_addDataProvider:(BBDataProvider *)dataProvider sortSectionsNow:(BOOL)sortSections;

@end

__BEGIN_DECLS

void BBDataProviderAddBulletin(BBDataProvider *dataProvider, BBBulletinRequest *bulletinRequest);
void BBDataProviderWithdrawBulletinsWithRecordID(BBDataProvider *dataProvider, NSString *recordID);

__END_DECLS
