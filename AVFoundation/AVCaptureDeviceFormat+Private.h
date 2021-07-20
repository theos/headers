#if __IPHONE_OS_VERSION_MIN_REQUIRED >= __IPHONE_7_0

#import <AVFoundation/AVFoundation.h>

@class AVCaptureDeviceFormat;

@interface AVCaptureDeviceFormat (Private)

- (CMVideoDimensions)sensorDimensions;

@end

#endif
