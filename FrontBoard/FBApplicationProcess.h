#import "FBProcess.h"

@class BKSProcess;

@interface FBApplicationProcess : FBProcess {
    BKSProcess *_bksProcess;
}

+ (void)deleteAllJobs;

- (void)killForReason:(NSInteger)reason andReport:(BOOL)report withDescription:(NSString *)description;

@property (assign ,getter=isRecordingAudio, nonatomic) BOOL recordingAudio;                                                         //@synthesize recordingAudio=_recordingAudio - In the implementation block
@property (assign ,getter=isNowPlayingWithAudio, nonatomic) BOOL nowPlayingWithAudio;

- (void)processWillExpire:(BKSProcess *)process;

@end
