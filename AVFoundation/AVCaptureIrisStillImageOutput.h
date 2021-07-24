#import <AVFoundation/AVFoundation.h>
#import <Celestial/FigCaptureStillImageSettings.h>

API_DEPRECATED("Removed in iOS 10", ios(9.0, 10.0))
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
@interface AVCaptureIrisStillImageOutput : AVCaptureOutput

- (AVCaptureStillImageOutput *)_sanitizedSettingsForSettings:(FigCaptureStillImageSettings *)settings;

@end
#pragma clang diagnostic pop
