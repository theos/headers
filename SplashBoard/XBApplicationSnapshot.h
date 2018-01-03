@interface XBApplicationSnapshot : NSObject

@property (nonatomic, copy) NSString * variantID;
@property (nonatomic, copy) NSString * launchInterfaceIdentifier;
@property (assign, nonatomic) CGFloat imageScale;
@property (assign, getter=isImageOpaque, nonatomic) BOOL imageOpaque;
@property (assign, nonatomic) CGAffineTransform imageTransform;
@property (assign, nonatomic) NSInteger imageOrientation;
@property (nonatomic, copy, readonly) NSString * identifier;
@property (nonatomic, copy, readonly) NSString * groupID;
@property (nonatomic, copy) NSString * name;
@property (nonatomic, copy) NSString * scheme;
@property (nonatomic, copy) NSString * requiredOSVersion;
@property (nonatomic, copy, readonly) NSString * path;
@property (nonatomic, copy, readonly) NSString * filename;
@property (getter=isExpired, nonatomic, readonly) BOOL expired;
@property (assign, nonatomic) NSInteger contentType;
@property (assign, getter=isFullScreen, nonatomic) BOOL fullScreen;
@property (assign, nonatomic) CGSize referenceSize;
@property (nonatomic, readonly) CGSize naturalSize;
@property (assign, nonatomic) CGRect contentFrame;
@property (nonatomic, readonly) BOOL hasFullSizedContent;
@property (assign, nonatomic) NSInteger interfaceOrientation;
@property (assign, nonatomic) NSInteger classicMode;
@property (assign, nonatomic) NSInteger compatibilityMode;
@property (assign, nonatomic) NSInteger backgroundStyle;

@end
