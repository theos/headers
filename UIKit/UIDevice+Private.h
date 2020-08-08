@interface UIDevice (Private)

@property (nonatomic, readonly) BOOL _supportsForceTouch NS_AVAILABLE_IOS(8_0);

+ (NSString *)modelSpecificLocalizedStringKeyForKey:(NSString *)key;

- (NSInteger)_graphicsQuality NS_AVAILABLE_IOS(7_0);

@end
