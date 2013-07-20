@interface UIImage (Private)
+ (UIImage *)kitImageNamed:(NSString *)name;
- (id)_initWithIOSurface:(IOSurfaceRef)surface scale:(CGFloat)scale orientation:(UIImageOrientation)orientation;
@end
