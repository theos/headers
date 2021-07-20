#import <AVFoundation/AVFoundation.h>

@interface AVCaptureSession (Private)

- (NSMutableDictionary *)captureOptions API_DEPRECATED("Removed in iOS 8", ios(5.0, 8.0));

@end
