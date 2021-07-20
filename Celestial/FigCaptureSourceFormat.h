#import <Foundation/Foundation.h>

API_AVAILABLE(ios(8.0))
@interface FigCaptureSourceFormat : NSObject

@property (readonly) NSArray *AVCaptureSessionPresets API_DEPRECATED("Removed in iOS 11", ios(8.0, 11.0));
@property (getter=isPhotoFormat, readonly) BOOL photoFormat API_DEPRECATED("Check format property instead", ios(8.0, 11.0));
@property (getter=isHighResPhotoFormat, readonly) BOOL highResPhotoFormat API_DEPRECATED("Check format property instead", ios(8.0, 11.0));

- (instancetype)initWithFigCaptureStreamFormatDictionary:(NSDictionary *)dictionary;

@end
