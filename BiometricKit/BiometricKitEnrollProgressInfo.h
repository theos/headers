@interface BiometricKitEnrollProgressInfo : NSObject

@property (assign, nonatomic) NSInteger progress;
@property (nonatomic, retain) NSDictionary *captureImage;
@property (nonatomic, retain) NSDictionary *renderedImage;
@property (assign, nonatomic) NSInteger message;

@end
