#import "SBApplication.h"

@interface SBMediaController : NSObject
+ (id)sharedInstance;
- (NSDictionary *)_nowPlayingInfo;
- (SBApplication *)nowPlayingApplication;
- (NSString *)nowPlayingTitle;
- (NSString *)nowPlayingArtist;
- (NSString *)nowPlayingAlbum;
@end
