@class BBObserver, BBBulletinRequest;

@interface SBBulletinBannerController : NSObject

+ (instancetype)sharedInstance;

- (void)observer:(BBObserver *)observer addBulletin:(BBBulletin *)bulletin forFeed:(NSUInteger)feed; // 7.0 - 8.1
- (void)observer:(BBObserver *)observer addBulletin:(BBBulletin *)bulletin forFeed:(NSUInteger)feed playLightsAndSirens:(BOOL)playLightsAndSirens withReply:(id)reply; // 8.2 -

- (void)showTestBanner; // 5.0 - 6.1

@end
