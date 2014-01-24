@class BBObserver, BBBulletinRequest;

@interface SBBulletinBannerController : NSObject

+ (instancetype)sharedInstance;

- (void)observer:(BBObserver *)observer addBulletin:(BBBulletinRequest *)bulletin forFeed:(NSUInteger)feed;
- (void)showTestBanner; // 5.0 - 6.1

@end
