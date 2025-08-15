#import <Foundation/Foundation.h>

@class SBApplication;

static NSString *const kSBNowPlayingInfoArtworkDataKey = @"artworkData";

@interface SBMediaController : NSObject

+ (instancetype)sharedInstance;

- (void)_registerForNotifications;

- (NSDictionary *)_nowPlayingInfo;
- (SBApplication *)nowPlayingApplication;
- (NSString *)nowPlayingTitle;
- (NSString *)nowPlayingArtist;
- (NSString *)nowPlayingAlbum;

@end
