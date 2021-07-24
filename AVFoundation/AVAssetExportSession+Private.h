#import <AVFoundation/AVFoundation.h>

@interface AVAssetExportSession (Private)

- (void)setMinVideoFrameDuration:(CMTime)duration;

@end
