@interface SparkAppItem : NSObject
@property (nonatomic, retain) NSString* bundleIdentifier;
@property (nonatomic, retain) NSString* displayName;

- (UIImage*)icon;
@end
