@interface UIDevice (Private)

@property (nonatomic, readonly) BOOL _supportsForceTouch; NS_AVAILABLE(8_0)
- (NSInteger)_graphicsQuality; NS_AVAILABLE(7_0)
+ (NSString *)modelSpecificLocalizedStringKeyForKey:(NSString *)key;

@end
