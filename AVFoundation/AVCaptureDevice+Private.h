#import <AVFoundation/AVFoundation.h>

@interface AVCaptureDevice (Private)

- (AVCaptureSession *)session API_DEPRECATED("Removed in iOS 8", ios(5.0, 8.0));

- (BOOL)isFaceDetectionSupported API_AVAILABLE(ios(5.0));

@end
