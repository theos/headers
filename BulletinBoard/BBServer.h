#import <Foundation/Foundation.h>

@class BBBulletinRequest, BBDataProvider;

@interface BBServer : NSObject

- (void)_addDataProvider:(BBDataProvider *)dataProvider sortSectionsNow:(BOOL)sortSections;

@end

FOUNDATION_EXPORT void BBDataProviderAddBulletin(BBDataProvider *dataProvider, BBBulletinRequest *bulletinRequest);
FOUNDATION_EXPORT void BBDataProviderWithdrawBulletinsWithRecordID(BBDataProvider *dataProvider, NSString *recordID);
