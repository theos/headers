#import <AVFoundation/AVFoundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface AVCaptureStillImageOutput (Private)

@property (assign) BOOL squareCropEnabled API_AVAILABLE(ios(7.0));
@property (assign) CGSize previewImageSize;

- (AVCaptureConnection *)firstActiveConnection;

@end
