@class SBApplication;

@interface SBMediaController : NSObject

+ (instancetype)sharedInstance;

- (NSDictionary *)_nowPlayingInfo;
- (SBApplication *)nowPlayingApplication;
- (NSString *)nowPlayingTitle;
- (NSString *)nowPlayingArtist;
- (NSString *)nowPlayingAlbum;

@end
