#import <Foundation/Foundation.h>

API_AVAILABLE(ios(8.0))
@interface FigCaptureStillImageSettings : NSObject

@property (assign, nonatomic) bool outputMirroring;
@property (assign, nonatomic) bool thumbnailEnabled;
@property (assign, nonatomic) bool thumbnailMirroring API_DEPRECATED("Removed in iOS 10", ios(8.0, 10.0));

@property (assign, nonatomic) float scaleFactor;

@property (assign, nonatomic) int flashMode;
@property (assign, nonatomic) int HDRMode;
@property (assign, nonatomic) int outputOrientation;
@property (assign, nonatomic) int thumbnailOrientation API_DEPRECATED("Removed in iOS 10", ios(8.0, 10.0));

@property (assign, nonatomic) unsigned outputHeight;
@property (assign, nonatomic) unsigned outputWidth;
@property (assign, nonatomic) unsigned thumbnailHeight;
@property (assign, nonatomic) unsigned thumbnailWidth;

@end
