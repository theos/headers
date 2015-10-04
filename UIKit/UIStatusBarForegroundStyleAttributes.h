@interface UIStatusBarForegroundStyleAttributes : NSObject

- (NSString *)expandedNameForImageName:(NSString *)imageName;
- (UIImage *)untintedImageNamed:(NSString *)name;

@property (nonatomic, retain) UIColor *tintColor;

@end
